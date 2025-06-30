// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_MapVolumeBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMAPSYSTEM_CPP_MapVolumeBox_generated_h
#error "CPP_MapVolumeBox.generated.h already included, missing '#pragma once' in CPP_MapVolumeBox.h"
#endif
#define GAMEMAPSYSTEM_CPP_MapVolumeBox_generated_h

#define FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCaptureImageFromBox);


#define FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_MapVolumeBox(); \
	friend struct Z_Construct_UClass_ACPP_MapVolumeBox_Statics; \
public: \
	DECLARE_CLASS(ACPP_MapVolumeBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMapSystem"), NO_API) \
	DECLARE_SERIALIZER(ACPP_MapVolumeBox)


#define FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPP_MapVolumeBox(ACPP_MapVolumeBox&&); \
	ACPP_MapVolumeBox(const ACPP_MapVolumeBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_MapVolumeBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_MapVolumeBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_MapVolumeBox) \
	NO_API virtual ~ACPP_MapVolumeBox();


#define FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_23_PROLOG
#define FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_26_INCLASS_NO_PURE_DECLS \
	FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMAPSYSTEM_API UClass* StaticClass<class ACPP_MapVolumeBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RacingGames_Plugins_Plugins_GameMapSystem_Source_GameMapSystem_Public_CPP_MapVolumeBox_h


#define FOREACH_ENUM_ESCREENSHOTCOMPRESSIONFORMAT(op) \
	op(EScreenshotCompressionFormat::TC_Default) \
	op(EScreenshotCompressionFormat::TC_EditorIcon) \
	op(EScreenshotCompressionFormat::TC_Grayscale) \
	op(EScreenshotCompressionFormat::TC_HDR) \
	op(EScreenshotCompressionFormat::TC_Masks) \
	op(EScreenshotCompressionFormat::TC_VectorDisplacementmap) 

enum class EScreenshotCompressionFormat : uint8;
template<> struct TIsUEnumClass<EScreenshotCompressionFormat> { enum { Value = true }; };
template<> GAMEMAPSYSTEM_API UEnum* StaticEnum<EScreenshotCompressionFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
