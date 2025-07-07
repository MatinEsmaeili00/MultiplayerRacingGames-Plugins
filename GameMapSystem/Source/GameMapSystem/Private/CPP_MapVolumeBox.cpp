// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MapVolumeBox.h"
#include "RenderUtils.h"
#include "ImageUtils.h"
#include "AssetRegistry/AssetRegistryModule.h"


// Sets default values
ACPP_MapVolumeBox::ACPP_MapVolumeBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	MapBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("MapBounds"));
	RootComponent = MapBounds;
	MapBounds->SetBoxExtent(FVector(1300.f, 800.f, 100.f)); // Adjust in the editor as needed
	

}

// Called when the game starts or when spawned
void ACPP_MapVolumeBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_MapVolumeBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


FVector ACPP_MapVolumeBox::GetOrigin() const
{
	return MapBounds->GetComponentLocation();
}

FVector ACPP_MapVolumeBox::GetExtent() const
{
	return MapBounds->GetScaledBoxExtent();
}


void ACPP_MapVolumeBox::UpdateRenderTargetSizeFromBox()
{

	if (!RenderTarget2 || !MapBounds)
	{
		UE_LOG(LogTemp, Error, TEXT("RenderTarget2 or MapBounds is null"));
		return;
	}

	const FVector BoxExtent = MapBounds->GetScaledBoxExtent(); // Unreal units
	const float Width = BoxExtent.X * 2.0f;
	const float Height = BoxExtent.Y * 2.0f;

	constexpr int32 MaxSize = 4096;

	// Maintain aspect ratio
	const float AspectRatio = Width / Height;

	int32 TargetWidth = Width;
	int32 TargetHeight = Height;

	// If larger than MaxSize, scale down proportionally
	if (Width > MaxSize || Height > MaxSize)
	{
		if (AspectRatio >= 1.0f)
		{
			TargetWidth = MaxSize;
			TargetHeight = FMath::RoundToInt(MaxSize / AspectRatio);
		}
		else
		{
			TargetHeight = MaxSize;
			TargetWidth = FMath::RoundToInt(MaxSize * AspectRatio);
		}
	}

	RenderTarget2->ResizeTarget(TargetWidth, TargetHeight);

	UE_LOG(LogTemp, Warning, TEXT("✅ RenderTarget resized to: %d x %d"), TargetWidth, TargetHeight);
}



