// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "CPP_MapVolumeBox.generated.h"

UENUM(BlueprintType)
enum class EScreenshotCompressionFormat : uint8
{
	TC_Default       UMETA(DisplayName = "Default"),
	TC_EditorIcon    UMETA(DisplayName = "Editor Icon"),
	TC_Grayscale     UMETA(DisplayName = "Grayscale"),
	TC_HDR           UMETA(DisplayName = "HDR"),
	TC_Masks         UMETA(DisplayName = "Masks"),
	TC_VectorDisplacementmap UMETA(DisplayName = "Vector Displacement"),
};

UCLASS()
class GAMEMAPSYSTEM_API ACPP_MapVolumeBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_MapVolumeBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* MapBounds;

	FVector GetOrigin() const;
	FVector GetExtent() const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Property")
	USceneCaptureComponent2D* CaptureComponent2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Property")
	UTextureRenderTarget2D* RenderTarget2;


	void UpdateRenderTargetSizeFromBox();

	UFUNCTION(CallInEditor, Category = "Screenshot")
	void CaptureImageFromBox();

	


	UPROPERTY(EditAnywhere, Category = "Screenshot")
	bool bUseCustomPath = false;

	UPROPERTY(EditAnywhere, Category = "Screenshot", meta = (EditCondition = "bUseCustomPath"))
	FString CustomSavePath = "/Game/EditorGenerated";
	
	UPROPERTY(EditAnywhere, Category = "Screenshot")
	EScreenshotCompressionFormat CompressionFormat = EScreenshotCompressionFormat::TC_Default;
	
};
