#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptTypedElementHandle.h"
#include "TypedElementHandleLibrary.generated.h"

UCLASS(BlueprintType)
class UTypedElementHandleLibrary : public UObject {
    GENERATED_BODY()
public:
    UTypedElementHandleLibrary();

    UFUNCTION(BlueprintCallable)
    static void Release(UPARAM(Ref) FScriptTypedElementHandle& ElementHandle);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual(const FScriptTypedElementHandle& LHS, const FScriptTypedElementHandle& RHS);
    
    UFUNCTION(BlueprintPure)
    static bool IsSet(const FScriptTypedElementHandle& ElementHandle);
    
    UFUNCTION(BlueprintPure)
    static bool Equal(const FScriptTypedElementHandle& LHS, const FScriptTypedElementHandle& RHS);
    
};

