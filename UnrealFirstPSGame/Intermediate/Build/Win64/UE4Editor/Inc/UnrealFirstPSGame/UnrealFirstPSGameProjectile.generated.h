// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNREALFIRSTPSGAME_UnrealFirstPSGameProjectile_generated_h
#error "UnrealFirstPSGameProjectile.generated.h already included, missing '#pragma once' in UnrealFirstPSGameProjectile.h"
#endif
#define UNREALFIRSTPSGAME_UnrealFirstPSGameProjectile_generated_h

#define UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_SPARSE_DATA
#define UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealFirstPSGameProjectile(); \
	friend struct Z_Construct_UClass_AUnrealFirstPSGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealFirstPSGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealFirstPSGame"), NO_API) \
	DECLARE_SERIALIZER(AUnrealFirstPSGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUnrealFirstPSGameProjectile(); \
	friend struct Z_Construct_UClass_AUnrealFirstPSGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealFirstPSGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealFirstPSGame"), NO_API) \
	DECLARE_SERIALIZER(AUnrealFirstPSGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealFirstPSGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealFirstPSGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealFirstPSGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealFirstPSGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealFirstPSGameProjectile(AUnrealFirstPSGameProjectile&&); \
	NO_API AUnrealFirstPSGameProjectile(const AUnrealFirstPSGameProjectile&); \
public:


#define UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealFirstPSGameProjectile(AUnrealFirstPSGameProjectile&&); \
	NO_API AUnrealFirstPSGameProjectile(const AUnrealFirstPSGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealFirstPSGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealFirstPSGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealFirstPSGameProjectile)


#define UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUnrealFirstPSGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUnrealFirstPSGameProjectile, ProjectileMovement); }


#define UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_12_PROLOG
#define UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_SPARSE_DATA \
	UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_RPC_WRAPPERS \
	UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_INCLASS \
	UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_SPARSE_DATA \
	UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALFIRSTPSGAME_API UClass* StaticClass<class AUnrealFirstPSGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealFirstPSGame_Source_UnrealFirstPSGame_UnrealFirstPSGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
