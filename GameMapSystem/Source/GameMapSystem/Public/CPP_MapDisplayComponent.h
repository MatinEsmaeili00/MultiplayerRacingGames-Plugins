// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CPP_MapManagerComponent.h"
#include "CPP_UW_Map.h"
#include "Blueprint/UserWidget.h"
#include "CPP_MapDisplayComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEMAPSYSTEM_API UCPP_MapDisplayComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCPP_MapDisplayComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
	void CallInitializeMiniMap();
	void CallUpdateMiniMap();


	UPROPERTY(EditAnywhere,Category = "Properties")
	TSubclassOf<UCPP_UW_Map> MiniMapWidgetClass;

	UPROPERTY()
	UCPP_UW_Map* MiniMapWidgetInstance;

	UPROPERTY(EditAnywhere, Category = "Properties", meta = (ClampMin = "1", ClampMax = "10", UIMin = "1", UIMax = "10"))
	int32 IconUpdateSmoothness = 1;

	// UPROPERTY(EditAnywhere, Category = "Properties", meta = (ClampMin = "1", ClampMax = "10", UIMin = "1", UIMax = "10"))
	// int32 MapWidgetStartingDelay = 1;

	float GetIconUpdateMappedValue() const
	{
		// Inverse mapping: 1 → 0.2, 10 → 0.001
		return FMath::Lerp(0.2f, 0.001f, (IconUpdateSmoothness - 1) / 9.0f);
	}

	// // 2. The actual computed value (not exposed)
	// float GetMapWidgetDelayMappedValue() const
	// {
	// 	// Maps from 1–10 to 0.001–0.2 linearly
	// 	return FMath::Lerp(0.001f, 0.2f, (MapWidgetStartingDelay - 1) / 9.0f);
	// }

	FTimerHandle InitMiniMapTimerHandle;

	FTimerHandle UpdateMiniMapTimerHandle;


	FTimerHandle SetupMiniMapTimerHandle;


	void SetupMiniMap();
	void AddUIToDisplay();

	bool isUIAddedToViewPort= false;
		
};
