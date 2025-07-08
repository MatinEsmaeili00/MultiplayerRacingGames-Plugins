// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_UW_Map.h"

#include "CPP_MapManagerComponent.h"
#include "CPP_MapVolumeBox.h"
#include "EngineUtils.h"
#include "GameFramework/PlayerState.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "GameFramework/GameStateBase.h"

#if WITH_EDITOR
void UCPP_UW_Map::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	UpdateMiniMapLayoutFromTexture(); // Reapply layout anytime UMG recompiles
}
#endif


void UCPP_UW_Map::InitializeMiniMap()
{
	// Find the volume and data component
	for (TActorIterator<ACPP_MapVolumeBox> It(GetWorld()); It; ++It)
	{
		VolumeRef = *It;
		break;
	}

	APlayerController* PC = GetOwningPlayer();
	if (PC && PC->GetWorld()->GetGameState())
	{
		DataComponentRef = PC->GetWorld()->GetGameState()->FindComponentByClass<UCPP_MapManagerComponent>();
	}
}

// void UCPP_UW_Map::UpdateMiniMap()
// {
//
// 	UE_LOG(LogTemp, Warning, TEXT("✅ Broadcast fired: %s"), OnRequestSetup.IsBound() ? TEXT("BOUND") : TEXT("NOT BOUND"));
// 	
// 	
// 	if (!VolumeRef || !DataComponentRef || !MiniMapCanvas) return;
//
// 	FVector Origin = VolumeRef->GetOrigin();
// 	FVector Extent = VolumeRef->GetExtent();
//
// 	IconsHolder->ClearChildren();
//
//
// 	
// 	for (const FPlayerMiniMapData& PlayerData : DataComponentRef->PlayerLocations)
// 	{
// 		
// 		
// 		if (!IconsHolder)
// 		{
// 			UE_LOG(LogTemp, Error, TEXT("IconsHolder is NULL! Cannot add icon."));
// 			return;
// 		}
//
// 		if (!PlayerIconWidgetClass)
// 		{
// 			UE_LOG(LogTemp, Error, TEXT("PlayerIconWidgetClass is NULL! Cannot create icon."));
// 			return;
// 		}
//
// 		
// 		FVector RelativeLocation = PlayerData.WorldLocation - Origin;
// 		FVector2D CanvasSize = IconsHolder->GetCachedGeometry().GetLocalSize();
//
// 		
// #pragma region "Main debugger"
// 		//main debugger
// 	 	UE_LOG(LogTemp, Warning, TEXT("Origin: %s | PlayerLocation: %s | Relative: %s | Extent: %s"),
// 	 *Origin.ToString(),
// 	 *PlayerData.WorldLocation.ToString(),
// 	 *(PlayerData.WorldLocation - Origin).ToString(),
// 	 *Extent.ToString());
// #pragma endregion
//
// 		
//
//
// 		PlayerLocation = PlayerData.WorldLocation; // already stored
//
// 		 MinBound = Origin - Extent;
// 		 MaxBound = Origin + Extent;
//
//
// #pragma region "Debugging the map system visually"
// 		// // Draw the box boundaries in RED
// 		// DrawDebugBox(
// 		// 	GetWorld(),
// 		// 	Origin,          // Center
// 		// 	Extent,          // Half-size
// 		// 	FColor::Red,     // Color
// 		// 	false,           // Persistent? false = disappears after a few seconds
// 		// 	0.2f,            // Lifetime (how long to stay on screen)
// 		// 	0,               // Depth Priority
// 		// 	10.f             // Thickness
// 		// );
// 		//
// 		// // Draw the player location as a BLUE POINT
// 		// DrawDebugPoint(
// 		// 	GetWorld(),
// 		// 	PlayerData.WorldLocation,
// 		// 	20.f,              // Size of the point
// 		// 	FColor::Blue,      // Color
// 		// 	false,             // Persistent?
// 		// 	0.2f               // Lifetime
// 		// );
// 		//
// 		// // Line from center of volume to player
// 		// DrawDebugLine(
// 		// 	GetWorld(),
// 		// 	Origin,
// 		// 	PlayerData.WorldLocation,
// 		// 	FColor::Green,
// 		// 	false,
// 		// 	0.2f,
// 		// 	0,
// 		// 	5.f
// 		// );
// 		//
// 		//
// #pragma endregion
//
// 		if (PlayerLocation.X >= MinBound.X && PlayerLocation.X <= MaxBound.X &&
// 			PlayerLocation.Y >= MinBound.Y && PlayerLocation.Y <= MaxBound.Y)
// 		{
//
// 			if (!isPlayerInside)
// 			{
// 				isPlayerInside = true;
//
// 				// GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red,
// 				// 	FString::Printf(TEXT("Send the request to call the component!" )));
// 				
// 				
// 			}
//
// 			UE_LOG(LogTemp, Warning, TEXT("UpdateMiniMap : player is inside the volume box!"));
// 			
//
//
// 			float XNorm = (RelativeLocation.X + Extent.X) / (2.f * Extent.X);
// 			float YNorm = (RelativeLocation.Y + Extent.Y) / (2.f * Extent.Y);
// 			
//
// 			FVector2D IconPos(
// 	XNorm * CanvasSize.X,
// 	YNorm * CanvasSize.Y 
// );
//
//
//
//
// 			TSubclassOf<UUserWidget> WidgetToUse = PlayerData.bIsLocalPlayer
// 	? PlayerIconWidgetClass
// 	: EnemyIconWidgetClass;
//
// 			UUserWidget* PlayerIcon = CreateWidget<UUserWidget>(this, WidgetToUse);
//
//
// 			if (PlayerIcon)
// 			{
// 				UE_LOG(LogTemp, Warning, TEXT("✅ PlayerIcon created successfully!"));
// 			}
// 			else
// 			{
// 				UE_LOG(LogTemp, Error, TEXT("❌ Failed to create PlayerIcon widget!"));
// 			}
//
// 			if (PlayerIcon)
// 			{
// 				UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(IconsHolder->AddChild(PlayerIcon));
//
//
// 				if (PanelSlot)
// 				{
// 					UE_LOG(LogTemp, Warning, TEXT("✅ PlayerIcon added to IconsHolder successfully!"));
// 				}
// 				else
// 				{
// 					UE_LOG(LogTemp, Error, TEXT("❌ Failed to add PlayerIcon to IconsHolder!"));
// 				}
// 				
// 				if (PanelSlot)
// 				{
// 					PanelSlot->SetPosition(IconPos);
// 					PanelSlot->SetSize(FVector2D(1.f, 1.f));
// 					PlayerIcon->SetRenderTransformAngle(45.f);
// 				}
// 			}
//
// 		}
// 	}
// }



