#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalMathBlueprintFunction.generated.h"

UCLASS(BlueprintType)
class UPalMathBlueprintFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMathBlueprintFunction();

    UFUNCTION(BlueprintPure)
    static FVector ClampVectorElement(const FVector& InValue, const FVector& Min, const FVector& Max);
    
};

