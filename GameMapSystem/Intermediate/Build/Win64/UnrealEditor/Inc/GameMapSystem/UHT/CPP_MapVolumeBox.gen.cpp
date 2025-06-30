// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMapSystem/Public/CPP_MapVolumeBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_MapVolumeBox() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
GAMEMAPSYSTEM_API UClass* Z_Construct_UClass_ACPP_MapVolumeBox();
GAMEMAPSYSTEM_API UClass* Z_Construct_UClass_ACPP_MapVolumeBox_NoRegister();
GAMEMAPSYSTEM_API UEnum* Z_Construct_UEnum_GameMapSystem_EScreenshotCompressionFormat();
UPackage* Z_Construct_UPackage__Script_GameMapSystem();
// End Cross Module References

// Begin Enum EScreenshotCompressionFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScreenshotCompressionFormat;
static UEnum* EScreenshotCompressionFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScreenshotCompressionFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScreenshotCompressionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameMapSystem_EScreenshotCompressionFormat, (UObject*)Z_Construct_UPackage__Script_GameMapSystem(), TEXT("EScreenshotCompressionFormat"));
	}
	return Z_Registration_Info_UEnum_EScreenshotCompressionFormat.OuterSingleton;
}
template<> GAMEMAPSYSTEM_API UEnum* StaticEnum<EScreenshotCompressionFormat>()
{
	return EScreenshotCompressionFormat_StaticEnum();
}
struct Z_Construct_UEnum_GameMapSystem_EScreenshotCompressionFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CPP_MapVolumeBox.h" },
		{ "TC_Default.DisplayName", "Default" },
		{ "TC_Default.Name", "EScreenshotCompressionFormat::TC_Default" },
		{ "TC_EditorIcon.DisplayName", "Editor Icon" },
		{ "TC_EditorIcon.Name", "EScreenshotCompressionFormat::TC_EditorIcon" },
		{ "TC_Grayscale.DisplayName", "Grayscale" },
		{ "TC_Grayscale.Name", "EScreenshotCompressionFormat::TC_Grayscale" },
		{ "TC_HDR.DisplayName", "HDR" },
		{ "TC_HDR.Name", "EScreenshotCompressionFormat::TC_HDR" },
		{ "TC_Masks.DisplayName", "Masks" },
		{ "TC_Masks.Name", "EScreenshotCompressionFormat::TC_Masks" },
		{ "TC_VectorDisplacementmap.DisplayName", "Vector Displacement" },
		{ "TC_VectorDisplacementmap.Name", "EScreenshotCompressionFormat::TC_VectorDisplacementmap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScreenshotCompressionFormat::TC_Default", (int64)EScreenshotCompressionFormat::TC_Default },
		{ "EScreenshotCompressionFormat::TC_EditorIcon", (int64)EScreenshotCompressionFormat::TC_EditorIcon },
		{ "EScreenshotCompressionFormat::TC_Grayscale", (int64)EScreenshotCompressionFormat::TC_Grayscale },
		{ "EScreenshotCompressionFormat::TC_HDR", (int64)EScreenshotCompressionFormat::TC_HDR },
		{ "EScreenshotCompressionFormat::TC_Masks", (int64)EScreenshotCompressionFormat::TC_Masks },
		{ "EScreenshotCompressionFormat::TC_VectorDisplacementmap", (int64)EScreenshotCompressionFormat::TC_VectorDisplacementmap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameMapSystem_EScreenshotCompressionFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameMapSystem,
	nullptr,
	"EScreenshotCompressionFormat",
	"EScreenshotCompressionFormat",
	Z_Construct_UEnum_GameMapSystem_EScreenshotCompressionFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameMapSystem_EScreenshotCompressionFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameMapSystem_EScreenshotCompressionFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameMapSystem_EScreenshotCompressionFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameMapSystem_EScreenshotCompressionFormat()
{
	if (!Z_Registration_Info_UEnum_EScreenshotCompressionFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScreenshotCompressionFormat.InnerSingleton, Z_Construct_UEnum_GameMapSystem_EScreenshotCompressionFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScreenshotCompressionFormat.InnerSingleton;
}
// End Enum EScreenshotCompressionFormat

// Begin Class ACPP_MapVolumeBox Function CaptureImageFromBox
struct Z_Construct_UFunction_ACPP_MapVolumeBox_CaptureImageFromBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/CPP_MapVolumeBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_MapVolumeBox_CaptureImageFromBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_MapVolumeBox, nullptr, "CaptureImageFromBox", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_MapVolumeBox_CaptureImageFromBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_MapVolumeBox_CaptureImageFromBox_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACPP_MapVolumeBox_CaptureImageFromBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_MapVolumeBox_CaptureImageFromBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_MapVolumeBox::execCaptureImageFromBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CaptureImageFromBox();
	P_NATIVE_END;
}
// End Class ACPP_MapVolumeBox Function CaptureImageFromBox

// Begin Class ACPP_MapVolumeBox
void ACPP_MapVolumeBox::StaticRegisterNativesACPP_MapVolumeBox()
{
	UClass* Class = ACPP_MapVolumeBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CaptureImageFromBox", &ACPP_MapVolumeBox::execCaptureImageFromBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_MapVolumeBox);
UClass* Z_Construct_UClass_ACPP_MapVolumeBox_NoRegister()
{
	return ACPP_MapVolumeBox::StaticClass();
}
struct Z_Construct_UClass_ACPP_MapVolumeBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_MapVolumeBox.h" },
		{ "ModuleRelativePath", "Public/CPP_MapVolumeBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapBounds_MetaData[] = {
		{ "Category", "CPP_MapVolumeBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_MapVolumeBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent2_MetaData[] = {
		{ "Category", "Property" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_MapVolumeBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget2_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/CPP_MapVolumeBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPath_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/CPP_MapVolumeBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSavePath_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "EditCondition", "bUseCustomPath" },
		{ "ModuleRelativePath", "Public/CPP_MapVolumeBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionFormat_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/CPP_MapVolumeBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget2;
	static void NewProp_bUseCustomPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomSavePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompressionFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_MapVolumeBox_CaptureImageFromBox, "CaptureImageFromBox" }, // 2437196982
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_MapVolumeBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_MapBounds = { "MapBounds", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MapVolumeBox, MapBounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapBounds_MetaData), NewProp_MapBounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_CaptureComponent2 = { "CaptureComponent2", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MapVolumeBox, CaptureComponent2), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent2_MetaData), NewProp_CaptureComponent2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_RenderTarget2 = { "RenderTarget2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MapVolumeBox, RenderTarget2), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget2_MetaData), NewProp_RenderTarget2_MetaData) };
void Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_bUseCustomPath_SetBit(void* Obj)
{
	((ACPP_MapVolumeBox*)Obj)->bUseCustomPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_bUseCustomPath = { "bUseCustomPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPP_MapVolumeBox), &Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_bUseCustomPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomPath_MetaData), NewProp_bUseCustomPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_CustomSavePath = { "CustomSavePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MapVolumeBox, CustomSavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSavePath_MetaData), NewProp_CustomSavePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_CompressionFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_CompressionFormat = { "CompressionFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_MapVolumeBox, CompressionFormat), Z_Construct_UEnum_GameMapSystem_EScreenshotCompressionFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionFormat_MetaData), NewProp_CompressionFormat_MetaData) }; // 3369491034
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_MapVolumeBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_MapBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_CaptureComponent2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_RenderTarget2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_bUseCustomPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_CustomSavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_CompressionFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_MapVolumeBox_Statics::NewProp_CompressionFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MapVolumeBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_MapVolumeBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MapVolumeBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_MapVolumeBox_Statics::ClassParams = {
	&ACPP_MapVolumeBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACPP_MapVolumeBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MapVolumeBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_MapVolumeBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_MapVolumeBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_MapVolumeBox()
{
	if (!Z_Registration_Info_UClass_ACPP_MapVolumeBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_MapVolumeBox.OuterSingleton, Z_Construct_UClass_ACPP_MapVolumeBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_MapVolumeBox.OuterSingleton;
}
template<> GAMEMAPSYSTEM_API UClass* StaticClass<ACPP_MapVolumeBox>()
{
	return ACPP_MapVolumeBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_MapVolumeBox);
ACPP_MapVolumeBox::~ACPP_MapVolumeBox() {}
// End Class ACPP_MapVolumeBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EScreenshotCompressionFormat_StaticEnum, TEXT("EScreenshotCompressionFormat"), &Z_Registration_Info_UEnum_EScreenshotCompressionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3369491034U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_MapVolumeBox, ACPP_MapVolumeBox::StaticClass, TEXT("ACPP_MapVolumeBox"), &Z_Registration_Info_UClass_ACPP_MapVolumeBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_MapVolumeBox), 256856248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_426103614(TEXT("/Script/GameMapSystem"),
	Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
