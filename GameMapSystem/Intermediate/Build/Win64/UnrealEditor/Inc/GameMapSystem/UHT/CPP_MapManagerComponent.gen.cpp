// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMapSystem/Public/CPP_MapManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_MapManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEMAPSYSTEM_API UClass* Z_Construct_UClass_UCPP_MapManagerComponent();
GAMEMAPSYSTEM_API UClass* Z_Construct_UClass_UCPP_MapManagerComponent_NoRegister();
GAMEMAPSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMiniMapData();
UPackage* Z_Construct_UPackage__Script_GameMapSystem();
// End Cross Module References

// Begin ScriptStruct FPlayerMiniMapData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerMiniMapData;
class UScriptStruct* FPlayerMiniMapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMiniMapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerMiniMapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMiniMapData, (UObject*)Z_Construct_UPackage__Script_GameMapSystem(), TEXT("PlayerMiniMapData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerMiniMapData.OuterSingleton;
}
template<> GAMEMAPSYSTEM_API UScriptStruct* StaticStruct<FPlayerMiniMapData>()
{
	return FPlayerMiniMapData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CPP_MapManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/CPP_MapManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/CPP_MapManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocalPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/CPP_MapManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static void NewProp_bIsLocalPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocalPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerMiniMapData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMiniMapData, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerState_MetaData), NewProp_PlayerState_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMiniMapData, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
void Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::NewProp_bIsLocalPlayer_SetBit(void* Obj)
{
	((FPlayerMiniMapData*)Obj)->bIsLocalPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::NewProp_bIsLocalPlayer = { "bIsLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerMiniMapData), &Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::NewProp_bIsLocalPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocalPlayer_MetaData), NewProp_bIsLocalPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::NewProp_bIsLocalPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameMapSystem,
	nullptr,
	&NewStructOps,
	"PlayerMiniMapData",
	Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::PropPointers),
	sizeof(FPlayerMiniMapData),
	alignof(FPlayerMiniMapData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerMiniMapData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMiniMapData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerMiniMapData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerMiniMapData.InnerSingleton;
}
// End ScriptStruct FPlayerMiniMapData

// Begin Class UCPP_MapManagerComponent
void UCPP_MapManagerComponent::StaticRegisterNativesUCPP_MapManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_MapManagerComponent);
UClass* Z_Construct_UClass_UCPP_MapManagerComponent_NoRegister()
{
	return UCPP_MapManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UCPP_MapManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CPP_MapManagerComponent.h" },
		{ "ModuleRelativePath", "Public/CPP_MapManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/CPP_MapManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerLocations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_MapManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCPP_MapManagerComponent_Statics::NewProp_PlayerLocations_Inner = { "PlayerLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerMiniMapData, METADATA_PARAMS(0, nullptr) }; // 4072923983
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCPP_MapManagerComponent_Statics::NewProp_PlayerLocations = { "PlayerLocations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MapManagerComponent, PlayerLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLocations_MetaData), NewProp_PlayerLocations_MetaData) }; // 4072923983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_MapManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MapManagerComponent_Statics::NewProp_PlayerLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MapManagerComponent_Statics::NewProp_PlayerLocations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MapManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_MapManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MapManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_MapManagerComponent_Statics::ClassParams = {
	&UCPP_MapManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCPP_MapManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MapManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MapManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_MapManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_MapManagerComponent()
{
	if (!Z_Registration_Info_UClass_UCPP_MapManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_MapManagerComponent.OuterSingleton, Z_Construct_UClass_UCPP_MapManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_MapManagerComponent.OuterSingleton;
}
template<> GAMEMAPSYSTEM_API UClass* StaticClass<UCPP_MapManagerComponent>()
{
	return UCPP_MapManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_MapManagerComponent);
UCPP_MapManagerComponent::~UCPP_MapManagerComponent() {}
// End Class UCPP_MapManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapManagerComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerMiniMapData::StaticStruct, Z_Construct_UScriptStruct_FPlayerMiniMapData_Statics::NewStructOps, TEXT("PlayerMiniMapData"), &Z_Registration_Info_UScriptStruct_PlayerMiniMapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerMiniMapData), 4072923983U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_MapManagerComponent, UCPP_MapManagerComponent::StaticClass, TEXT("UCPP_MapManagerComponent"), &Z_Registration_Info_UClass_UCPP_MapManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_MapManagerComponent), 2802456689U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapManagerComponent_h_3820286433(TEXT("/Script/GameMapSystem"),
	Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapManagerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapManagerComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
