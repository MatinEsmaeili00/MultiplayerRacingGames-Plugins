// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMapSystem_init() {}
	GAMEMAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_GameMapSystem_OnRequestSetupMiniMap__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameMapSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameMapSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_GameMapSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GameMapSystem_OnRequestSetupMiniMap__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameMapSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x706F1EBE,
				0x52381BA8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameMapSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameMapSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameMapSystem(Z_Construct_UPackage__Script_GameMapSystem, TEXT("/Script/GameMapSystem"), Z_Registration_Info_UPackage__Script_GameMapSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x706F1EBE, 0x52381BA8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
