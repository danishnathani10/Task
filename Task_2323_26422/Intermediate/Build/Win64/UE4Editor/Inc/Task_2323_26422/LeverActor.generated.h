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
struct FHitResult;
#ifdef TASK_2323_26422_LeverActor_generated_h
#error "LeverActor.generated.h already included, missing '#pragma once' in LeverActor.h"
#endif
#define TASK_2323_26422_LeverActor_generated_h

#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_SPARSE_DATA
#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTimelineFinishedCallback); \
	DECLARE_FUNCTION(execTimelineUpdateCallback); \
	DECLARE_FUNCTION(execLeverToggle); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTimelineFinishedCallback); \
	DECLARE_FUNCTION(execTimelineUpdateCallback); \
	DECLARE_FUNCTION(execLeverToggle); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_EVENT_PARMS \
	struct LeverActor_eventOverlapping_Parms \
	{ \
		bool isOverlaped; \
		AActor* otherActor; \
	};


#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_CALLBACK_WRAPPERS
#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALeverActor(); \
	friend struct Z_Construct_UClass_ALeverActor_Statics; \
public: \
	DECLARE_CLASS(ALeverActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Task_2323_26422"), NO_API) \
	DECLARE_SERIALIZER(ALeverActor)


#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALeverActor(); \
	friend struct Z_Construct_UClass_ALeverActor_Statics; \
public: \
	DECLARE_CLASS(ALeverActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Task_2323_26422"), NO_API) \
	DECLARE_SERIALIZER(ALeverActor)


#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALeverActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALeverActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALeverActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALeverActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALeverActor(ALeverActor&&); \
	NO_API ALeverActor(const ALeverActor&); \
public:


#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALeverActor(ALeverActor&&); \
	NO_API ALeverActor(const ALeverActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALeverActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALeverActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALeverActor)


#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_PRIVATE_PROPERTY_OFFSET
#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_12_PROLOG \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_EVENT_PARMS


#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_SPARSE_DATA \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_RPC_WRAPPERS \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_CALLBACK_WRAPPERS \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_INCLASS \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_SPARSE_DATA \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_CALLBACK_WRAPPERS \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_INCLASS_NO_PURE_DECLS \
	Task_2323_26422_Source_Task_2323_26422_LeverActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASK_2323_26422_API UClass* StaticClass<class ALeverActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Task_2323_26422_Source_Task_2323_26422_LeverActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
