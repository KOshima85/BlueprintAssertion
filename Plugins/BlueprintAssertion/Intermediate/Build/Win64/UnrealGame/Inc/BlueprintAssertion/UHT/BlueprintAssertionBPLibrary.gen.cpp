// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssertionBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlueprintAssertionBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTASSERTION_API UClass* Z_Construct_UClass_UBlueprintAssertionBPLibrary();
BLUEPRINTASSERTION_API UClass* Z_Construct_UClass_UBlueprintAssertionBPLibrary_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BlueprintAssertion();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBlueprintAssertionBPLibrary Function Assert *****************************
struct Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics
{
	struct BlueprintAssertionBPLibrary_eventAssert_Parms
	{
		UObject* WorldContextObject;
		bool bCondition;
		FText Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/BlueprintAssertionBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_bCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCondition;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintAssertionBPLibrary_eventAssert_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::NewProp_bCondition_SetBit(void* Obj)
{
	((BlueprintAssertionBPLibrary_eventAssert_Parms*)Obj)->bCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintAssertionBPLibrary_eventAssert_Parms), &Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintAssertionBPLibrary_eventAssert_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::NewProp_bCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlueprintAssertionBPLibrary, nullptr, "Assert", Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::BlueprintAssertionBPLibrary_eventAssert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::BlueprintAssertionBPLibrary_eventAssert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintAssertionBPLibrary::execAssert)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_bCondition);
	P_GET_PROPERTY(FTextProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintAssertionBPLibrary::Assert(Z_Param_WorldContextObject,Z_Param_bCondition,Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UBlueprintAssertionBPLibrary Function Assert *******************************

// ********** Begin Class UBlueprintAssertionBPLibrary *********************************************
void UBlueprintAssertionBPLibrary::StaticRegisterNativesUBlueprintAssertionBPLibrary()
{
	UClass* Class = UBlueprintAssertionBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Assert", &UBlueprintAssertionBPLibrary::execAssert },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBlueprintAssertionBPLibrary;
UClass* UBlueprintAssertionBPLibrary::GetPrivateStaticClass()
{
	using TClass = UBlueprintAssertionBPLibrary;
	if (!Z_Registration_Info_UClass_UBlueprintAssertionBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlueprintAssertionBPLibrary"),
			Z_Registration_Info_UClass_UBlueprintAssertionBPLibrary.InnerSingleton,
			StaticRegisterNativesUBlueprintAssertionBPLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBlueprintAssertionBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlueprintAssertionBPLibrary_NoRegister()
{
	return UBlueprintAssertionBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlueprintAssertionBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssertionBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BlueprintAssertionBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintAssertionBPLibrary_Assert, "Assert" }, // 371181030
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintAssertionBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintAssertionBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssertion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintAssertionBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintAssertionBPLibrary_Statics::ClassParams = {
	&UBlueprintAssertionBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintAssertionBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintAssertionBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintAssertionBPLibrary()
{
	if (!Z_Registration_Info_UClass_UBlueprintAssertionBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintAssertionBPLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintAssertionBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintAssertionBPLibrary.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintAssertionBPLibrary);
UBlueprintAssertionBPLibrary::~UBlueprintAssertionBPLibrary() {}
// ********** End Class UBlueprintAssertionBPLibrary ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_Repositories_BPAssertion_BlueprintAssertion_BlueprintAssertion_HostProject_Plugins_BlueprintAssertion_Source_BlueprintAssertion_Public_BlueprintAssertionBPLibrary_h__Script_BlueprintAssertion_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintAssertionBPLibrary, UBlueprintAssertionBPLibrary::StaticClass, TEXT("UBlueprintAssertionBPLibrary"), &Z_Registration_Info_UClass_UBlueprintAssertionBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintAssertionBPLibrary), 3806410369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Repositories_BPAssertion_BlueprintAssertion_BlueprintAssertion_HostProject_Plugins_BlueprintAssertion_Source_BlueprintAssertion_Public_BlueprintAssertionBPLibrary_h__Script_BlueprintAssertion_2147677728(TEXT("/Script/BlueprintAssertion"),
	Z_CompiledInDeferFile_FID_Project_Repositories_BPAssertion_BlueprintAssertion_BlueprintAssertion_HostProject_Plugins_BlueprintAssertion_Source_BlueprintAssertion_Public_BlueprintAssertionBPLibrary_h__Script_BlueprintAssertion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Repositories_BPAssertion_BlueprintAssertion_BlueprintAssertion_HostProject_Plugins_BlueprintAssertion_Source_BlueprintAssertion_Public_BlueprintAssertionBPLibrary_h__Script_BlueprintAssertion_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
