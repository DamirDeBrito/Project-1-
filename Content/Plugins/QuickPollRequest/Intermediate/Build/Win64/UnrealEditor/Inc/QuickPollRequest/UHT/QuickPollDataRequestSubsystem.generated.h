// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuickPollDataRequestSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPoll;
struct FPollsOnServer;
#ifdef QUICKPOLLREQUEST_QuickPollDataRequestSubsystem_generated_h
#error "QuickPollDataRequestSubsystem.generated.h already included, missing '#pragma once' in QuickPollDataRequestSubsystem.h"
#endif
#define QUICKPOLLREQUEST_QuickPollDataRequestSubsystem_generated_h

#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPollOptions_Statics; \
	QUICKPOLLREQUEST_API static class UScriptStruct* StaticStruct();


template<> QUICKPOLLREQUEST_API UScriptStruct* StaticStruct<struct FPollOptions>();

#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoll_Statics; \
	QUICKPOLLREQUEST_API static class UScriptStruct* StaticStruct();


template<> QUICKPOLLREQUEST_API UScriptStruct* StaticStruct<struct FPoll>();

#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPollsOnServer_Statics; \
	QUICKPOLLREQUEST_API static class UScriptStruct* StaticStruct();


template<> QUICKPOLLREQUEST_API UScriptStruct* StaticStruct<struct FPollsOnServer>();

#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_50_DELEGATE \
QUICKPOLLREQUEST_API void FOnReceivedQuickPollData_DelegateWrapper(const FMulticastScriptDelegate& OnReceivedQuickPollData, FPollsOnServer const& Results);


#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_SPARSE_DATA
#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVotesForPollAndCategory); \
	DECLARE_FUNCTION(execGetPollByName); \
	DECLARE_FUNCTION(execRequestPollData); \
	DECLARE_FUNCTION(execOverrideServerEndpointConnection);


#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVotesForPollAndCategory); \
	DECLARE_FUNCTION(execGetPollByName); \
	DECLARE_FUNCTION(execRequestPollData); \
	DECLARE_FUNCTION(execOverrideServerEndpointConnection);


#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_ACCESSORS
#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuickPollDataRequestSubsystem(); \
	friend struct Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics; \
public: \
	DECLARE_CLASS(UQuickPollDataRequestSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuickPollRequest"), NO_API) \
	DECLARE_SERIALIZER(UQuickPollDataRequestSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("QuickPollDataRequestSubsystem");} \



#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUQuickPollDataRequestSubsystem(); \
	friend struct Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics; \
public: \
	DECLARE_CLASS(UQuickPollDataRequestSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuickPollRequest"), NO_API) \
	DECLARE_SERIALIZER(UQuickPollDataRequestSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("QuickPollDataRequestSubsystem");} \



#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuickPollDataRequestSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuickPollDataRequestSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuickPollDataRequestSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuickPollDataRequestSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuickPollDataRequestSubsystem(UQuickPollDataRequestSubsystem&&); \
	NO_API UQuickPollDataRequestSubsystem(const UQuickPollDataRequestSubsystem&); \
public: \
	NO_API virtual ~UQuickPollDataRequestSubsystem();


#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuickPollDataRequestSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuickPollDataRequestSubsystem(UQuickPollDataRequestSubsystem&&); \
	NO_API UQuickPollDataRequestSubsystem(const UQuickPollDataRequestSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuickPollDataRequestSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuickPollDataRequestSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuickPollDataRequestSubsystem) \
	NO_API virtual ~UQuickPollDataRequestSubsystem();


#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_52_PROLOG
#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_SPARSE_DATA \
	FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_RPC_WRAPPERS \
	FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_ACCESSORS \
	FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_INCLASS \
	FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_SPARSE_DATA \
	FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_ACCESSORS \
	FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_INCLASS_NO_PURE_DECLS \
	FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUICKPOLLREQUEST_API UClass* StaticClass<class UQuickPollDataRequestSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
