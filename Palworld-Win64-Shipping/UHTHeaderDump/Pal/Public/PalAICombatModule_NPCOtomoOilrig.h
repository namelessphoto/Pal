#pragma once
#include "CoreMinimal.h"
#include "PalAICombatModule_Wild.h"
#include "PalAICombatModule_NPCOtomoOilrig.generated.h"

UCLASS()
class PAL_API UPalAICombatModule_NPCOtomoOilrig : public UPalAICombatModule_Wild {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float CanTargetRange;
    
public:
    UPalAICombatModule_NPCOtomoOilrig();

};

