#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalBaseCampModulePassiveEffectWorkSpeedApplierInterface.h"
#include "PalBaseCampPassiveEffectBase.h"
#include "PalBaseCampPassiveEffect_WorkSuitability.generated.h"

UCLASS()
class UPalBaseCampPassiveEffect_WorkSuitability : public UPalBaseCampPassiveEffectBase, public IPalBaseCampModulePassiveEffectWorkSpeedApplierInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalWorkSuitability, float> WorkSpeedAdditionalRateMap;
    
public:
    UPalBaseCampPassiveEffect_WorkSuitability();


    // Fix for true pure virtual functions not being implemented
};

