// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_UW_Map.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMAPSYSTEM_CPP_UW_Map_generated_h
#error "CPP_UW_Map.generated.h already included, missing '#pragma once' in CPP_UW_Map.h"
#endif
#define GAMEMAPSYSTEM_CPP_UW_Map_generated_h

#define FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_15_DELEGATE \
GAMEMAPSYSTEM_API void FOnRequestSetupMiniMap_DelegateWrapper(const FMulticastScriptDelegate& OnRequestSetupMiniMap);


#define FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateMiniMapLayoutFromTexture);


#define FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_UW_Map(); \
	friend struct Z_Construct_UClass_UCPP_UW_Map_Statics; \
public: \
	DECLARE_CLASS(UCPP_UW_Map, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameMapSystem"), NO_API) \
	DECLARE_SERIALIZER(UCPP_UW_Map)


#define FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_UW_Map(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCPP_UW_Map(UCPP_UW_Map&&); \
	UCPP_UW_Map(const UCPP_UW_Map&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_UW_Map); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_UW_Map); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_UW_Map) \
	NO_API virtual ~UCPP_UW_Map();


#define FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_18_PROLOG
#define FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_21_INCLASS_NO_PURE_DECLS \
	FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMAPSYSTEM_API UClass* StaticClass<class UCPP_UW_Map>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_UW_Map_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
