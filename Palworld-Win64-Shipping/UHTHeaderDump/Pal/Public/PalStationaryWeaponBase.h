#pragma once
#include "CoreMinimal.h"
#include "PalWeaponBase.h"
#include "PalStationaryWeaponBase.generated.h"

UCLASS()
class PAL_API APalStationaryWeaponBase : public APalWeaponBase {
    GENERATED_BODY()
public:
    APalStationaryWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float GetAttackableDistance() const;
    
};

