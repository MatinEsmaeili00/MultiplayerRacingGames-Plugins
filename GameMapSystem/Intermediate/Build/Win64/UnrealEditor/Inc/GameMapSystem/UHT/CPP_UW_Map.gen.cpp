// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMapSystem/Public/CPP_UW_Map.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_UW_Map() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEMAPSYSTEM_API UClass* Z_Construct_UClass_ACPP_MapVolumeBox_NoRegister();
GAMEMAPSYSTEM_API UClass* Z_Construct_UClass_UCPP_MapManagerComponent_NoRegister();
GAMEMAPSYSTEM_API UClass* Z_Construct_UClass_UCPP_UW_Map();
GAMEMAPSYSTEM_API UClass* Z_Construct_UClass_UCPP_UW_Map_NoRegister();
GAMEMAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_GameMapSystem_OnRequestSetupMiniMap__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMapSystem();
// End Cross Module References

// Begin Delegate FOnRequestSetupMiniMap
struct Z_Construct_UDelegateFunction_GameMapSystem_OnRequestSetupMiniMap__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameMapSystem_OnRequestSetupMiniMap__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameMapSystem, nullptr, "OnRequestSetupMiniMap__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameMapSystem_OnRequestSetupMiniMap__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameMapSystem_OnRequestSetupMiniMap__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GameMapSystem_OnRequestSetupMiniMap__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameMapSystem_OnRequestSetupMiniMap__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestSetupMiniMap_DelegateWrapper(const FMulticastScriptDelegate& OnRequestSetupMiniMap)
{
	OnRequestSetupMiniMap.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnRequestSetupMiniMap

// Begin Class UCPP_UW_Map Function UpdateMiniMapLayoutFromTexture
struct Z_Construct_UFunction_UCPP_UW_Map_UpdateMiniMapLayoutFromTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MiniMap|Editor" },
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_UW_Map_UpdateMiniMapLayoutFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_UW_Map, nullptr, "UpdateMiniMapLayoutFromTexture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_UW_Map_UpdateMiniMapLayoutFromTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_UW_Map_UpdateMiniMapLayoutFromTexture_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCPP_UW_Map_UpdateMiniMapLayoutFromTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_UW_Map_UpdateMiniMapLayoutFromTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_UW_Map::execUpdateMiniMapLayoutFromTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMiniMapLayoutFromTexture();
	P_NATIVE_END;
}
// End Class UCPP_UW_Map Function UpdateMiniMapLayoutFromTexture

