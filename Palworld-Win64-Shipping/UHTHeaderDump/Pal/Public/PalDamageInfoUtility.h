#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalSpecialAttackRateType.h"
#include "PalDamageInfo.h"
#include "PalDamageInfoUtility.generated.h"

UCLASS(BlueprintType)
class UPalDamageInfoUtility : public UObject {
    GENERATED_BODY()
public:
    UPalDamageInfoUtility();

    UFUNCTION(BlueprintPure)
    static float GetSpecialAttackRate(const FPalDamageInfo& DamageInfo, const EPalSpecialAttackRateType Type);
    
};

