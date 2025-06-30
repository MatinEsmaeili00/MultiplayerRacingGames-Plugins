// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerRankingSystem/Public/CPP_UW_RankingWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_UW_RankingWidget() {}

// Begin Cross Module References
PLAYERRANKINGSYSTEM_API UClass* Z_Construct_UClass_UCPP_UW_RankingWidget();
PLAYERRANKINGSYSTEM_API UClass* Z_Construct_UClass_UCPP_UW_RankingWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PlayerRankingSystem();
// End Cross Module References

// Begin Class UCPP_UW_RankingWidget
void UCPP_UW_RankingWidget::StaticRegisterNativesUCPP_UW_RankingWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_UW_RankingWidget);
UClass* Z_Construct_UClass_UCPP_UW_RankingWidget_NoRegister()
{
	return UCPP_UW_RankingWidget::StaticClass();
}
struct Z_Construct_UClass_UCPP_UW_RankingWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CPP_UW_RankingWidget.h" },
		{ "ModuleRelativePath", "Public/CPP_UW_RankingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically binds to PlacementText in the Widget Blueprint\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_UW_RankingWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically binds to PlacementText in the Widget Blueprint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacementText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_UW_RankingWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::NewProp_PlacementText = { "PlacementText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_UW_RankingWidget, PlacementText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementText_MetaData), NewProp_PlacementText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::NewProp_PlacementText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayerRankingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::ClassParams = {
	&UCPP_UW_RankingWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_UW_RankingWidget()
{
	if (!Z_Registration_Info_UClass_UCPP_UW_RankingWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_UW_RankingWidget.OuterSingleton, Z_Construct_UClass_UCPP_UW_RankingWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_UW_RankingWidget.OuterSingleton;
}
template<> PLAYERRANKINGSYSTEM_API UClass* StaticClass<UCPP_UW_RankingWidget>()
{
	return UCPP_UW_RankingWidget::StaticClass();
}
UCPP_UW_RankingWidget::UCPP_UW_RankingWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_UW_RankingWidget);
UCPP_UW_RankingWidget::~UCPP_UW_RankingWidget() {}
// End Class UCPP_UW_RankingWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_UW_RankingWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_UW_RankingWidget, UCPP_UW_RankingWidget::StaticClass, TEXT("UCPP_UW_RankingWidget"), &Z_Registration_Info_UClass_UCPP_UW_RankingWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_UW_RankingWidget), 1550790942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_UW_RankingWidget_h_3070773237(TEXT("/Script/PlayerRankingSystem"),
	Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_UW_RankingWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_UW_RankingWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
