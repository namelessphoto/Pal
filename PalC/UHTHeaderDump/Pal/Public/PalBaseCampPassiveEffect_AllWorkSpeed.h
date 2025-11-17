#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampModulePassiveEffectWorkSpeedApplierInterface.h"
#include "PalBaseCampPassiveEffectBase.h"
#include "PalBaseCampPassiveEffect_AllWorkSpeed.generated.h"

UCLASS()
class UPalBaseCampPassiveEffect_AllWorkSpeed : public UPalBaseCampPassiveEffectBase, public IPalBaseCampModulePassiveEffectWorkSpeedApplierInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float WorkSpeedAdditionalRate;
    
public:
    UPalBaseCampPassiveEffect_AllWorkSpeed();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

