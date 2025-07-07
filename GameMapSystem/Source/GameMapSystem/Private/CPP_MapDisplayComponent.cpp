// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MapDisplayComponent.h"



// Sets default values for this component's properties
UCPP_MapDisplayComponent::UCPP_MapDisplayComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UCPP_MapDisplayComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	GetWorld()->GetTimerManager().SetTimer(
		SetupMiniMapTimerHandle,
		this,
		&UCPP_MapDisplayComponent::SetupMiniMap,
		0.01f,
		false
	);
	
	
}


// Called every frame
void UCPP_MapDisplayComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



void UCPP_MapDisplayComponent::CallInitializeMiniMap()
{
	if (MiniMapWidgetInstance)
	{
		MiniMapWidgetInstance->InitializeMiniMap();
	}
}

void UCPP_MapDisplayComponent::CallUpdateMiniMap()
{
	{
		if (MiniMapWidgetInstance)
		{
			
			{
				if (MiniMapWidgetInstance->isPlayerInside&&!isUIAddedToViewPort)
				{
					AddUIToDisplay();
				}
			}
			
			if (MiniMapWidgetInstance->DataComponentRef)
			{
				MiniMapWidgetInstance->DataComponentRef->UpdatePlayerData();
			}
		
			
			MiniMapWidgetInstance->UpdateMiniMap();
		}
	}

}

void UCPP_MapDisplayComponent::SetupMiniMap()
{
	if (APlayerController* PC = Cast<APlayerController>(GetOwner()))
	{
		if (PC->IsLocalController() && MiniMapWidgetClass)
		{
			MiniMapWidgetInstance = CreateWidget<UCPP_UW_Map>(PC, MiniMapWidgetClass);
			if (MiniMapWidgetInstance)
			{
				//MiniMapWidgetInstance->DisplayComponentRef = this;
				// Call InitializeMiniMap once immediately
				CallInitializeMiniMap();

				// Start updating minimap repeatedly
				GetWorld()->GetTimerManager().SetTimer(
					UpdateMiniMapTimerHandle,
					this,
					&UCPP_MapDisplayComponent::CallUpdateMiniMap,
					GetIconUpdateMappedValue(),
					true
				);
					
				
				
			}
		}
	}
}

void UCPP_MapDisplayComponent::AddUIToDisplay()
{
	isUIAddedToViewPort = true;
	// GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow,
	// 					FString::Printf(TEXT("Delegate called in the component!!!" )));
	
	MiniMapWidgetInstance->AddToViewport();

	
}



