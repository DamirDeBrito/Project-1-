// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickPollRequest_init() {}
	QUICKPOLLREQUEST_API UFunction* Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_QuickPollRequest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_QuickPollRequest()
	{
		if (!Z_Registration_Info_UPackage__Script_QuickPollRequest.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_QuickPollRequest_OnReceivedQuickPollData__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/QuickPollRequest",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFA3A91FB,
				0xB91A0F8B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_QuickPollRequest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_QuickPollRequest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_QuickPollRequest(Z_Construct_UPackage__Script_QuickPollRequest, TEXT("/Script/QuickPollRequest"), Z_Registration_Info_UPackage__Script_QuickPollRequest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFA3A91FB, 0xB91A0F8B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
