// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_RankingDisplayComponent.h"

#include "CPP_RankingManagerComponent.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UCPP_RankingDisplayComponent::UCPP_RankingDisplayComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCPP_RankingDisplayComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	
	// To make sure Only the local player call on server once!
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn && OwnerPawn->IsLocallyControlled())
	{
		Server_NotifyPlayerReady();
		CreateAddWidgetToViewport();
		
	}
	
}


// Called every frame
void UCPP_RankingDisplayComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


// will update the widget on this client locally 
void UCPP_RankingDisplayComponent::OnRep_PlacementWidgetUpdate()
{
	//UpdateRacerPlaceText(RacerPosition); // Update UI when placement changes
	
		if (PlacementWidgetInstance)
		{
			// Update the placement text
			PlacementWidgetInstance->SetPlacementText(RacerPosition);
		}
	
}

void UCPP_RankingDisplayComponent::OnRep_ProgressWidgetUpdate()
{
	//UpdateRacerPlaceText(RacerPosition); // Update UI when placement changes
	
	if (ProgressWidgetInstance)
	{
		// Update the placement text
		ProgressWidgetInstance->SetProgressText(RacerProgress);
	}
	
}

void UCPP_RankingDisplayComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UCPP_RankingDisplayComponent, RacerPosition);
	DOREPLIFETIME(UCPP_RankingDisplayComponent, RacerProgress);
}

void UCPP_RankingDisplayComponent::CreateAddWidgetToViewport()
{
	if (PlacementWidgetClass)
	{
		// Create the widget instance
		PlacementWidget = CreateWidget<UUserWidget>(GetWorld(), PlacementWidgetClass);
		if (PlacementWidget)
		{
			// Add the widget to the player's viewport
			PlacementWidget->AddToViewport();

			// keeping my widget custom parent class so I can access it's variables 
			PlacementWidgetInstance = Cast<UCPP_UW_RankingWidget>(PlacementWidget);
			
		}
	}

	if (ProgressWidgetClass)
	{
		// Create the widget instance
		ProgressWidget = CreateWidget<UUserWidget>(GetWorld(), ProgressWidgetClass);
		if (ProgressWidget)
		{
			// Add the widget to the player's viewport
			ProgressWidget->AddToViewport();

			// keeping my widget custom parent class so I can access it's variables 
			ProgressWidgetInstance = Cast<UCPP_UW_ProgressWidget>(ProgressWidget);
			
		}
	}
	
}

void UCPP_RankingDisplayComponent::Multicast_SetPlacement_Implementation(int32 NewPlacement) // Calling the UI update on the Client!
{
		RacerPosition = NewPlacement;
		OnRep_PlacementWidgetUpdate(); // Call to update widget locally
}

void UCPP_RankingDisplayComponent::Multicast_SetProgress_Implementation(float NewProgress) // Calling the UI update on the Client!
{
	RacerProgress = NewProgress;
	OnRep_ProgressWidgetUpdate(); // Call to update widget locally
}


//TSet<APlayerController*> ReadyPlayers;

void UCPP_RankingDisplayComponent::Server_NotifyPlayerReady_Implementation()
{
	UE_LOG(LogTemp, Error, TEXT("Player is Ready!"));

	AGameStateBase* GS = Cast<AGameStateBase>(GetWorld()->GetGameState());
	if (GS)
	{
		UCPP_RankingManagerComponent* Comp = GS->FindComponentByClass<UCPP_RankingManagerComponent>();
		if (Comp)
		{
			Comp->NewClientJoined();  // a client-only function without RPC
		}
	}
}