// void ACPP_MapVolumeBox::CaptureImageFromBox()
// {
// 	if (!RenderTarget2)
// 	{
// 		UE_LOG(LogTemp, Error, TEXT("RenderTarget is null"));
// 		return;
// 	}
// 	if (!CaptureComponent2)
// 	{
// 		UE_LOG(LogTemp, Error, TEXT("CaptureComponent is null"));
// 		return;
// 	}
//
// 	UpdateRenderTargetSizeFromBox();
// 	
// 	//Link the render target to the capture component
// 	CaptureComponent2->TextureTarget = RenderTarget2;
//
// 	 // Optional: disable real-time capturing if you're doing manual
// 	 CaptureComponent2->bCaptureEveryFrame = false;
// 	 CaptureComponent2->bCaptureOnMovement = false;
// 	
// 	 // Capture the scene manually
// 	 CaptureComponent2->CaptureScene();
//
//
//
// 	float HorizontalFOVDeg = CaptureComponent2->FOVAngle;
// 	float AspectRatio = (float)RenderTarget2->SizeX / (float)RenderTarget2->SizeY;
// 	float HorizontalFOVRad = FMath::DegreesToRadians(HorizontalFOVDeg);
// 	float VerticalFOVRad = 2 * FMath::Atan(FMath::Tan(HorizontalFOVRad / 2) / AspectRatio);
//
// 	FVector Extent = MapBounds->GetScaledBoxExtent();
// 	float HalfHeight = Extent.Y;
//
// 	float RequiredHeight = HalfHeight / FMath::Tan(VerticalFOVRad / 2.0f);
// 	FVector Center = MapBounds->GetComponentLocation();
// 	FVector CameraPos = Center + FVector(0, 0, RequiredHeight);
//
// 	CaptureComponent2->SetWorldLocation(CameraPos);
// 	CaptureComponent2->SetWorldRotation(FRotator(-90.f, -90.f, 0.f)); // Look straight down
// 	CaptureComponent2->SetUsingAbsoluteLocation(true);
// 	CaptureComponent2->SetWorldLocation(CameraPos);
// 	CaptureComponent2->MarkRenderStateDirty();
//
// #pragma region "old and shorter version only for GrayScale formate texture"
// 	// the old and shorter way of making a texture but it has alpha and will break the texture, only use if you wanna Grayscale or Normal texture
// 	
// //
// // 	UTexture2D* NewTexture = UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly(
// // 	RenderTarget2,
// // 	TEXT("BoxScreenshotTexture"),
// // 	TextureCompressionSettings::TC_Grayscale, 
// // 	TextureMipGenSettings::TMGS_NoMipmaps
// // );
// //
// //
// //
// // 	if (NewTexture)
// // 	{
// // 		UE_LOG(LogTemp, Warning, TEXT("Texture2D created and saved at /Game/EditorGenerated/BoxScreenshotTexture"));
// //
//
// 	// this is how you can change the texture setting after you created it!
// // 		//NewTexture->SRGB = true;
// // 		//NewTexture->CompressionSettings = TC_Grayscale; 
// // 		//NewTexture->MipGenSettings = TMGS_NoMipmaps;
// //
// // 		
// //
// // 		//NewTexture->UpdateResource();
// // 	}
// // 	else
// // 	{
// // 		UE_LOG(LogTemp, Error, TEXT("Failed to create Texture2D from render target."));
// // 	}
//
// #pragma endregion
//
// // Optional: disable tone mapping to match scene color
// CaptureComponent2->ShowFlags.SetTonemapper(false);
// CaptureComponent2->ShowFlags.SetEyeAdaptation(false);
//
// // Step 1: Read pixels
// FTextureRenderTargetResource* RTResource = RenderTarget2->GameThread_GetRenderTargetResource();
// TArray<FColor> Pixels;
// RTResource->ReadPixels(Pixels);
//
// #pragma region "only use it if you wanna generate the texture GrayScale by default"
// // Modify pixels if grayscale, and always fix alpha // (only use it if you wanna generate the texture GrayScale by default!)
// // if (bGenerateGrayscale)
// // {
// // 	for (FColor& Pixel : Pixels)
// // 	{
// // 		uint8 Gray = Pixel.R * 0.299f + Pixel.G * 0.587f + Pixel.B * 0.114f;
// // 		Pixel = FColor(Gray, Gray, Gray, 255);
// // 	}
// // }
// // else
// #pragma endregion
// {
// 	for (FColor& Pixel : Pixels)
// 	{
// 		Pixel.A = 255;
// 	}
// }
//
// // Step 2: Determine save folder
// FString SaveFolderPath;
// if (bUseCustomPath && !CustomSavePath.IsEmpty())
// {
// 	SaveFolderPath = CustomSavePath;
// }
// else
// {
// 	FString RTAssetPath = RenderTarget2->GetPathName();
// 	FString BasePath = FPackageName::GetLongPackagePath(RTAssetPath);
//
// 	// Append "/GeneratedTextures" to the path
// 	SaveFolderPath = BasePath / TEXT("GeneratedTextures");
//
// 	// Ensure the path exists in the virtual package system (not needed for physical folder creation, but good practice)
// 	if (!FPackageName::IsValidLongPackageName(SaveFolderPath))
// 	{
// 		UE_LOG(LogTemp, Error, TEXT("Invalid package path: %s"), *SaveFolderPath);
// 		return;
// 	}
// }
//
// // Step 3: Generate asset name & package path
// FString TextureAssetName = FString::Printf(TEXT("BoxScreenshotTexture_%s"), *FDateTime::Now().ToString(TEXT("%Y%m%d_%H%M%S")));
// FString TexturePackagePath = SaveFolderPath + TEXT("/") + TextureAssetName;
//
// // Step 4: Create package and texture
// UPackage* Package = CreatePackage(*TexturePackagePath);
// Package->FullyLoad();
//
// 	TextureCompressionSettings ResolvedFormat;
//
// 	switch (CompressionFormat)
// 	{
// 	case EScreenshotCompressionFormat::TC_EditorIcon:
// 		ResolvedFormat = TextureCompressionSettings::TC_EditorIcon;
// 		break;
// 	case EScreenshotCompressionFormat::TC_Grayscale:
// 		ResolvedFormat = TextureCompressionSettings::TC_Grayscale;
// 		break;
// 	case EScreenshotCompressionFormat::TC_HDR:
// 		ResolvedFormat = TextureCompressionSettings::TC_HDR;
// 		break;
// 	case EScreenshotCompressionFormat::TC_Masks:
// 		ResolvedFormat = TextureCompressionSettings::TC_Masks;
// 		break;
// 	case EScreenshotCompressionFormat::TC_VectorDisplacementmap:
// 		ResolvedFormat = TextureCompressionSettings::TC_VectorDisplacementmap;
// 		break;
// 	case EScreenshotCompressionFormat::TC_Default:
// 	default:
// 		ResolvedFormat = TextureCompressionSettings::TC_Default;
// 		break;
// 	}
// 	
// FCreateTexture2DParameters Params;
// Params.bSRGB = true;
// Params.CompressionSettings =ResolvedFormat;
// Params.MipGenSettings = TMGS_NoMipmaps;
// Params.bDeferCompression = false;
//
// UTexture2D* NewTexture = FImageUtils::CreateTexture2D(
// 	RenderTarget2->SizeX,
// 	RenderTarget2->SizeY,
// 	Pixels,
// 	Package,
// 	*TextureAssetName,
// 	RF_Public | RF_Standalone,
// 	Params
// );
//
// // Step 5: Save it to disk
// if (NewTexture)
// {
// 	NewTexture->MarkPackageDirty();
// 	FAssetRegistryModule::AssetCreated(NewTexture);
//
// 	FString PackageFileName = FPackageName::LongPackageNameToFilename(TexturePackagePath, FPackageName::GetAssetPackageExtension());
// 	UPackage::SavePackage(Package, NewTexture, EObjectFlags::RF_Public | EObjectFlags::RF_Standalone, *PackageFileName);
//
// 	UE_LOG(LogTemp, Warning, TEXT("✅ Saved texture to: %s"),
// 	*TexturePackagePath);
// }
// else
// {
// 	UE_LOG(LogTemp, Error, TEXT("❌ Failed to create and save texture."));
// }
// }


