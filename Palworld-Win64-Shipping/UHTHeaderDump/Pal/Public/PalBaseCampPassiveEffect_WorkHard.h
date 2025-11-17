#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampPassiveEffectWorkHardType.h"
#include "PalBaseCampModulePassiveEffectWorkSpeedApplierInterface.h"
#include "PalBaseCampPassiveEffectBase.h"
#include "PalBaseCampPassiveEffect_WorkHard.generated.h"

class UPalBaseCampPassiveEffect_WorkHard;

UCLASS(BlueprintType)
class UPalBaseCampPassiveEffect_WorkHard : public UPalBaseCampPassiveEffectBase, public IPalBaseCampModulePassiveEffectWorkSpeedApplierInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalBaseCampPassiveEffect_WorkHard*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdateWorkHardTypeDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_WorkHardType)
    EPalBaseCampPassiveEffectWorkHardType WorkHardType;
    
public:
    UPalBaseCampPassiveEffect_WorkHard();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_WorkHardType();
    
public:
    UFUNCTION(BlueprintPure)
    EPalBaseCampPassiveEffectWorkHardType GetWorkHardType() const;
    

    // Fix for true pure virtual functions not being implemented
};

