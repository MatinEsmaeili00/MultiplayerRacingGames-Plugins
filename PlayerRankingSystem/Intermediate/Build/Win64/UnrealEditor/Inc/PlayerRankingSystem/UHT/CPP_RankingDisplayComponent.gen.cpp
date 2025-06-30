// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerRankingSystem/Public/CPP_RankingDisplayComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_RankingDisplayComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PLAYERRANKINGSYSTEM_API UClass* Z_Construct_UClass_UCPP_RankingDisplayComponent();
PLAYERRANKINGSYSTEM_API UClass* Z_Construct_UClass_UCPP_RankingDisplayComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PlayerRankingSystem();
// End Cross Module References

// Begin Class UCPP_RankingDisplayComponent Function Multicast_SetPlacement
struct CPP_RankingDisplayComponent_eventMulticast_SetPlacement_Parms
{
	int32 NewPlacement;
};
static const FName NAME_UCPP_RankingDisplayComponent_Multicast_SetPlacement = FName(TEXT("Multicast_SetPlacement"));
void UCPP_RankingDisplayComponent::Multicast_SetPlacement(int32 NewPlacement)
{
	CPP_RankingDisplayComponent_eventMulticast_SetPlacement_Parms Parms;
	Parms.NewPlacement=NewPlacement;
	UFunction* Func = FindFunctionChecked(NAME_UCPP_RankingDisplayComponent_Multicast_SetPlacement);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPlacement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement_Statics::NewProp_NewPlacement = { "NewPlacement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_RankingDisplayComponent_eventMulticast_SetPlacement_Parms, NewPlacement), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement_Statics::NewProp_NewPlacement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_RankingDisplayComponent, nullptr, "Multicast_SetPlacement", nullptr, nullptr, Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement_Statics::PropPointers), sizeof(CPP_RankingDisplayComponent_eventMulticast_SetPlacement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement_Statics::Function_MetaDataParams) };
static_assert(sizeof(CPP_RankingDisplayComponent_eventMulticast_SetPlacement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_RankingDisplayComponent::execMulticast_SetPlacement)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewPlacement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_SetPlacement_Implementation(Z_Param_NewPlacement);
	P_NATIVE_END;
}
// End Class UCPP_RankingDisplayComponent Function Multicast_SetPlacement

// Begin Class UCPP_RankingDisplayComponent Function Multicast_SetProgress
struct CPP_RankingDisplayComponent_eventMulticast_SetProgress_Parms
{
	float NewProgress;
};
static const FName NAME_UCPP_RankingDisplayComponent_Multicast_SetProgress = FName(TEXT("Multicast_SetProgress"));
void UCPP_RankingDisplayComponent::Multicast_SetProgress(float NewProgress)
{
	CPP_RankingDisplayComponent_eventMulticast_SetProgress_Parms Parms;
	Parms.NewProgress=NewProgress;
	UFunction* Func = FindFunctionChecked(NAME_UCPP_RankingDisplayComponent_Multicast_SetProgress);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_RankingDisplayComponent_eventMulticast_SetProgress_Parms, NewProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress_Statics::NewProp_NewProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_RankingDisplayComponent, nullptr, "Multicast_SetProgress", nullptr, nullptr, Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress_Statics::PropPointers), sizeof(CPP_RankingDisplayComponent_eventMulticast_SetProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(CPP_RankingDisplayComponent_eventMulticast_SetProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_RankingDisplayComponent::execMulticast_SetProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_SetProgress_Implementation(Z_Param_NewProgress);
	P_NATIVE_END;
}
// End Class UCPP_RankingDisplayComponent Function Multicast_SetProgress

// Begin Class UCPP_RankingDisplayComponent Function OnRep_PlacementWidgetUpdate
struct Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_PlacementWidgetUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_PlacementWidgetUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_RankingDisplayComponent, nullptr, "OnRep_PlacementWidgetUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_PlacementWidgetUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_PlacementWidgetUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_PlacementWidgetUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_PlacementWidgetUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_RankingDisplayComponent::execOnRep_PlacementWidgetUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PlacementWidgetUpdate();
	P_NATIVE_END;
}
// End Class UCPP_RankingDisplayComponent Function OnRep_PlacementWidgetUpdate

// Begin Class UCPP_RankingDisplayComponent Function OnRep_ProgressWidgetUpdate
struct Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_ProgressWidgetUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_ProgressWidgetUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_RankingDisplayComponent, nullptr, "OnRep_ProgressWidgetUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_ProgressWidgetUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_ProgressWidgetUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_ProgressWidgetUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_ProgressWidgetUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_RankingDisplayComponent::execOnRep_ProgressWidgetUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ProgressWidgetUpdate();
	P_NATIVE_END;
}
// End Class UCPP_RankingDisplayComponent Function OnRep_ProgressWidgetUpdate

// Begin Class UCPP_RankingDisplayComponent Function Server_NotifyPlayerReady
static const FName NAME_UCPP_RankingDisplayComponent_Server_NotifyPlayerReady = FName(TEXT("Server_NotifyPlayerReady"));
void UCPP_RankingDisplayComponent::Server_NotifyPlayerReady()
{
	UFunction* Func = FindFunctionChecked(NAME_UCPP_RankingDisplayComponent_Server_NotifyPlayerReady);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCPP_RankingDisplayComponent_Server_NotifyPlayerReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_RankingDisplayComponent_Server_NotifyPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_RankingDisplayComponent, nullptr, "Server_NotifyPlayerReady", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_RankingDisplayComponent_Server_NotifyPlayerReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_RankingDisplayComponent_Server_NotifyPlayerReady_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCPP_RankingDisplayComponent_Server_NotifyPlayerReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_RankingDisplayComponent_Server_NotifyPlayerReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPP_RankingDisplayComponent::execServer_NotifyPlayerReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_NotifyPlayerReady_Implementation();
	P_NATIVE_END;
}
// End Class UCPP_RankingDisplayComponent Function Server_NotifyPlayerReady

// Begin Class UCPP_RankingDisplayComponent
void UCPP_RankingDisplayComponent::StaticRegisterNativesUCPP_RankingDisplayComponent()
{
	UClass* Class = UCPP_RankingDisplayComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Multicast_SetPlacement", &UCPP_RankingDisplayComponent::execMulticast_SetPlacement },
		{ "Multicast_SetProgress", &UCPP_RankingDisplayComponent::execMulticast_SetProgress },
		{ "OnRep_PlacementWidgetUpdate", &UCPP_RankingDisplayComponent::execOnRep_PlacementWidgetUpdate },
		{ "OnRep_ProgressWidgetUpdate", &UCPP_RankingDisplayComponent::execOnRep_ProgressWidgetUpdate },
		{ "Server_NotifyPlayerReady", &UCPP_RankingDisplayComponent::execServer_NotifyPlayerReady },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_RankingDisplayComponent);
UClass* Z_Construct_UClass_UCPP_RankingDisplayComponent_NoRegister()
{
	return UCPP_RankingDisplayComponent::StaticClass();
}
struct Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CPP_RankingDisplayComponent.h" },
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RacerPosition_MetaData[] = {
		{ "Category", "Race" },
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RacerProgress_MetaData[] = {
		{ "Category", "Race" },
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Widget class to use for placement UI\n" },
#endif
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget class to use for placement UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instance of the widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance of the widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Widget class to use for placement UI\n" },
#endif
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget class to use for placement UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instance of the widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_RankingDisplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance of the widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RacerPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RacerProgress;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlacementWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacementWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProgressWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetPlacement, "Multicast_SetPlacement" }, // 1149974901
		{ &Z_Construct_UFunction_UCPP_RankingDisplayComponent_Multicast_SetProgress, "Multicast_SetProgress" }, // 2301828001
		{ &Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_PlacementWidgetUpdate, "OnRep_PlacementWidgetUpdate" }, // 2401960776
		{ &Z_Construct_UFunction_UCPP_RankingDisplayComponent_OnRep_ProgressWidgetUpdate, "OnRep_ProgressWidgetUpdate" }, // 402063095
		{ &Z_Construct_UFunction_UCPP_RankingDisplayComponent_Server_NotifyPlayerReady, "Server_NotifyPlayerReady" }, // 2287473463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_RankingDisplayComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_RacerPosition = { "RacerPosition", "OnRep_PlacementWidgetUpdate", (EPropertyFlags)0x0010000100020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_RankingDisplayComponent, RacerPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RacerPosition_MetaData), NewProp_RacerPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_RacerProgress = { "RacerProgress", "OnRep_ProgressWidgetUpdate", (EPropertyFlags)0x0010000100020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_RankingDisplayComponent, RacerProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RacerProgress_MetaData), NewProp_RacerProgress_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_PlacementWidgetClass = { "PlacementWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_RankingDisplayComponent, PlacementWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementWidgetClass_MetaData), NewProp_PlacementWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_PlacementWidget = { "PlacementWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_RankingDisplayComponent, PlacementWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementWidget_MetaData), NewProp_PlacementWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_ProgressWidgetClass = { "ProgressWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_RankingDisplayComponent, ProgressWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressWidgetClass_MetaData), NewProp_ProgressWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_ProgressWidget = { "ProgressWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPP_RankingDisplayComponent, ProgressWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressWidget_MetaData), NewProp_ProgressWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_RacerPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_RacerProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_PlacementWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_PlacementWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_ProgressWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::NewProp_ProgressWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayerRankingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::ClassParams = {
	&UCPP_RankingDisplayComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_RankingDisplayComponent()
{
	if (!Z_Registration_Info_UClass_UCPP_RankingDisplayComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_RankingDisplayComponent.OuterSingleton, Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_RankingDisplayComponent.OuterSingleton;
}
template<> PLAYERRANKINGSYSTEM_API UClass* StaticClass<UCPP_RankingDisplayComponent>()
{
	return UCPP_RankingDisplayComponent::StaticClass();
}
void UCPP_RankingDisplayComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_RacerPosition(TEXT("RacerPosition"));
	static const FName Name_RacerProgress(TEXT("RacerProgress"));
	const bool bIsValid = true
		&& Name_RacerPosition == ClassReps[(int32)ENetFields_Private::RacerPosition].Property->GetFName()
		&& Name_RacerProgress == ClassReps[(int32)ENetFields_Private::RacerProgress].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCPP_RankingDisplayComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_RankingDisplayComponent);
UCPP_RankingDisplayComponent::~UCPP_RankingDisplayComponent() {}
// End Class UCPP_RankingDisplayComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_RankingDisplayComponent, UCPP_RankingDisplayComponent::StaticClass, TEXT("UCPP_RankingDisplayComponent"), &Z_Registration_Info_UClass_UCPP_RankingDisplayComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_RankingDisplayComponent), 2466083396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_1156169122(TEXT("/Script/PlayerRankingSystem"),
	Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