// Begin Class UCPP_UW_Map
void UCPP_UW_Map::StaticRegisterNativesUCPP_UW_Map()
{
	UClass* Class = UCPP_UW_Map::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateMiniMapLayoutFromTexture", &UCPP_UW_Map::execUpdateMiniMapLayoutFromTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_UW_Map);
UClass* Z_Construct_UClass_UCPP_UW_Map_NoRegister()
{
	return UCPP_UW_Map::StaticClass();
}
struct Z_Construct_UClass_UCPP_UW_Map_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_UW_Map.h" },
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapCanvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CPP_UW_Map" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIconWidgetClass_MetaData[] = {
		{ "Category", "CPP_UW_Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player Icon\n" },
#endif
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Icon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyIconWidgetClass_MetaData[] = {
		{ "Category", "CPP_UW_Map" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//enemy Icon\n" },
#endif
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "enemy Icon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataComponentRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconsHolder_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIconTexture_MetaData[] = {
		{ "Category", "CPP_UW_Map" },
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestSetup_MetaData[] = {
		{ "Category", "MiniMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\x94 Delegate the component will bind to\n" },
#endif
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\x94 Delegate the component will bind to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapBackgroundTexture_MetaData[] = {
		{ "Category", "MiniMap|Visuals" },
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSliderForScaling_MetaData[] = {
		{ "Category", "MiniMap|Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checkbox: lets user choose whether to use slider or manual sizing\n" },
#endif
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkbox: lets user choose whether to use slider or manual sizing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapScaleSliderValue_MetaData[] = {
		{ "Category", "MiniMap|Layout" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Slider value: only editable when checkbox is checked\n" },
#endif
		{ "EditCondition", "bUseSliderForScaling" },
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Slider value: only editable when checkbox is checked" },
#endif
		{ "UIMax", "3.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapScaleRatio_MetaData[] = {
		{ "Category", "MiniMap|Layout" },
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapPosition_MetaData[] = {
		{ "Category", "MiniMap|Layout" },
		{ "ModuleRelativePath", "Public/CPP_UW_Map.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniMapCanvas;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerIconWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyIconWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataComponentRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconsHolder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerIconTexture;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestSetup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniMapBackgroundTexture;
	static void NewProp_bUseSliderForScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSliderForScaling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MiniMapScaleSliderValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MiniMapScaleRatio;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MiniMapPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_UW_Map_UpdateMiniMapLayoutFromTexture, "UpdateMiniMapLayoutFromTexture" }, // 2265839594
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_UW_Map>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_MiniMapCanvas = { "MiniMapCanvas", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, MiniMapCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniMapCanvas_MetaData), NewProp_MiniMapCanvas_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_PlayerIconWidgetClass = { "PlayerIconWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, PlayerIconWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIconWidgetClass_MetaData), NewProp_PlayerIconWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_EnemyIconWidgetClass = { "EnemyIconWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, EnemyIconWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyIconWidgetClass_MetaData), NewProp_EnemyIconWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_VolumeRef = { "VolumeRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, VolumeRef), Z_Construct_UClass_ACPP_MapVolumeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeRef_MetaData), NewProp_VolumeRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_DataComponentRef = { "DataComponentRef", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, DataComponentRef), Z_Construct_UClass_UCPP_MapManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataComponentRef_MetaData), NewProp_DataComponentRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_IconsHolder = { "IconsHolder", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, IconsHolder), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconsHolder_MetaData), NewProp_IconsHolder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_PlayerIconTexture = { "PlayerIconTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, PlayerIconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIconTexture_MetaData), NewProp_PlayerIconTexture_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_OnRequestSetup = { "OnRequestSetup", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, OnRequestSetup), Z_Construct_UDelegateFunction_GameMapSystem_OnRequestSetupMiniMap__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestSetup_MetaData), NewProp_OnRequestSetup_MetaData) }; // 990970179
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_MiniMapBackgroundTexture = { "MiniMapBackgroundTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, MiniMapBackgroundTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniMapBackgroundTexture_MetaData), NewProp_MiniMapBackgroundTexture_MetaData) };
void Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_bUseSliderForScaling_SetBit(void* Obj)
{
	((UCPP_UW_Map*)Obj)->bUseSliderForScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_bUseSliderForScaling = { "bUseSliderForScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCPP_UW_Map), &Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_bUseSliderForScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSliderForScaling_MetaData), NewProp_bUseSliderForScaling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_MiniMapScaleSliderValue = { "MiniMapScaleSliderValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, MiniMapScaleSliderValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniMapScaleSliderValue_MetaData), NewProp_MiniMapScaleSliderValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, BackgroundImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_MiniMapScaleRatio = { "MiniMapScaleRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, MiniMapScaleRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniMapScaleRatio_MetaData), NewProp_MiniMapScaleRatio_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_MiniMapPosition = { "MiniMapPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_Map, MiniMapPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniMapPosition_MetaData), NewProp_MiniMapPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_UW_Map_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_MiniMapCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_PlayerIconWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_EnemyIconWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_VolumeRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_DataComponentRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_IconsHolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_PlayerIconTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_OnRequestSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_MiniMapBackgroundTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_bUseSliderForScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_MiniMapScaleSliderValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_BackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_MiniMapScaleRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_Map_Statics::NewProp_MiniMapPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_UW_Map_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_UW_Map_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_UW_Map_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_UW_Map_Statics::ClassParams = {
	&UCPP_UW_Map::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPP_UW_Map_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_UW_Map_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_UW_Map_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_UW_Map_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_UW_Map()
{
	if (!Z_Registration_Info_UClass_UCPP_UW_Map.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_UW_Map.OuterSingleton, Z_Construct_UClass_UCPP_UW_Map_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_UW_Map.OuterSingleton;
}
template<> GAMEMAPSYSTEM_API UClass* StaticClass<UCPP_UW_Map>()
{
	return UCPP_UW_Map::StaticClass();
}
UCPP_UW_Map::UCPP_UW_Map(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_UW_Map);
UCPP_UW_Map::~UCPP_UW_Map() {}
// End Class UCPP_UW_Map

// Begin Registration
struct Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_UW_Map, UCPP_UW_Map::StaticClass, TEXT("UCPP_UW_Map"), &Z_Registration_Info_UClass_UCPP_UW_Map, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_UW_Map), 2178431515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_965658744(TEXT("/Script/GameMapSystem"),
	Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
