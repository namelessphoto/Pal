#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampModuleObjectMaintenance_WayBase.h"
#include "PalBaseCampModuleObjectMaintenance_ExtinguishFire.generated.h"

class UPalMapObjectModel;
class UPalMapObjectModelEffect_AccumulateTrigger;

UCLASS()
class PAL_API UPalBaseCampModuleObjectMaintenance_ExtinguishFire : public UPalBaseCampModuleObjectMaintenance_WayBase {
    GENERATED_BODY()
public:
    UPalBaseCampModuleObjectMaintenance_ExtinguishFire();

private:
    UFUNCTION()
    void OnTriggerByReachAccumulateTriggerValue(UPalMapObjectModelEffect_AccumulateTrigger* Effect_AccumulateTrigger, UPalMapObjectModel* OwnerModel);
    
};

