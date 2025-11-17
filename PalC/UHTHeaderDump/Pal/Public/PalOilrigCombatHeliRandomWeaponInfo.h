#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigCombatHeliWeaponType.h"
#include "PalOilrigCombatHeliRandomWeaponInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalOilrigCombatHeliRandomWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalOilrigCombatHeliWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Weight;
    
    PAL_API FPalOilrigCombatHeliRandomWeaponInfo();
};

