// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "CPP_UW_Map.generated.h"

/**
 * 
 */


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestSetupMiniMap);


UCLASS()
class GAMEMAPSYSTEM_API UCPP_UW_Map : public UUserWidget
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UCanvasPanel* MiniMapCanvas;
	// Player Icon
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> PlayerIconWidgetClass;

	//enemy Icon
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> EnemyIconWidgetClass;


	UPROPERTY()
	class ACPP_MapVolumeBox* VolumeRef;

	UPROPERTY()
	class UCPP_MapManagerComponent* DataComponentRef;

	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* IconsHolder;



public:
	// 🔔 Delegate the component will bind to
	UPROPERTY(BlueprintAssignable, Category = "MiniMap")
	FOnRequestSetupMiniMap OnRequestSetup;

#if WITH_EDITOR
	virtual void SynchronizeProperties() override;
#endif



	
	void InitializeMiniMap();
	void UpdateMiniMap();

	bool isPlayerInside= false;
	


	FVector PlayerLocation;
	FVector MinBound;
	FVector MaxBound;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MiniMap|Visuals")
	UTexture2D* MiniMapBackgroundTexture;

	// Checkbox: lets user choose whether to use slider or manual sizing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MiniMap|Layout")
	bool bUseSliderForScaling = true;

	// Slider value: only editable when checkbox is checked
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MiniMap|Layout", meta = (EditCondition = "bUseSliderForScaling", ClampMin = "0.1", ClampMax = "3.0", UIMin = "0.1", UIMax = "3.0"))
	float MiniMapScaleSliderValue = 1.0f;

	UPROPERTY(meta = (BindWidget))
	class UImage* BackgroundImage;


	UFUNCTION(CallInEditor, BlueprintCallable, Category = "MiniMap|Editor")
	void UpdateMiniMapLayoutFromTexture();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MiniMap|Layout")
	FVector2D MiniMapPosition = FVector2D(0.f, 0.f); // Default top-left


	
};
