#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDungeonInfoParameter.h"
#include "PalDungeonInfoParameterUtility.generated.h"

UCLASS(BlueprintType)
class UPalDungeonInfoParameterUtility : public UObject {
    GENERATED_BODY()
public:
    UPalDungeonInfoParameterUtility();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcDisappearRemainSeconds(const UObject* WorldContextObject, const FPalDungeonInfoParameter& InParameter);
    
};

