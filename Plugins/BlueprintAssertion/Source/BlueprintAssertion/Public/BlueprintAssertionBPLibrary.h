// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintAssertionBPLibrary.generated.h"

UCLASS()
class UBlueprintAssertionBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DevelopmentOnly), Category="Editor" )
	static void Assert(UObject* WorldContextObject, bool bCondition, FText Message);

};
