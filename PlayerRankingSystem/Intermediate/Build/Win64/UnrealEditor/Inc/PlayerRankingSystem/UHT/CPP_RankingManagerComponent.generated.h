// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_RankingManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYERRANKINGSYSTEM_CPP_RankingManagerComponent_generated_h
#error "CPP_RankingManagerComponent.generated.h already included, missing '#pragma once' in CPP_RankingManagerComponent.h"
#endif
#define PLAYERRANKINGSYSTEM_CPP_RankingManagerComponent_generated_h

#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerInfo_Statics; \
	PLAYERRANKINGSYSTEM_API static class UScriptStruct* StaticStruct();


template<> PLAYERRANKINGSYSTEM_API UScriptStruct* StaticStruct<struct FPlayerInfo>();

#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execServerCalculatePlayerPlacements);


#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_34_CALLBACK_WRAPPERS
#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_RankingManagerComponent(); \
	friend struct Z_Construct_UClass_UCPP_RankingManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UCPP_RankingManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayerRankingSystem"), NO_API) \
	DECLARE_SERIALIZER(UCPP_RankingManagerComponent)


#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCPP_RankingManagerComponent(UCPP_RankingManagerComponent&&); \
	UCPP_RankingManagerComponent(const UCPP_RankingManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_RankingManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_RankingManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCPP_RankingManagerComponent) \
	NO_API virtual ~UCPP_RankingManagerComponent();


#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_31_PROLOG
#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_34_CALLBACK_WRAPPERS \
	FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERRANKINGSYSTEM_API UClass* StaticClass<class UCPP_RankingManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
