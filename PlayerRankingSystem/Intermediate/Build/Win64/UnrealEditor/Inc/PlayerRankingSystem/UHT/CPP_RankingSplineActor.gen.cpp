// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerRankingSystem/Public/CPP_RankingSplineActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_RankingSplineActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
PLAYERRANKINGSYSTEM_API UClass* Z_Construct_UClass_ACPP_RankingSplineActor();
PLAYERRANKINGSYSTEM_API UClass* Z_Construct_UClass_ACPP_RankingSplineActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayerRankingSystem();
// End Cross Module References

// Begin Class ACPP_RankingSplineActor
void ACPP_RankingSplineActor::StaticRegisterNativesACPP_RankingSplineActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_RankingSplineActor);
UClass* Z_Construct_UClass_ACPP_RankingSplineActor_NoRegister()
{
	return ACPP_RankingSplineActor::StaticClass();
}
struct Z_Construct_UClass_ACPP_RankingSplineActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_RankingSplineActor.h" },
		{ "ModuleRelativePath", "Public/CPP_RankingSplineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "Track" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_RankingSplineActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_RankingSplineActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_RankingSplineActor_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_RankingSplineActor, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_RankingSplineActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_RankingSplineActor_Statics::NewProp_SplineComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RankingSplineActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_RankingSplineActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayerRankingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RankingSplineActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_RankingSplineActor_Statics::ClassParams = {
	&ACPP_RankingSplineActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACPP_RankingSplineActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RankingSplineActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RankingSplineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_RankingSplineActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_RankingSplineActor()
{
	if (!Z_Registration_Info_UClass_ACPP_RankingSplineActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_RankingSplineActor.OuterSingleton, Z_Construct_UClass_ACPP_RankingSplineActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_RankingSplineActor.OuterSingleton;
}
template<> PLAYERRANKINGSYSTEM_API UClass* StaticClass<ACPP_RankingSplineActor>()
{
	return ACPP_RankingSplineActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_RankingSplineActor);
ACPP_RankingSplineActor::~ACPP_RankingSplineActor() {}
// End Class ACPP_RankingSplineActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingSplineActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_RankingSplineActor, ACPP_RankingSplineActor::StaticClass, TEXT("ACPP_RankingSplineActor"), &Z_Registration_Info_UClass_ACPP_RankingSplineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_RankingSplineActor), 1211869432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingSplineActor_h_1279741925(TEXT("/Script/PlayerRankingSystem"),
	Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingSplineActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingSplineActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
