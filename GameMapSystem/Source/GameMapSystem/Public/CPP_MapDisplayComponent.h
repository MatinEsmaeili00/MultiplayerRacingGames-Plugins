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


	UPROPERTY(EditAnywhere)
	TSubclassOf<UCPP_UW_Map> MiniMapWidgetClass;

	UPROPERTY()
	UCPP_UW_Map* MiniMapWidgetInstance;


	FTimerHandle InitMiniMapTimerHandle;

	FTimerHandle UpdateMiniMapTimerHandle;


	FTimerHandle SetupMiniMapTimerHandle;


	void SetupMiniMap();
	void AddUIToDisplay();

	bool isUIAddedToViewPort= false;
		
};
