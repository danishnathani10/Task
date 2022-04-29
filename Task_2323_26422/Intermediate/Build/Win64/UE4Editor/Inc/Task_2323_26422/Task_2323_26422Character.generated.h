// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALeverActor;
#ifdef TASK_2323_26422_Task_2323_26422Character_generated_h
#error "Task_2323_26422Character.generated.h already included, missing '#pragma once' in Task_2323_26422Character.h"
#endif
#define TASK_2323_26422_Task_2323_26422Character_generated_h

#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_SPARSE_DATA
#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_RPC_WRAPPERS \
	virtual void Multicast_ToggleLever_Implementation(ALeverActor* lev); \
	virtual bool Server_ToggleLever_Validate(ALeverActor* ); \
	virtual void Server_ToggleLever_Implementation(ALeverActor* lev); \
	virtual bool Server_SetUsername_Validate(const FString& ); \
	virtual void Server_SetUsername_Implementation(const FString& usrnam); \
 \
	DECLARE_FUNCTION(execMulticast_ToggleLever); \
	DECLARE_FUNCTION(execServer_ToggleLever); \
	DECLARE_FUNCTION(execOnRep_Name); \
	DECLARE_FUNCTION(execServer_SetUsername);


#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ToggleLever_Implementation(ALeverActor* lev); \
	virtual bool Server_ToggleLever_Validate(ALeverActor* ); \
	virtual void Server_ToggleLever_Implementation(ALeverActor* lev); \
	virtual bool Server_SetUsername_Validate(const FString& ); \
	virtual void Server_SetUsername_Implementation(const FString& usrnam); \
 \
	DECLARE_FUNCTION(execMulticast_ToggleLever); \
	DECLARE_FUNCTION(execServer_ToggleLever); \
	DECLARE_FUNCTION(execOnRep_Name); \
	DECLARE_FUNCTION(execServer_SetUsername);


#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_EVENT_PARMS \
	struct Task_2323_26422Character_eventMulticast_ToggleLever_Parms \
	{ \
		ALeverActor* lev; \
	}; \
	struct Task_2323_26422Character_eventServer_SetUsername_Parms \
	{ \
		FString usrnam; \
	}; \
	struct Task_2323_26422Character_eventServer_ToggleLever_Parms \
	{ \
		ALeverActor* lev; \
	};


#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_CALLBACK_WRAPPERS
#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATask_2323_26422Character(); \
	friend struct Z_Construct_UClass_ATask_2323_26422Character_Statics; \
public: \
	DECLARE_CLASS(ATask_2323_26422Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Task_2323_26422"), NO_API) \
	DECLARE_SERIALIZER(ATask_2323_26422Character) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		userName=NETFIELD_REP_START, \
		NETFIELD_REP_END=userName	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATask_2323_26422Character(); \
	friend struct Z_Construct_UClass_ATask_2323_26422Character_Statics; \
public: \
	DECLARE_CLASS(ATask_2323_26422Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Task_2323_26422"), NO_API) \
	DECLARE_SERIALIZER(ATask_2323_26422Character) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		userName=NETFIELD_REP_START, \
		NETFIELD_REP_END=userName	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATask_2323_26422Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATask_2323_26422Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATask_2323_26422Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATask_2323_26422Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATask_2323_26422Character(ATask_2323_26422Character&&); \
	NO_API ATask_2323_26422Character(const ATask_2323_26422Character&); \
public:


#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATask_2323_26422Character(ATask_2323_26422Character&&); \
	NO_API ATask_2323_26422Character(const ATask_2323_26422Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATask_2323_26422Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATask_2323_26422Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATask_2323_26422Character)


#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATask_2323_26422Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATask_2323_26422Character, FollowCamera); }


#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_9_PROLOG \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_EVENT_PARMS


#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_SPARSE_DATA \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_RPC_WRAPPERS \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_CALLBACK_WRAPPERS \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_INCLASS \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_SPARSE_DATA \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_CALLBACK_WRAPPERS \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_INCLASS_NO_PURE_DECLS \
	Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASK_2323_26422_API UClass* StaticClass<class ATask_2323_26422Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Task_2323_26422_Source_Task_2323_26422_Task_2323_26422Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
