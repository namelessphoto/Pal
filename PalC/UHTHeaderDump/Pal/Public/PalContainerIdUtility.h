#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalContainerId.h"
#include "PalContainerIdUtility.generated.h"

UCLASS(BlueprintType)
class UPalContainerIdUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalContainerIdUtility();

    UFUNCTION(BlueprintPure)
    static FPalContainerId NoneContainerId();
    
    UFUNCTION(BlueprintPure)
    static bool IsNoneContainerId(const FPalContainerId& ContainerId);
    
    UFUNCTION(BlueprintPure)
    static bool BP_NotEqual(const FPalContainerId& A, const FPalContainerId& B);
    
    UFUNCTION(BlueprintPure)
    static bool BP_Equal(const FPalContainerId& A, const FPalContainerId& B);
    
};

