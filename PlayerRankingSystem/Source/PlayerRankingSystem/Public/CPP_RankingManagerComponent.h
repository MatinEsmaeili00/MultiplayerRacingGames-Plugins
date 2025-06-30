// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CPP_RankingSplineActor.h"
#include "CPP_RankingManagerComponent.generated.h"



USTRUCT(BlueprintType)
struct FPlayerInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite,EditAnywhere)  // Allow access in Blueprints
	AActor* PlayerActor;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)  // Allow access in Blueprints
	float Distance;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)  // Allow access in Blueprints
	float Progress;

	FPlayerInfo() : PlayerActor(nullptr), Distance(0.0f), Progress(0.0f)  {} 
	FPlayerInfo(AActor* InPlayerActor, float InDistance, float InProgress)
		: PlayerActor(InPlayerActor), Distance(InDistance),Progress(InProgress) {}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLAYERRANKINGSYSTEM_API UCPP_RankingManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCPP_RankingManagerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;



public:
	TArray<float> CumulativeDistances;
	TArray<AActor*> FoundPlayersActors;

	// UPROPERTY(Replicated) // what does Replicated do
	// TArray<FPlayerDistance> FPlayerDistances;

	//UPROPERTY(ReplicatedUsing = OnRep_PlayerDistances)
	TArray<FPlayerInfo> FPlayerInfos;
	

	float  TrackLength;

private:
	FTimerHandle PlacementUpdateTimerHandle; // Timer for updating placements

private:
	FTimerHandle UpdateMulticastTimerHandle; // Timer for updating multicast placements

	float GetPlayerProgressPercent(AActor* InPlayerActor,USplineComponent* InSplineComponent, float InTrackLength ); // replaced with a new version

public:

	//void PrecomputeSplineDistances(); replaced with a new version!


	float GetPlayerDistanceAlongSpline(AActor* InPlayerActor, USplineComponent* InSplineComponent);
	void CalculatePlayerPlacements(TArray<FPlayerInfo>& InOutFPlayerInfos,TArray<AActor*> InFoundPlayerActors,USplineComponent* InSplineComponent, float InTrackLength);
	void ServerCalculatePlayerPlacements_Implementation();
	void GetAllPlayerActor(TArray<AActor*>& InOutFoundPlayersActor);



public:

	/** Multicast function to update player placements on all clients */
	// UFUNCTION(Client, Reliable)
	// void MulticastUpdatePlayerPlacements(const TArray<FPlayerDistance>& PlayerDistances);

	/** Server function to calculate placements */
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerCalculatePlayerPlacements();
	//	void ServerCalculatePlayerPlacements_Implementation();
	bool ServerCalculatePlayerPlacements_Validate();
	//void TriggerMulticastUpdate();

	void NewClientJoined();


	ACPP_RankingSplineActor* SplineActor;
	USplineComponent* SplineComponent;

	
	
};
