#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalEquipWeaponInfo.generated.h"

class APalMonsterEquipWeaponBase;

USTRUCT(BlueprintType)
struct FPalEquipWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FPalContainerId ContainerId;
    
    UPROPERTY(Transient)
    APalMonsterEquipWeaponBase* SpawnedWeapon;
    
    PAL_API FPalEquipWeaponInfo();
};

