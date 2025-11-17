#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalWorkUtility.generated.h"

class UPalWorkBase;

UCLASS(BlueprintType)
class UPalWorkUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalWorkUtility();

    UFUNCTION(BlueprintPure)
    static bool BP_TryGetWorkLocation(const UPalWorkBase* Target, FVector& OutLocation);
    
    UFUNCTION(BlueprintPure)
    static FVector BP_GetWorkLocation(const UPalWorkBase* Target);
    
};

