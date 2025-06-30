// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerRankingSystem/Public/CPP_RankingManagerComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_RankingManagerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PLAYERRANKINGSYSTEM_API UClass* Z_Construct_UClass_UCPP_RankingManagerComponent();
PLAYERRANKINGSYSTEM_API UClass* Z_Construct_UClass_UCPP_RankingManagerComponent_NoRegister();
PLAYERRANKINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo();
UPackage* Z_Construct_UPackage__Script_PlayerRankingSystem();
// End Cross Module References

// Begin ScriptStruct FPlayerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerInfo;
class UScriptStruct* FPlayerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerInfo, (UObject*)Z_Construct_UPackage__Script_PlayerRankingSystem(), TEXT("PlayerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerInfo.OuterSingleton;
}
template<> PLAYERRANKINGSYSTEM_API UScriptStruct* StaticStruct<FPlayerInfo>()
{
	return FPlayerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CPP_RankingManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerActor_MetaData[] = {
		{ "Category", "PlayerInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allow access in Blueprints\n" },
#endif
		{ "ModuleRelativePath", "Public/CPP_RankingManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow access in Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "PlayerInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allow access in Blueprints\n" },
#endif
		{ "ModuleRelativePath", "Public/CPP_RankingManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow access in Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[] = {
		{ "Category", "PlayerInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allow access in Blueprints\n" },
#endif
		{ "ModuleRelativePath", "Public/CPP_RankingManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow access in Blueprints" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInfo, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerActor_MetaData), NewProp_PlayerActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInfo, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInfo, Progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Progress_MetaData), NewProp_Progress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_PlayerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PlayerRankingSystem,
	nullptr,
	&NewStructOps,
	"PlayerInfo",
	Z_Construct_UScriptStruct_FPlayerInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::PropPointers),
	sizeof(FPlayerInfo),
	alignof(FPlayerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerInfo.InnerSingleton, Z_Construct_UScriptStruct_FPlayerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerInfo.InnerSingleton;
}
// End ScriptStruct FPlayerInfo

// Begin Class UCPP_RankingManagerComponent Function ServerCalculatePlayerPlacements
static const FName NAME_UCPP_RankingManagerComponent_ServerCalculatePlayerPlacements = FName(TEXT("ServerCalculatePlayerPlacements"));
void UCPP_RankingManagerComponent::ServerCalculatePlayerPlacements()
{
	UFunction* Func = FindFunctionChecked(NAME_UCPP_RankingManagerComponent_ServerCalculatePlayerPlacements);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCPP_RankingManagerComponent_ServerCalculatePlayerPlacements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server function to calculate placements */" },
#endif
		{ "ModuleRelativePath", "Public/CPP_RankingManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server function to calculate placements" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_RankingManagerComponent_ServerCalculatePlayerPlacements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_RankingManagerComponent, nullptr, "ServerCalculatePlayerPlacements", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_RankingManagerComponent_ServerCalculatePlayerPlacements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_RankingManagerComponent_ServerCalculatePlayerPlacements_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCPP_RankingManagerComponent_ServerCalculatePlayerPlacements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_RankingManagerComponent_ServerCalculatePlayerPlacements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_RankingManagerComponent::execServerCalculatePlayerPlacements)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerCalculatePlayerPlacements_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerCalculatePlayerPlacements_Validate"));
		return;
	}
	P_THIS->ServerCalculatePlayerPlacements_Implementation();
	P_NATIVE_END;
}
// End Class UCPP_RankingManagerComponent Function ServerCalculatePlayerPlacements

// Begin Class UCPP_RankingManagerComponent
void UCPP_RankingManagerComponent::StaticRegisterNativesUCPP_RankingManagerComponent()
{
	UClass* Class = UCPP_RankingManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ServerCalculatePlayerPlacements", &UCPP_RankingManagerComponent::execServerCalculatePlayerPlacements },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_RankingManagerComponent);
UClass* Z_Construct_UClass_UCPP_RankingManagerComponent_NoRegister()
{
	return UCPP_RankingManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UCPP_RankingManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CPP_RankingManagerComponent.h" },
		{ "ModuleRelativePath", "Public/CPP_RankingManagerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_RankingManagerComponent_ServerCalculatePlayerPlacements, "ServerCalculatePlayerPlacements" }, // 912355450
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_RankingManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_RankingManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayerRankingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_RankingManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_RankingManagerComponent_Statics::ClassParams = {
	&UCPP_RankingManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_RankingManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_RankingManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_RankingManagerComponent()
{
	if (!Z_Registration_Info_UClass_UCPP_RankingManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_RankingManagerComponent.OuterSingleton, Z_Construct_UClass_UCPP_RankingManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_RankingManagerComponent.OuterSingleton;
}
template<> PLAYERRANKINGSYSTEM_API UClass* StaticClass<UCPP_RankingManagerComponent>()
{
	return UCPP_RankingManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_RankingManagerComponent);
UCPP_RankingManagerComponent::~UCPP_RankingManagerComponent() {}
// End Class UCPP_RankingManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerInfo::StaticStruct, Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewStructOps, TEXT("PlayerInfo"), &Z_Registration_Info_UScriptStruct_PlayerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerInfo), 522319405U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_RankingManagerComponent, UCPP_RankingManagerComponent::StaticClass, TEXT("UCPP_RankingManagerComponent"), &Z_Registration_Info_UClass_UCPP_RankingManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_RankingManagerComponent), 2767906131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_1999845354(TEXT("/Script/PlayerRankingSystem"),
	Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
