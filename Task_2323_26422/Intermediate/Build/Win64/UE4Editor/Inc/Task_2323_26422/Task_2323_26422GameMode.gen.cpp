// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task_2323_26422/Task_2323_26422GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_2323_26422GameMode() {}
// Cross Module References
	TASK_2323_26422_API UClass* Z_Construct_UClass_ATask_2323_26422GameMode_NoRegister();
	TASK_2323_26422_API UClass* Z_Construct_UClass_ATask_2323_26422GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Task_2323_26422();
// End Cross Module References
	void ATask_2323_26422GameMode::StaticRegisterNativesATask_2323_26422GameMode()
	{
	}
	UClass* Z_Construct_UClass_ATask_2323_26422GameMode_NoRegister()
	{
		return ATask_2323_26422GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATask_2323_26422GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATask_2323_26422GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Task_2323_26422,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATask_2323_26422GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Task_2323_26422GameMode.h" },
		{ "ModuleRelativePath", "Task_2323_26422GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATask_2323_26422GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATask_2323_26422GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATask_2323_26422GameMode_Statics::ClassParams = {
		&ATask_2323_26422GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATask_2323_26422GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATask_2323_26422GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATask_2323_26422GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATask_2323_26422GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATask_2323_26422GameMode, 3869789784);
	template<> TASK_2323_26422_API UClass* StaticClass<ATask_2323_26422GameMode>()
	{
		return ATask_2323_26422GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATask_2323_26422GameMode(Z_Construct_UClass_ATask_2323_26422GameMode, &ATask_2323_26422GameMode::StaticClass, TEXT("/Script/Task_2323_26422"), TEXT("ATask_2323_26422GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATask_2323_26422GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
