// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CraneGame/CraneGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraneGameGameMode() {}
// Cross Module References
	CRANEGAME_API UClass* Z_Construct_UClass_ACraneGameGameMode();
	CRANEGAME_API UClass* Z_Construct_UClass_ACraneGameGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CraneGame();
// End Cross Module References
	void ACraneGameGameMode::StaticRegisterNativesACraneGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACraneGameGameMode);
	UClass* Z_Construct_UClass_ACraneGameGameMode_NoRegister()
	{
		return ACraneGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACraneGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACraneGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CraneGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACraneGameGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraneGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CraneGameGameMode.h" },
		{ "ModuleRelativePath", "CraneGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACraneGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACraneGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACraneGameGameMode_Statics::ClassParams = {
		&ACraneGameGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACraneGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACraneGameGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACraneGameGameMode()
	{
		if (!Z_Registration_Info_UClass_ACraneGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACraneGameGameMode.OuterSingleton, Z_Construct_UClass_ACraneGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACraneGameGameMode.OuterSingleton;
	}
	template<> CRANEGAME_API UClass* StaticClass<ACraneGameGameMode>()
	{
		return ACraneGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACraneGameGameMode);
	ACraneGameGameMode::~ACraneGameGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealGames_2023EpicGamesMegajam_2023_epic_megajam_CraneGame_Source_CraneGame_CraneGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGames_2023EpicGamesMegajam_2023_epic_megajam_CraneGame_Source_CraneGame_CraneGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACraneGameGameMode, ACraneGameGameMode::StaticClass, TEXT("ACraneGameGameMode"), &Z_Registration_Info_UClass_ACraneGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACraneGameGameMode), 1481005763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGames_2023EpicGamesMegajam_2023_epic_megajam_CraneGame_Source_CraneGame_CraneGameGameMode_h_3348480897(TEXT("/Script/CraneGame"),
		Z_CompiledInDeferFile_FID_UnrealGames_2023EpicGamesMegajam_2023_epic_megajam_CraneGame_Source_CraneGame_CraneGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGames_2023EpicGamesMegajam_2023_epic_megajam_CraneGame_Source_CraneGame_CraneGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