void UCPP_UW_Map::UpdateMiniMap()
{
	UE_LOG(LogTemp, Warning, TEXT("✅ Broadcast fired: %s"), OnRequestSetup.IsBound() ? TEXT("BOUND") : TEXT("NOT BOUND"));

	if (!VolumeRef || !DataComponentRef || !MiniMapCanvas || !IconsHolder) return;

	IconsHolder->ClearChildren();

	FTransform VolumeTransform = VolumeRef->MapBounds->GetComponentTransform();
	FVector BoxExtent = VolumeRef->MapBounds->GetScaledBoxExtent();
	FVector2D CanvasSize = IconsHolder->GetCachedGeometry().GetLocalSize();

	
	for (const FPlayerMiniMapData& PlayerData : DataComponentRef->PlayerLocations)
	{
		if (!PlayerIconWidgetClass || !EnemyIconWidgetClass) continue;

		// Step 1: Convert world location to local space of rotated box
		FVector Local = VolumeTransform.InverseTransformPosition(PlayerData.WorldLocation);

		// Step 2: Normalize local position to [-1, 1]
		FVector2D Normalized;
		Normalized.X = FMath::Clamp(Local.X / BoxExtent.X, -1.f, 1.f);
		Normalized.Y = FMath::Clamp(Local.Y / BoxExtent.Y, -1.f, 1.f);

		// Step 3: Convert to [0, 1]
		Normalized = (Normalized + FVector2D(1.f, 1.f)) * 0.5f;

#pragma region "Debugging the map system visually"

	 // 	FVector Origin = VolumeRef->GetOrigin();
		// FVector Extent = VolumeRef->GetExtent();
		//
		// 	// Draw the box boundaries in RED
		// 	DrawDebugBox(
		// 		GetWorld(),
		// 		Origin,          // Center
		// 		Extent,          // Half-size
		// 		FColor::Red,     // Color
		// 		false,           // Persistent? false = disappears after a few seconds
		// 		0.2f,            // Lifetime (how long to stay on screen)
		// 		0,               // Depth Priority
		// 		10.f             // Thickness
		// 	);
		// 	
		// 	// Draw the player location as a BLUE POINT
		// 	DrawDebugPoint(
		// 		GetWorld(),
		// 		PlayerData.WorldLocation,
		// 		20.f,              // Size of the point
		// 		FColor::Blue,      // Color
		// 		false,             // Persistent?
		// 		0.2f               // Lifetime
		// 	);
		// 	
		// 	// Line from center of volume to player
		// 	DrawDebugLine(
		// 		GetWorld(),
		// 		Origin,
		// 		PlayerData.WorldLocation,
		// 		FColor::Green,
		// 		false,
		// 		0.2f,
		// 		0,
		// 		5.f
		// 	);
		// 	
			
	#pragma endregion
	

		// Just in case for expanding the code in the future
		
		// // Dynamically detect if the minimap is mirrored and flip accordingly
		// FVector BoxRight = VolumeTransform.GetUnitAxis(EAxis::Y);
		// FVector BoxForward = VolumeTransform.GetUnitAxis(EAxis::X);
		//
		// // Flip X if the volume is mirrored on the Y axis (right vector is flipped)
		// if (FVector::DotProduct(BoxRight, FVector::RightVector) < 0.f)
		// {
		// 	Normalized.X = 1.f - Normalized.X;
		// 	
		// }
		//
		// // Flip Y if the volume is rotated to face backward
		// if (FVector::DotProduct(BoxForward, FVector::ForwardVector) < 0.f)
		// {
		// 	Normalized.Y = 1.f - Normalized.Y;
		// }
		
		// Step 4: Scale to canvas
		FVector2D IconPos = FVector2D(
			(1.f-Normalized.X) * CanvasSize.X,
			( 1.f-Normalized.Y) * CanvasSize.Y // Flip Y if needed
		);

		// Optional debug
		UE_LOG(LogTemp, Warning, TEXT("Player %s | Local: %s | Norm: %s | IconPos: %s"),
			*GetNameSafe(PlayerData.PlayerState),
			*Local.ToString(),
			*Normalized.ToString(),
			*IconPos.ToString()
		);

		// Step 5: Spawn icon
		TSubclassOf<UUserWidget> WidgetToUse = PlayerData.bIsLocalPlayer
			? PlayerIconWidgetClass
			: EnemyIconWidgetClass;

		UUserWidget* PlayerIcon = CreateWidget<UUserWidget>(this, WidgetToUse);
		if (!PlayerIcon) continue;

		UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(IconsHolder->AddChild(PlayerIcon));
		if (!PanelSlot) continue;

		PanelSlot->SetPosition(IconPos);
		PanelSlot->SetSize(FVector2D(1.f, 1.f)); // You can customize this size
		PlayerIcon->SetRenderTransformAngle(0.f); // or rotate if needed

		// Detect if player is inside bounds
		if (FMath::Abs(Local.X) <= BoxExtent.X && FMath::Abs(Local.Y) <= BoxExtent.Y)
		{
			if (!isPlayerInside)
			{
				isPlayerInside = true;
			}
		}
	}
}




