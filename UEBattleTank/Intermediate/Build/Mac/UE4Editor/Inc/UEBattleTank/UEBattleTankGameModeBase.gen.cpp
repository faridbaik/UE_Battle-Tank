// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBattleTank/UEBattleTankGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEBattleTankGameModeBase() {}
// Cross Module References
	UEBATTLETANK_API UClass* Z_Construct_UClass_AUEBattleTankGameModeBase_NoRegister();
	UEBATTLETANK_API UClass* Z_Construct_UClass_AUEBattleTankGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UEBattleTank();
// End Cross Module References
	void AUEBattleTankGameModeBase::StaticRegisterNativesAUEBattleTankGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUEBattleTankGameModeBase_NoRegister()
	{
		return AUEBattleTankGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUEBattleTankGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUEBattleTankGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UEBattleTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEBattleTankGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UEBattleTankGameModeBase.h" },
		{ "ModuleRelativePath", "UEBattleTankGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUEBattleTankGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEBattleTankGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUEBattleTankGameModeBase_Statics::ClassParams = {
		&AUEBattleTankGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUEBattleTankGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUEBattleTankGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUEBattleTankGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUEBattleTankGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUEBattleTankGameModeBase, 4237510724);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUEBattleTankGameModeBase(Z_Construct_UClass_AUEBattleTankGameModeBase, &AUEBattleTankGameModeBase::StaticClass, TEXT("/Script/UEBattleTank"), TEXT("AUEBattleTankGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUEBattleTankGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
