// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuickPollRequest/Public/QuickPollDataRequestSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickPollDataRequestSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	QUICKPOLLREQUEST_API UClass* Z_Construct_UClass_UQuickPollDataRequestSubsystem();
	QUICKPOLLREQUEST_API UClass* Z_Construct_UClass_UQuickPollDataRequestSubsystem_NoRegister();
	QUICKPOLLREQUEST_API UFunction* Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature();
	QUICKPOLLREQUEST_API UScriptStruct* Z_Construct_UScriptStruct_FPoll();
	QUICKPOLLREQUEST_API UScriptStruct* Z_Construct_UScriptStruct_FPollOptions();
	QUICKPOLLREQUEST_API UScriptStruct* Z_Construct_UScriptStruct_FPollsOnServer();
	UPackage* Z_Construct_UPackage__Script_QuickPollRequest();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PollOptions;
class UScriptStruct* FPollOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PollOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PollOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPollOptions, (UObject*)Z_Construct_UPackage__Script_QuickPollRequest(), TEXT("PollOptions"));
	}
	return Z_Registration_Info_UScriptStruct_PollOptions.OuterSingleton;
}
template<> QUICKPOLLREQUEST_API UScriptStruct* StaticStruct<FPollOptions>()
{
	return FPollOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPollOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_votes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_votes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPollOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// JSON Structures Accessible In Blueprints\n" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
		{ "ToolTip", "JSON Structures Accessible In Blueprints" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPollOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPollOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_label_MetaData[] = {
		{ "Category", "PollOptions" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_label = { "label", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPollOptions, label), METADATA_PARAMS(Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_value_MetaData[] = {
		{ "Category", "PollOptions" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPollOptions, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_votes_MetaData[] = {
		{ "Category", "PollOptions" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_votes = { "votes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPollOptions, votes), METADATA_PARAMS(Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_votes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_votes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPollOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPollOptions_Statics::NewProp_votes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPollOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuickPollRequest,
		nullptr,
		&NewStructOps,
		"PollOptions",
		sizeof(FPollOptions),
		alignof(FPollOptions),
		Z_Construct_UScriptStruct_FPollOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPollOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPollOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPollOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPollOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_PollOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PollOptions.InnerSingleton, Z_Construct_UScriptStruct_FPollOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PollOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Poll;
class UScriptStruct* FPoll::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Poll.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Poll.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoll, (UObject*)Z_Construct_UPackage__Script_QuickPollRequest(), TEXT("Poll"));
	}
	return Z_Registration_Info_UScriptStruct_Poll.OuterSingleton;
}
template<> QUICKPOLLREQUEST_API UScriptStruct* StaticStruct<FPoll>()
{
	return FPoll::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desc_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_desc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoll_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoll_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoll>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoll_Statics::NewProp_title_MetaData[] = {
		{ "Category", "Poll" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPoll_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoll, title), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoll_Statics::NewProp_title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoll_Statics::NewProp_title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoll_Statics::NewProp_desc_MetaData[] = {
		{ "Category", "Poll" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPoll_Statics::NewProp_desc = { "desc", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoll, desc), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoll_Statics::NewProp_desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoll_Statics::NewProp_desc_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoll_Statics::NewProp_options_Inner = { "options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPollOptions, METADATA_PARAMS(nullptr, 0) }; // 602916568
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoll_Statics::NewProp_options_MetaData[] = {
		{ "Category", "Poll" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoll_Statics::NewProp_options = { "options", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoll, options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoll_Statics::NewProp_options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoll_Statics::NewProp_options_MetaData)) }; // 602916568
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoll_Statics::NewProp_title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoll_Statics::NewProp_desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoll_Statics::NewProp_options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoll_Statics::NewProp_options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoll_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuickPollRequest,
		nullptr,
		&NewStructOps,
		"Poll",
		sizeof(FPoll),
		alignof(FPoll),
		Z_Construct_UScriptStruct_FPoll_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoll_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoll_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoll_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoll()
	{
		if (!Z_Registration_Info_UScriptStruct_Poll.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Poll.InnerSingleton, Z_Construct_UScriptStruct_FPoll_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Poll.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PollsOnServer;
class UScriptStruct* FPollsOnServer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PollsOnServer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PollsOnServer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPollsOnServer, (UObject*)Z_Construct_UPackage__Script_QuickPollRequest(), TEXT("PollsOnServer"));
	}
	return Z_Registration_Info_UScriptStruct_PollsOnServer.OuterSingleton;
}
template<> QUICKPOLLREQUEST_API UScriptStruct* StaticStruct<FPollsOnServer>()
{
	return FPollsOnServer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPollsOnServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_polls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_polls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_polls;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPollsOnServer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPollsOnServer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPollsOnServer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPollsOnServer_Statics::NewProp_polls_Inner = { "polls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoll, METADATA_PARAMS(nullptr, 0) }; // 3466488503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPollsOnServer_Statics::NewProp_polls_MetaData[] = {
		{ "Category", "PollsOnServer" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPollsOnServer_Statics::NewProp_polls = { "polls", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPollsOnServer, polls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPollsOnServer_Statics::NewProp_polls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPollsOnServer_Statics::NewProp_polls_MetaData)) }; // 3466488503
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPollsOnServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPollsOnServer_Statics::NewProp_polls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPollsOnServer_Statics::NewProp_polls,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPollsOnServer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuickPollRequest,
		nullptr,
		&NewStructOps,
		"PollsOnServer",
		sizeof(FPollsOnServer),
		alignof(FPollsOnServer),
		Z_Construct_UScriptStruct_FPollsOnServer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPollsOnServer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPollsOnServer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPollsOnServer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPollsOnServer()
	{
		if (!Z_Registration_Info_UScriptStruct_PollsOnServer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PollsOnServer.InnerSingleton, Z_Construct_UScriptStruct_FPollsOnServer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PollsOnServer.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics
	{
		struct _Script_QuickPollRequest_eventOnReceivedQuickPollData_Parms
		{
			FPollsOnServer Results;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Results;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuickPollRequest_eventOnReceivedQuickPollData_Parms, Results), Z_Construct_UScriptStruct_FPollsOnServer, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::NewProp_Results_MetaData)) }; // 1927337057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Blueprint Event For Now To Let Us Know This Has Been Completed\n" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
		{ "ToolTip", "Blueprint Event For Now To Let Us Know This Has Been Completed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuickPollRequest, nullptr, "OnReceivedQuickPollData__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::_Script_QuickPollRequest_eventOnReceivedQuickPollData_Parms), Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReceivedQuickPollData_DelegateWrapper(const FMulticastScriptDelegate& OnReceivedQuickPollData, FPollsOnServer const& Results)
{
	struct _Script_QuickPollRequest_eventOnReceivedQuickPollData_Parms
	{
		FPollsOnServer Results;
	};
	_Script_QuickPollRequest_eventOnReceivedQuickPollData_Parms Parms;
	Parms.Results=Results;
	OnReceivedQuickPollData.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UQuickPollDataRequestSubsystem::execGetVotesForPollAndCategory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PollName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PollOption);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVotesForPollAndCategory(Z_Param_PollName,Z_Param_PollOption,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuickPollDataRequestSubsystem::execGetPollByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PollName);
		P_GET_STRUCT_REF(FPoll,Z_Param_Out_Poll);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPollByName(Z_Param_PollName,Z_Param_Out_Poll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuickPollDataRequestSubsystem::execRequestPollData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PollName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPollData(Z_Param_PollName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuickPollDataRequestSubsystem::execOverrideServerEndpointConnection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewServerEndpoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverrideServerEndpointConnection(Z_Param_NewServerEndpoint);
		P_NATIVE_END;
	}
	void UQuickPollDataRequestSubsystem::StaticRegisterNativesUQuickPollDataRequestSubsystem()
	{
		UClass* Class = UQuickPollDataRequestSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPollByName", &UQuickPollDataRequestSubsystem::execGetPollByName },
			{ "GetVotesForPollAndCategory", &UQuickPollDataRequestSubsystem::execGetVotesForPollAndCategory },
			{ "OverrideServerEndpointConnection", &UQuickPollDataRequestSubsystem::execOverrideServerEndpointConnection },
			{ "RequestPollData", &UQuickPollDataRequestSubsystem::execRequestPollData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics
	{
		struct QuickPollDataRequestSubsystem_eventGetPollByName_Parms
		{
			FString PollName;
			FPoll Poll;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PollName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PollName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Poll;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::NewProp_PollName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::NewProp_PollName = { "PollName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuickPollDataRequestSubsystem_eventGetPollByName_Parms, PollName), METADATA_PARAMS(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::NewProp_PollName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::NewProp_PollName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::NewProp_Poll = { "Poll", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuickPollDataRequestSubsystem_eventGetPollByName_Parms, Poll), Z_Construct_UScriptStruct_FPoll, METADATA_PARAMS(nullptr, 0) }; // 3466488503
	void Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuickPollDataRequestSubsystem_eventGetPollByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuickPollDataRequestSubsystem_eventGetPollByName_Parms), &Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::NewProp_PollName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::NewProp_Poll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickPollDataRequestSubsystem, nullptr, "GetPollByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::QuickPollDataRequestSubsystem_eventGetPollByName_Parms), Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics
	{
		struct QuickPollDataRequestSubsystem_eventGetVotesForPollAndCategory_Parms
		{
			FString PollName;
			FString PollOption;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PollName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PollName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PollOption_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PollOption;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_PollName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_PollName = { "PollName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuickPollDataRequestSubsystem_eventGetVotesForPollAndCategory_Parms, PollName), METADATA_PARAMS(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_PollName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_PollName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_PollOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_PollOption = { "PollOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuickPollDataRequestSubsystem_eventGetVotesForPollAndCategory_Parms, PollOption), METADATA_PARAMS(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_PollOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_PollOption_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuickPollDataRequestSubsystem_eventGetVotesForPollAndCategory_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuickPollDataRequestSubsystem_eventGetVotesForPollAndCategory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QuickPollDataRequestSubsystem_eventGetVotesForPollAndCategory_Parms), &Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_PollName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_PollOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickPollDataRequestSubsystem, nullptr, "GetVotesForPollAndCategory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::QuickPollDataRequestSubsystem_eventGetVotesForPollAndCategory_Parms), Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics
	{
		struct QuickPollDataRequestSubsystem_eventOverrideServerEndpointConnection_Parms
		{
			FString NewServerEndpoint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewServerEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewServerEndpoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::NewProp_NewServerEndpoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::NewProp_NewServerEndpoint = { "NewServerEndpoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuickPollDataRequestSubsystem_eventOverrideServerEndpointConnection_Parms, NewServerEndpoint), METADATA_PARAMS(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::NewProp_NewServerEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::NewProp_NewServerEndpoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::NewProp_NewServerEndpoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickPollDataRequestSubsystem, nullptr, "OverrideServerEndpointConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::QuickPollDataRequestSubsystem_eventOverrideServerEndpointConnection_Parms), Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics
	{
		struct QuickPollDataRequestSubsystem_eventRequestPollData_Parms
		{
			FString PollName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PollName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PollName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::NewProp_PollName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::NewProp_PollName = { "PollName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuickPollDataRequestSubsystem_eventRequestPollData_Parms, PollName), METADATA_PARAMS(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::NewProp_PollName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::NewProp_PollName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::NewProp_PollName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_PollName", "/api/polls" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickPollDataRequestSubsystem, nullptr, "RequestPollData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::QuickPollDataRequestSubsystem_eventRequestPollData_Parms), Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuickPollDataRequestSubsystem);
	UClass* Z_Construct_UClass_UQuickPollDataRequestSubsystem_NoRegister()
	{
		return UQuickPollDataRequestSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReceivedQuickPollDataEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceivedQuickPollDataEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerEndpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatestResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatestResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_QuickPollRequest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetPollByName, "GetPollByName" }, // 1881209585
		{ &Z_Construct_UFunction_UQuickPollDataRequestSubsystem_GetVotesForPollAndCategory, "GetVotesForPollAndCategory" }, // 3233117003
		{ &Z_Construct_UFunction_UQuickPollDataRequestSubsystem_OverrideServerEndpointConnection, "OverrideServerEndpointConnection" }, // 323117536
		{ &Z_Construct_UFunction_UQuickPollDataRequestSubsystem_RequestPollData, "RequestPollData" }, // 1395547950
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuickPollDataRequestSubsystem.h" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_OnReceivedQuickPollDataEvent_MetaData[] = {
		{ "Comment", "// Events\n" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
		{ "ToolTip", "Events" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_OnReceivedQuickPollDataEvent = { "OnReceivedQuickPollDataEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuickPollDataRequestSubsystem, OnReceivedQuickPollDataEvent), Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_OnReceivedQuickPollDataEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_OnReceivedQuickPollDataEvent_MetaData)) }; // 3309021619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_ServerEndpoint_MetaData[] = {
		{ "Comment", "// Config Variables\n" },
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
		{ "ToolTip", "Config Variables" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_ServerEndpoint = { "ServerEndpoint", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuickPollDataRequestSubsystem, ServerEndpoint), METADATA_PARAMS(Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_ServerEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_ServerEndpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_LatestResults_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuickPollDataRequestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_LatestResults = { "LatestResults", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuickPollDataRequestSubsystem, LatestResults), Z_Construct_UScriptStruct_FPollsOnServer, METADATA_PARAMS(Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_LatestResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_LatestResults_MetaData)) }; // 1927337057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_OnReceivedQuickPollDataEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_ServerEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::NewProp_LatestResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickPollDataRequestSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::ClassParams = {
		&UQuickPollDataRequestSubsystem::StaticClass,
		"QuickPollDataRequestSubsystem",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuickPollDataRequestSubsystem()
	{
		if (!Z_Registration_Info_UClass_UQuickPollDataRequestSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuickPollDataRequestSubsystem.OuterSingleton, Z_Construct_UClass_UQuickPollDataRequestSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuickPollDataRequestSubsystem.OuterSingleton;
	}
	template<> QUICKPOLLREQUEST_API UClass* StaticClass<UQuickPollDataRequestSubsystem>()
	{
		return UQuickPollDataRequestSubsystem::StaticClass();
	}
	UQuickPollDataRequestSubsystem::UQuickPollDataRequestSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickPollDataRequestSubsystem);
	UQuickPollDataRequestSubsystem::~UQuickPollDataRequestSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FPollOptions::StaticStruct, Z_Construct_UScriptStruct_FPollOptions_Statics::NewStructOps, TEXT("PollOptions"), &Z_Registration_Info_UScriptStruct_PollOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPollOptions), 602916568U) },
		{ FPoll::StaticStruct, Z_Construct_UScriptStruct_FPoll_Statics::NewStructOps, TEXT("Poll"), &Z_Registration_Info_UScriptStruct_Poll, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoll), 3466488503U) },
		{ FPollsOnServer::StaticStruct, Z_Construct_UScriptStruct_FPollsOnServer_Statics::NewStructOps, TEXT("PollsOnServer"), &Z_Registration_Info_UScriptStruct_PollsOnServer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPollsOnServer), 1927337057U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuickPollDataRequestSubsystem, UQuickPollDataRequestSubsystem::StaticClass, TEXT("UQuickPollDataRequestSubsystem"), &Z_Registration_Info_UClass_UQuickPollDataRequestSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuickPollDataRequestSubsystem), 1669733847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_3749912218(TEXT("/Script/QuickPollRequest"),
		Z_CompiledInDeferFile_FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Leonor_Documents_GitHub_Project_1__Plugins_QuickPollRequest_Source_QuickPollRequest_Public_QuickPollDataRequestSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
