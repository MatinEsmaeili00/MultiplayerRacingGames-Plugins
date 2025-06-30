// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_RankingManagerComponent.h"


#include "CPP_RankingDisplayComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UCPP_RankingManagerComponent::UCPP_RankingManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	SetIsReplicatedByDefault(true);  // ✅ Ensures the component is replicated // *******

	
	// ...
}


// Called when the game starts
void UCPP_RankingManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...


		
	if (GetOwner() && GetOwner()->HasAuthority())
	{

		UE_LOG(LogTemp, Error, TEXT("This should happen once !!!"))

		SplineActor = Cast<ACPP_RankingSplineActor>(UGameplayStatics::GetActorOfClass(GetWorld(), ACPP_RankingSplineActor::StaticClass()));
		if (!SplineActor){UE_LOG(LogTemp, Error, TEXT("Couldn't find the Spline Actor!"));}
	
		SplineComponent = SplineActor->SplineComponent;
		if (!SplineComponent){UE_LOG(LogTemp, Error, TEXT("Couldn't find the Spline Component on the Spline Actor!"));}

		TrackLength = SplineComponent->GetSplineLength();


	
		// Start the timer to call ServerCalculatePlayerPlacements every 0.5 seconds
		GetWorld()->GetTimerManager().SetTimer(
			PlacementUpdateTimerHandle,
			this,
			&UCPP_RankingManagerComponent::ServerCalculatePlayerPlacements,
			0.5f,   // Interval (in seconds)
			true    // Loop
		);
	}
	
	
	
}


// Called every frame
void UCPP_RankingManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

#pragma region "Old way of calculation, replaced with UE funcitons"
// old way of calculating the player ranking the system replace with the UE functions

// void UCPP_PlayerPlacementComponent::PrecomputeSplineDistances() 
// {
// 	// Ensure we have a valid spline component
// 	ACPP_TrackerSplineActor* SplineActor = Cast<ACPP_TrackerSplineActor>(UGameplayStatics::GetActorOfClass(GetWorld(), ACPP_TrackerSplineActor::StaticClass()));
// 	if (!SplineActor) return;
//
// 	USplineComponent* SplineComponent = SplineActor->SplineComponent;
// 	if (!SplineComponent) return;
//
// 	CumulativeDistances.Empty();
// 	float TotalDistance = 0.0f;
//
// 	int32 NumPoints = SplineComponent->GetNumberOfSplinePoints();
// 	for (int32 i = 0; i < NumPoints - 1; i++)
// 	{
// 		FVector Start = SplineComponent->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::World);
// 		FVector End = SplineComponent->GetLocationAtSplinePoint(i + 1, ESplineCoordinateSpace::World);
// 		float SegmentDistance = FVector::Distance(Start, End);
//
// 		TotalDistance += SegmentDistance;
// 		CumulativeDistances.Add(TotalDistance);
// 	}
//
// 	TrackLength = TotalDistance; // Store total track length for normalization
// }
#pragma endregion


void UCPP_RankingManagerComponent::CalculatePlayerPlacements(TArray<FPlayerInfo>& InOutFPlayerInfos,TArray<AActor*> InFoundPlayerActors,USplineComponent* InSplineComponent, float InTrackLength)
{
	
	InOutFPlayerInfos.Empty();
	for (AActor* PlayerActor : InFoundPlayerActors)
	{
		float PlayerDistance = GetPlayerDistanceAlongSpline(PlayerActor,InSplineComponent);
		float PlayerProgress = GetPlayerProgressPercent(PlayerActor,InSplineComponent,InTrackLength);
		
		InOutFPlayerInfos.Add(FPlayerInfo{PlayerActor, PlayerDistance,PlayerProgress});
	}

	// Sort players by their distance along the spline
	InOutFPlayerInfos.Sort([](const FPlayerInfo& A, const FPlayerInfo& B) {
		return A.Distance > B.Distance; // Descending order
	});

	
#pragma region "Debugging the player list"
	// Debugging the player list
	
	// for (const auto& PlayerDistance : FPlayerDistances)
	// {
	// 	if (PlayerDistance.PlayerActor)
	// 	{
	// 		UE_LOG(LogTemp, Warning, TEXT("Player: %s, Distance: %f"), *PlayerDistance.PlayerActor->GetName(), PlayerDistance.Distance);
	// 	}
	// }
#pragma endregion

	for (int32 i = 0; i < InOutFPlayerInfos.Num(); i++)
	{
		//APlayerPlacement_testCharacter* CurrentCharacter = Cast<APlayerPlacement_testCharacter>(InOutFPlayerInfos[i].PlayerActor);
		UCPP_RankingDisplayComponent* MyDisplayComponent = InOutFPlayerInfos[i].PlayerActor->FindComponentByClass<UCPP_RankingDisplayComponent>();
		if (MyDisplayComponent)
		{
			//MyComponent->RacerPosition = i + 1; // Assign placement (1-based index)
			//MyComponent->OnRep_RacerPosition(); // Manually trigger the UI update on the server
			MyDisplayComponent->Multicast_SetPlacement(i + 1); // ✅
			MyDisplayComponent->Multicast_SetProgress(InOutFPlayerInfos[i].Progress);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Couldn't find the Ranking Display Component!"));
		}
	}


}


// Server function to calculate placements
void UCPP_RankingManagerComponent::ServerCalculatePlayerPlacements_Implementation()
{
	if (!GetOwner() || !GetOwner()->HasAuthority()) return;
	
	CalculatePlayerPlacements( FPlayerInfos, FoundPlayersActors,SplineComponent, TrackLength);

}


bool UCPP_RankingManagerComponent::ServerCalculatePlayerPlacements_Validate()
{
	return true;
}

void UCPP_RankingManagerComponent::NewClientJoined()
{

	UE_LOG(LogTemp, Error, TEXT("This is on the Server!!"));
	
	GetAllPlayerActor(FoundPlayersActors);
	
}

void UCPP_RankingManagerComponent::GetAllPlayerActor(TArray<AActor*>& InOutFoundPlayersActor)
{
	InOutFoundPlayersActor.Empty();
	
	TArray<AActor*> AllPawns;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawn::StaticClass(), AllPawns);

	for (AActor* Actor : AllPawns)
	{
		if (Actor->FindComponentByClass<UCPP_RankingDisplayComponent>())
		{
			InOutFoundPlayersActor.Add(Actor);
		}
	}
}

float UCPP_RankingManagerComponent::GetPlayerDistanceAlongSpline(AActor* InPlayerActor,USplineComponent* InSplineComponent)
{
	
	FVector PlayerLocation = InPlayerActor->GetActorLocation();

	// Find the closest distance along the spline to the player's location
	float DistanceAlongSpline = InSplineComponent->FindInputKeyClosestToWorldLocation(PlayerLocation); // find the nearest point on the spline to the player
	float SplineDistance = InSplineComponent->GetDistanceAlongSplineAtSplineInputKey(DistanceAlongSpline); // retuning the cumulative distance along the spline at that point

	return SplineDistance;
}
float UCPP_RankingManagerComponent::GetPlayerProgressPercent(AActor* InPlayerActor,USplineComponent* InSplineComponent, float InTrackLength )
{
	float PlayerDistance = GetPlayerDistanceAlongSpline(InPlayerActor,InSplineComponent);
	if (InTrackLength <= 0.0f)
	{
		return 0.0f; // Prevent divide-by-zero
	}
	float Progress = (PlayerDistance / InTrackLength) * 100.0f;
	return FMath::Clamp(Progress, 0.0f, 100.0f); // Ensure it stays in range
}


