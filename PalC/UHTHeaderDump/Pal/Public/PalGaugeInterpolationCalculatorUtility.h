#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalGaugeInterpolationCalculator.h"
#include "PalGaugeInterpolationCalculatorUtility.generated.h"

class UObject;

UCLASS(BlueprintType)
class UPalGaugeInterpolationCalculatorUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalGaugeInterpolationCalculatorUtility();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TickGaugeInterpolation(const UObject* WorldContextObject, UPARAM(Ref) FPalGaugeInterpolationCalculator& Target, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetGaugeInterpolationTargetValue(UPARAM(Ref) FPalGaugeInterpolationCalculator& Target, const float TargetValue);
    
};

