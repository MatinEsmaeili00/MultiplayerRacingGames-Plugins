// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_UW_ProgressWidget.h"
#include "CPP_UW_RankingWidget.h"
#include "Components/ActorComponent.h"
#include "CPP_RankingDisplayComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLAYERRANKINGSYSTEM_API UCPP_RankingDisplayComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCPP_RankingDisplayComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	

	// this is for character placement UI  
public:
	UPROPERTY(ReplicatedUsing = OnRep_PlacementWidgetUpdate, VisibleAnywhere, BlueprintReadOnly, Category = "Race")
	int32 RacerPosition;

	UPROPERTY(ReplicatedUsing = OnRep_ProgressWidgetUpdate, VisibleAnywhere, BlueprintReadOnly, Category = "Race")
	float RacerProgress;

	UFUNCTION()
	void OnRep_PlacementWidgetUpdate();
	UFUNCTION()
	void OnRep_ProgressWidgetUpdate();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


public:
	// Widget class to use for placement UI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> PlacementWidgetClass;

	// Instance of the widget
	UPROPERTY()
	UUserWidget* PlacementWidget;

	// Widget class to use for placement UI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> ProgressWidgetClass;

	// Instance of the widget
	UPROPERTY()
	UUserWidget* ProgressWidget;


	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetPlacement(int32 NewPlacement);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetProgress(float NewProgress);

	UFUNCTION(Server, Reliable)
	void Server_NotifyPlayerReady();

	void CreateAddWidgetToViewport();

	UCPP_UW_RankingWidget* PlacementWidgetInstance;

	UCPP_UW_ProgressWidget* ProgressWidgetInstance;
	
};
