// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealFirstPSGame/UnrealFirstPSGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealFirstPSGameHUD() {}
// Cross Module References
	UNREALFIRSTPSGAME_API UClass* Z_Construct_UClass_AUnrealFirstPSGameHUD_NoRegister();
	UNREALFIRSTPSGAME_API UClass* Z_Construct_UClass_AUnrealFirstPSGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UnrealFirstPSGame();
// End Cross Module References
	void AUnrealFirstPSGameHUD::StaticRegisterNativesAUnrealFirstPSGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AUnrealFirstPSGameHUD_NoRegister()
	{
		return AUnrealFirstPSGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealFirstPSGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealFirstPSGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealFirstPSGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealFirstPSGameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UnrealFirstPSGameHUD.h" },
		{ "ModuleRelativePath", "UnrealFirstPSGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealFirstPSGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealFirstPSGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealFirstPSGameHUD_Statics::ClassParams = {
		&AUnrealFirstPSGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealFirstPSGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealFirstPSGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealFirstPSGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealFirstPSGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealFirstPSGameHUD, 1901344451);
	template<> UNREALFIRSTPSGAME_API UClass* StaticClass<AUnrealFirstPSGameHUD>()
	{
		return AUnrealFirstPSGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealFirstPSGameHUD(Z_Construct_UClass_AUnrealFirstPSGameHUD, &AUnrealFirstPSGameHUD::StaticClass, TEXT("/Script/UnrealFirstPSGame"), TEXT("AUnrealFirstPSGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealFirstPSGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
