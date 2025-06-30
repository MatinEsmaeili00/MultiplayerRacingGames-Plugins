// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MapManagerComponent.h"

#include "EngineUtils.h"

// Sets default values for this component's properties
UCPP_MapManagerComponent::UCPP_MapManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UCPP_MapManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCPP_MapManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



void UCPP_MapManagerComponent::UpdatePlayerData()
{
	

	APlayerController* LocalPC = GetWorld()->GetFirstPlayerController();
	APawn* LocalPawn = LocalPC ? LocalPC->GetPawn() : nullptr;

	PlayerLocations.Empty();

	for (TActorIterator<APawn> It(GetWorld()); It; ++It)
	{
		APawn* Pawn = *It;
		if (!Pawn) continue;


		FPlayerMiniMapData Data;
		Data.WorldLocation = Pawn->GetActorLocation();
		Data.PlayerState = Pawn->GetPlayerState();
		Data.bIsLocalPlayer = (Pawn == LocalPawn); // or use PlayerController comparison

		PlayerLocations.Add(Data);
	}

}
