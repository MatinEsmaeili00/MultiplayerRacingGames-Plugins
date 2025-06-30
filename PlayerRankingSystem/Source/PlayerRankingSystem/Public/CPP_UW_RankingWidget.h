// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "CPP_UW_RankingWidget.generated.h"

/**
 * 
 */
UCLASS()
class PLAYERRANKINGSYSTEM_API UCPP_UW_RankingWidget : public UUserWidget
{
	GENERATED_BODY()


public:
	UPROPERTY(meta = (BindWidget)) // Automatically binds to PlacementText in the Widget Blueprint
	UTextBlock* PlacementText;

	void SetPlacementText(int32 NewPlacement); // Function to set the placement text
};
