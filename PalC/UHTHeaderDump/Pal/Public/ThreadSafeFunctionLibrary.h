#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ThreadSafeBoolean.h"
#include "ThreadSafeInt32.h"
#include "ThreadSafeFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class PAL_API UThreadSafeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UThreadSafeFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetThreadSafeInt32(FThreadSafeInt32& ThreadSafeInt, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetThreadSafeBoolean(FThreadSafeBoolean& ThreadSafeBool, bool Value);
    
    UFUNCTION(BlueprintPure)
    static int32 GetThreadSafeInt32(const FThreadSafeInt32& ThreadSafeInt);
    
    UFUNCTION(BlueprintPure)
    static bool GetThreadSafeBoolean(const FThreadSafeBoolean& ThreadSafeBool);
    
};

