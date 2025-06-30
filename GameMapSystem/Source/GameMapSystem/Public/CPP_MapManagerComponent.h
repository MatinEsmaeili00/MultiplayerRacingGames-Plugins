// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CPP_MapManagerComponent.generated.h"



USTRUCT(BlueprintType)
struct FPlayerMiniMapData
{
	GENERATED_BODY()

	UPROPERTY()
	APlayerState* PlayerState;

	UPROPERTY()
	FVector WorldLocation;


	UPROPERTY()
	bool bIsLocalPlayer = false;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEMAPSYSTEM_API UCPP_MapManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCPP_MapManagerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	UPROPERTY()
	TArray<FPlayerMiniMapData> PlayerLocations;

	void UpdatePlayerData();
};