void UCPP_UW_Map::UpdateMiniMapLayoutFromTexture()
{
	if (!MiniMapCanvas || !BackgroundImage || !IconsHolder || !MiniMapBackgroundTexture)
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Missing references: Canvas, BackgroundImage, IconsHolder, or Texture."));
		return;
	}

	BackgroundImage->SetBrushFromTexture(MiniMapBackgroundTexture);

	const int32 TexW = MiniMapBackgroundTexture->GetSurfaceWidth();
	const int32 TexH = MiniMapBackgroundTexture->GetSurfaceHeight();

	if (TexW <= 0 || TexH <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("⚠️ Invalid texture size."));
		return;
	}

	const float AspectRatio = (float)TexW / (float)TexH;

	// Base height is always 512 (or any standard reference)
	float Height = 512.0f;

	// Apply slider or manual mode
	if (bUseSliderForScaling)
	{
		Height *= MiniMapScaleSliderValue;
	}
	else
	{
		// Read current height from the user-resized widget
		if (UCanvasPanelSlot* BGSlot = Cast<UCanvasPanelSlot>(BackgroundImage->Slot))
		{
			Height = BGSlot->GetSize().Y;
		}
	}

	// Always calculate width from the height to preserve ratio!
	const float Width = Height * AspectRatio;
	const FVector2D FinalSize = FVector2D(Width, Height);

	// Determine latest manual position
	FVector2D DetectedPosition = MiniMapPosition;

	if (UCanvasPanelSlot* BGSlot = Cast<UCanvasPanelSlot>(BackgroundImage->Slot))
	{
		DetectedPosition = BGSlot->GetPosition();
	}
	if (UCanvasPanelSlot* IconSlot = Cast<UCanvasPanelSlot>(IconsHolder->Slot))
	{
		DetectedPosition = IconSlot->GetPosition();
	}

	MiniMapPosition = DetectedPosition;

	// Apply to both image and icons holder
	if (UCanvasPanelSlot* BGSlot = Cast<UCanvasPanelSlot>(BackgroundImage->Slot))
	{
		BGSlot->SetSize(FinalSize);
		BGSlot->SetPosition(MiniMapPosition);
	}
	if (UCanvasPanelSlot* IconSlot = Cast<UCanvasPanelSlot>(IconsHolder->Slot))
	{
		IconSlot->SetSize(FinalSize);
		IconSlot->SetPosition(MiniMapPosition);
	}

	UE_LOG(LogTemp, Log, TEXT("✅ MiniMap updated. Size: (%.0f, %.0f), Pos: (%.0f, %.0f), Aspect: %.2f"),
		FinalSize.X, FinalSize.Y, MiniMapPosition.X, MiniMapPosition.Y, AspectRatio);
}
