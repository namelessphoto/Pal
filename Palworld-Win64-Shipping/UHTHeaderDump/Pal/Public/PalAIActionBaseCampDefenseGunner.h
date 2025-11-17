#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBaseCampDefenseBase.h"
#include "PalAIActionBaseCampDefenseGunner.generated.h"

UCLASS(EditInlineNew)
class UPalAIActionBaseCampDefenseGunner : public UPalAIActionBaseCampDefenseBase {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampDefenseGunner();

private:
    UFUNCTION()
    void StopTrigger();
    
    UFUNCTION()
    void OnShootBullet();
    
};

