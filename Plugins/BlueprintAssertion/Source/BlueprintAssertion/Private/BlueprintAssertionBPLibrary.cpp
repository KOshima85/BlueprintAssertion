// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlueprintAssertionBPLibrary.h"
#include "BlueprintAssertion.h"
#include "Blueprint/BlueprintExceptionInfo.h"

UBlueprintAssertionBPLibrary::UBlueprintAssertionBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UBlueprintAssertionBPLibrary::Assert(UObject* WorldContextObject, bool bCondition, FText Message)
{
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) || USE_LOGGING_IN_SHIPPING
	if (!bCondition)
	{
		FFrame& StackFrame = *(FBlueprintContextTracker::Get().GetCurrentScriptStackWritable().Last());
		UE_LOG(LogTemp, Error, TEXT("%s"), *Message.ToString());
		UE_LOG(LogTemp, Error, TEXT("%s"), *StackFrame.GetStackTrace());

		FBlueprintExceptionInfo BreakpointExceptionInfo(EBlueprintExceptionType::NonFatalError);
		FBlueprintCoreDelegates::ThrowScriptException(
			WorldContextObject,
			StackFrame,
			BreakpointExceptionInfo);
	}
#endif
}
