// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_RankingDisplayComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYERRANKINGSYSTEM_CPP_RankingDisplayComponent_generated_h
#error "CPP_RankingDisplayComponent.generated.h already included, missing '#pragma once' in CPP_RankingDisplayComponent.h"
#endif
#define PLAYERRANKINGSYSTEM_CPP_RankingDisplayComponent_generated_h

#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_NotifyPlayerReady_Implementation(); \
	virtual void Multicast_SetProgress_Implementation(float NewProgress); \
	virtual void Multicast_SetPlacement_Implementation(int32 NewPlacement); \
	DECLARE_FUNCTION(execServer_NotifyPlayerReady); \
	DECLARE_FUNCTION(execMulticast_SetProgress); \
	DECLARE_FUNCTION(execMulticast_SetPlacement); \
	DECLARE_FUNCTION(execOnRep_ProgressWidgetUpdate); \
	DECLARE_FUNCTION(execOnRep_PlacementWidgetUpdate);


#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_15_CALLBACK_WRAPPERS
#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_RankingDisplayComponent(); \
	friend struct Z_Construct_UClass_UCPP_RankingDisplayComponent_Statics; \
public: \
	DECLARE_CLASS(UCPP_RankingDisplayComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayerRankingSystem"), NO_API) \
	DECLARE_SERIALIZER(UCPP_RankingDisplayComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RacerPosition=NETFIELD_REP_START, \
		RacerProgress, \
		NETFIELD_REP_END=RacerProgress	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCPP_RankingDisplayComponent(UCPP_RankingDisplayComponent&&); \
	UCPP_RankingDisplayComponent(const UCPP_RankingDisplayComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_RankingDisplayComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_RankingDisplayComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCPP_RankingDisplayComponent) \
	NO_API virtual ~UCPP_RankingDisplayComponent();


#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_12_PROLOG
#define FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_15_CALLBACK_WRAPPERS \
	FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERRANKINGSYSTEM_API UClass* StaticClass<class UCPP_RankingDisplayComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RacingGames_Plugins_Plugins_PlayerRankingSystem_Source_PlayerRankingSystem_Public_CPP_RankingDisplayComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
