// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMapSystem/Public/CPP_MapDisplayComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_MapDisplayComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEMAPSYSTEM_API UClass* Z_Construct_UClass_UCPP_MapDisplayComponent();
GAMEMAPSYSTEM_API UClass* Z_Construct_UClass_UCPP_MapDisplayComponent_NoRegister();
GAMEMAPSYSTEM_API UClass* Z_Construct_UClass_UCPP_UW_Map_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameMapSystem();
// End Cross Module References

// Begin Class UCPP_MapDisplayComponent
void UCPP_MapDisplayComponent::StaticRegisterNativesUCPP_MapDisplayComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_MapDisplayComponent);
UClass* Z_Construct_UClass_UCPP_MapDisplayComponent_NoRegister()
{
	return UCPP_MapDisplayComponent::StaticClass();
}
struct Z_Construct_UClass_UCPP_MapDisplayComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CPP_MapDisplayComponent.h" },
		{ "ModuleRelativePath", "Public/CPP_MapDisplayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapWidgetClass_MetaData[] = {
		{ "Category", "CPP_MapDisplayComponent" },
		{ "ModuleRelativePath", "Public/CPP_MapDisplayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_MapDisplayComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MiniMapWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniMapWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_MapDisplayComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::NewProp_MiniMapWidgetClass = { "MiniMapWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MapDisplayComponent, MiniMapWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCPP_UW_Map_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniMapWidgetClass_MetaData), NewProp_MiniMapWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::NewProp_MiniMapWidgetInstance = { "MiniMapWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_MapDisplayComponent, MiniMapWidgetInstance), Z_Construct_UClass_UCPP_UW_Map_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiniMapWidgetInstance_MetaData), NewProp_MiniMapWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::NewProp_MiniMapWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::NewProp_MiniMapWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameMapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::ClassParams = {
	&UCPP_MapDisplayComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_MapDisplayComponent()
{
	if (!Z_Registration_Info_UClass_UCPP_MapDisplayComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_MapDisplayComponent.OuterSingleton, Z_Construct_UClass_UCPP_MapDisplayComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_MapDisplayComponent.OuterSingleton;
}
template<> GAMEMAPSYSTEM_API UClass* StaticClass<UCPP_MapDisplayComponent>()
{
	return UCPP_MapDisplayComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_MapDisplayComponent);
UCPP_MapDisplayComponent::~UCPP_MapDisplayComponent() {}
// End Class UCPP_MapDisplayComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapDisplayComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_MapDisplayComponent, UCPP_MapDisplayComponent::StaticClass, TEXT("UCPP_MapDisplayComponent"), &Z_Registration_Info_UClass_UCPP_MapDisplayComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_MapDisplayComponent), 3065927002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapDisplayComponent_h_3796269861(TEXT("/Script/GameMapSystem"),
	Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapDisplayComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapDisplayComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