void ACPP_MapVolumeBox::CaptureImageFromBox()
{
	if (!RenderTarget2)
	{
		UE_LOG(LogTemp, Error, TEXT("RenderTarget is null"));
		return;
	}
	if (!CaptureComponent2)
	{
		UE_LOG(LogTemp, Error, TEXT("CaptureComponent is null"));
		return;
	}

	UpdateRenderTargetSizeFromBox();



	if (!CaptureComponent2->TextureTarget)
	{
		UE_LOG(LogTemp, Warning, TEXT("⚠️ Scene Capture had no target. Assigning manually."));
		CaptureComponent2->TextureTarget = RenderTarget2;
	}


	CaptureComponent2->TextureTarget = RenderTarget2;
	CaptureComponent2->bCaptureEveryFrame = false;
	CaptureComponent2->bCaptureOnMovement = false;

	// Camera placement based on MapBounds orientation
	FTransform BoxTransform = MapBounds->GetComponentTransform();
	FVector BoxUp = BoxTransform.GetUnitAxis(EAxis::Z);
	FVector BoxRight = BoxTransform.GetUnitAxis(EAxis::Y); // Local right vector

	if (!BoxUp.IsNormalized() || !BoxRight.IsNormalized())
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Invalid local axes from MapBounds."));
		return;
	}

	const float HorizontalFOVDeg = CaptureComponent2->FOVAngle;
	const float AspectRatio = (float)RenderTarget2->SizeX / (float)RenderTarget2->SizeY;
	const float HorizontalFOVRad = FMath::DegreesToRadians(HorizontalFOVDeg);
	const float VerticalFOVRad = 2 * FMath::Atan(FMath::Tan(HorizontalFOVRad / 2) / AspectRatio);

	const FVector Extent = MapBounds->GetScaledBoxExtent();
	const float HalfHeight = Extent.Y;

	const float RequiredHeight = HalfHeight / FMath::Tan(VerticalFOVRad / 2.0f);
	if (!FMath::IsFinite(RequiredHeight) || RequiredHeight < 1.f || RequiredHeight > 100000.f)
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Invalid RequiredHeight: %f"), RequiredHeight);
		return;
	}

	const FVector CameraPos = BoxTransform.GetLocation() + (BoxUp * RequiredHeight);
	const FVector LookDirection = -BoxUp;

	// Make rotation from forward (LookDirection) and right (BoxRight)
	FMatrix CameraRotationMatrix = FRotationMatrix::MakeFromXZ(LookDirection, BoxRight);
	FRotator CameraRot = CameraRotationMatrix.Rotator();

	CaptureComponent2->SetWorldLocation(CameraPos);
	CaptureComponent2->SetWorldRotation(CameraRot);
	CaptureComponent2->SetUsingAbsoluteLocation(true);
	CaptureComponent2->MarkRenderStateDirty();
	CaptureComponent2->ShowFlags.SetTonemapper(false);
	CaptureComponent2->ShowFlags.SetEyeAdaptation(false);
	CaptureComponent2->CaptureScene();


	// ✅ Ensure rendering has completed before reading pixels
	FlushRenderingCommands();
	
	// Read Pixels
	FTextureRenderTargetResource* RTResource = RenderTarget2->GameThread_GetRenderTargetResource();
	TArray<FColor> Pixels;
	if (!RTResource->ReadPixels(Pixels))
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Failed to read pixels from RenderTarget."));
		return;
	}

	for (FColor& Pixel : Pixels)
	{
		Pixel.A = 255;
	}

	// Determine Save Folder
	FString SaveFolderPath;
	if (bUseCustomPath && !CustomSavePath.IsEmpty())
	{
		SaveFolderPath = CustomSavePath;
	}
	else
	{
		const FString RTAssetPath = RenderTarget2->GetPathName();
		const FString BasePath = FPackageName::GetLongPackagePath(RTAssetPath);
		SaveFolderPath = BasePath / TEXT("GeneratedTextures");

		if (!FPackageName::IsValidLongPackageName(SaveFolderPath))
		{
			UE_LOG(LogTemp, Error, TEXT("Invalid package path: %s"), *SaveFolderPath);
			return;
		}
	}

	// Generate Asset Name
	const FString TextureAssetName = FString::Printf(TEXT("BoxScreenshotTexture_%s"), *FDateTime::Now().ToString(TEXT("%Y%m%d_%H%M%S")));
	const FString TexturePackagePath = SaveFolderPath / TextureAssetName;

	// Create Package
	UPackage* Package = CreatePackage(*TexturePackagePath);
	Package->FullyLoad();

	// Set Texture Compression Format
	TextureCompressionSettings ResolvedFormat;
	switch (CompressionFormat)
	{
	case EScreenshotCompressionFormat::TC_EditorIcon: ResolvedFormat = TC_EditorIcon; break;
	case EScreenshotCompressionFormat::TC_Grayscale: ResolvedFormat = TC_Grayscale; break;
	case EScreenshotCompressionFormat::TC_HDR: ResolvedFormat = TC_HDR; break;
	case EScreenshotCompressionFormat::TC_Masks: ResolvedFormat = TC_Masks; break;
	case EScreenshotCompressionFormat::TC_VectorDisplacementmap: ResolvedFormat = TC_VectorDisplacementmap; break;
	case EScreenshotCompressionFormat::TC_Default:
	default: ResolvedFormat = TC_Default; break;
	}

	FCreateTexture2DParameters Params;
	Params.bSRGB = true;
	Params.CompressionSettings = ResolvedFormat;
	Params.MipGenSettings = TMGS_NoMipmaps;
	Params.bDeferCompression = false;

	// Create Texture2D from pixels
	UTexture2D* NewTexture = FImageUtils::CreateTexture2D(
		RenderTarget2->SizeX,
		RenderTarget2->SizeY,
		Pixels,
		Package,
		*TextureAssetName,
		RF_Public | RF_Standalone,
		Params
	);

	// Save Texture
	if (NewTexture)
	{
		NewTexture->MarkPackageDirty();
		FAssetRegistryModule::AssetCreated(NewTexture);

		const FString PackageFileName = FPackageName::LongPackageNameToFilename(TexturePackagePath, FPackageName::GetAssetPackageExtension());
		UPackage::SavePackage(Package, NewTexture, EObjectFlags::RF_Public | EObjectFlags::RF_Standalone, *PackageFileName);

		UE_LOG(LogTemp, Warning, TEXT("✅ Saved texture to: %s"), *TexturePackagePath);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Failed to create and save texture."));
	}
}

