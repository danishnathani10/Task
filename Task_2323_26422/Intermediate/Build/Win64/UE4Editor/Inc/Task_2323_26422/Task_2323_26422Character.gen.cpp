// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task_2323_26422/Task_2323_26422Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_2323_26422Character() {}
// Cross Module References
	TASK_2323_26422_API UClass* Z_Construct_UClass_ATask_2323_26422Character_NoRegister();
	TASK_2323_26422_API UClass* Z_Construct_UClass_ATask_2323_26422Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Task_2323_26422();
	TASK_2323_26422_API UClass* Z_Construct_UClass_ALeverActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATask_2323_26422Character::execMulticast_ToggleLever)
	{
		P_GET_OBJECT(ALeverActor,Z_Param_lev);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ToggleLever_Implementation(Z_Param_lev);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATask_2323_26422Character::execServer_ToggleLever)
	{
		P_GET_OBJECT(ALeverActor,Z_Param_lev);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ToggleLever_Validate(Z_Param_lev))
		{
			RPC_ValidateFailed(TEXT("Server_ToggleLever_Validate"));
			return;
		}
		P_THIS->Server_ToggleLever_Implementation(Z_Param_lev);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATask_2323_26422Character::execOnRep_Name)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Name();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATask_2323_26422Character::execServer_SetUsername)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_usrnam);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetUsername_Validate(Z_Param_usrnam))
		{
			RPC_ValidateFailed(TEXT("Server_SetUsername_Validate"));
			return;
		}
		P_THIS->Server_SetUsername_Implementation(Z_Param_usrnam);
		P_NATIVE_END;
	}
	static FName NAME_ATask_2323_26422Character_Multicast_ToggleLever = FName(TEXT("Multicast_ToggleLever"));
	void ATask_2323_26422Character::Multicast_ToggleLever(ALeverActor* lev)
	{
		Task_2323_26422Character_eventMulticast_ToggleLever_Parms Parms;
		Parms.lev=lev;
		ProcessEvent(FindFunctionChecked(NAME_ATask_2323_26422Character_Multicast_ToggleLever),&Parms);
	}
	static FName NAME_ATask_2323_26422Character_Server_SetUsername = FName(TEXT("Server_SetUsername"));
	void ATask_2323_26422Character::Server_SetUsername(const FString& usrnam)
	{
		Task_2323_26422Character_eventServer_SetUsername_Parms Parms;
		Parms.usrnam=usrnam;
		ProcessEvent(FindFunctionChecked(NAME_ATask_2323_26422Character_Server_SetUsername),&Parms);
	}
	static FName NAME_ATask_2323_26422Character_Server_ToggleLever = FName(TEXT("Server_ToggleLever"));
	void ATask_2323_26422Character::Server_ToggleLever(ALeverActor* lev)
	{
		Task_2323_26422Character_eventServer_ToggleLever_Parms Parms;
		Parms.lev=lev;
		ProcessEvent(FindFunctionChecked(NAME_ATask_2323_26422Character_Server_ToggleLever),&Parms);
	}
	void ATask_2323_26422Character::StaticRegisterNativesATask_2323_26422Character()
	{
		UClass* Class = ATask_2323_26422Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ToggleLever", &ATask_2323_26422Character::execMulticast_ToggleLever },
			{ "OnRep_Name", &ATask_2323_26422Character::execOnRep_Name },
			{ "Server_SetUsername", &ATask_2323_26422Character::execServer_SetUsername },
			{ "Server_ToggleLever", &ATask_2323_26422Character::execServer_ToggleLever },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lev;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever_Statics::NewProp_lev = { "lev", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Task_2323_26422Character_eventMulticast_ToggleLever_Parms, lev), Z_Construct_UClass_ALeverActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever_Statics::NewProp_lev,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Task_2323_26422Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATask_2323_26422Character, nullptr, "Multicast_ToggleLever", nullptr, nullptr, sizeof(Task_2323_26422Character_eventMulticast_ToggleLever_Parms), Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATask_2323_26422Character_OnRep_Name_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATask_2323_26422Character_OnRep_Name_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Task_2323_26422Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATask_2323_26422Character_OnRep_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATask_2323_26422Character, nullptr, "OnRep_Name", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATask_2323_26422Character_OnRep_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATask_2323_26422Character_OnRep_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATask_2323_26422Character_OnRep_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATask_2323_26422Character_OnRep_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_usrnam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_usrnam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::NewProp_usrnam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::NewProp_usrnam = { "usrnam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Task_2323_26422Character_eventServer_SetUsername_Parms, usrnam), METADATA_PARAMS(Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::NewProp_usrnam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::NewProp_usrnam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::NewProp_usrnam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Task_2323_26422Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATask_2323_26422Character, nullptr, "Server_SetUsername", nullptr, nullptr, sizeof(Task_2323_26422Character_eventServer_SetUsername_Parms), Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lev;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever_Statics::NewProp_lev = { "lev", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Task_2323_26422Character_eventServer_ToggleLever_Parms, lev), Z_Construct_UClass_ALeverActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever_Statics::NewProp_lev,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Task_2323_26422Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATask_2323_26422Character, nullptr, "Server_ToggleLever", nullptr, nullptr, sizeof(Task_2323_26422Character_eventServer_ToggleLever_Parms), Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATask_2323_26422Character_NoRegister()
	{
		return ATask_2323_26422Character::StaticClass();
	}
	struct Z_Construct_UClass_ATask_2323_26422Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textRender_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_textRender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATask_2323_26422Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Task_2323_26422,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATask_2323_26422Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATask_2323_26422Character_Multicast_ToggleLever, "Multicast_ToggleLever" }, // 4040771990
		{ &Z_Construct_UFunction_ATask_2323_26422Character_OnRep_Name, "OnRep_Name" }, // 2365543655
		{ &Z_Construct_UFunction_ATask_2323_26422Character_Server_SetUsername, "Server_SetUsername" }, // 3156286816
		{ &Z_Construct_UFunction_ATask_2323_26422Character_Server_ToggleLever, "Server_ToggleLever" }, // 1748193116
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATask_2323_26422Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Task_2323_26422Character.h" },
		{ "ModuleRelativePath", "Task_2323_26422Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Task_2323_26422Character.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATask_2323_26422Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Task_2323_26422Character.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATask_2323_26422Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Task_2323_26422Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATask_2323_26422Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Task_2323_26422Character.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATask_2323_26422Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_textRender_MetaData[] = {
		{ "Category", "Task_2323_26422Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Task_2323_26422Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_textRender = { "textRender", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATask_2323_26422Character, textRender), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_textRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_textRender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_userName_MetaData[] = {
		{ "ModuleRelativePath", "Task_2323_26422Character.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_userName = { "userName", "OnRep_Name", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATask_2323_26422Character, userName), METADATA_PARAMS(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_userName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_userName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATask_2323_26422Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_textRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATask_2323_26422Character_Statics::NewProp_userName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATask_2323_26422Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATask_2323_26422Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATask_2323_26422Character_Statics::ClassParams = {
		&ATask_2323_26422Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATask_2323_26422Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATask_2323_26422Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATask_2323_26422Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATask_2323_26422Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATask_2323_26422Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATask_2323_26422Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATask_2323_26422Character, 1332196963);
	template<> TASK_2323_26422_API UClass* StaticClass<ATask_2323_26422Character>()
	{
		return ATask_2323_26422Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATask_2323_26422Character(Z_Construct_UClass_ATask_2323_26422Character, &ATask_2323_26422Character::StaticClass, TEXT("/Script/Task_2323_26422"), TEXT("ATask_2323_26422Character"), false, nullptr, nullptr, nullptr);

	void ATask_2323_26422Character::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_userName(TEXT("userName"));

		const bool bIsValid = true
			&& Name_userName == ClassReps[(int32)ENetFields_Private::userName].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATask_2323_26422Character"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATask_2323_26422Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
