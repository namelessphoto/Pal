#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalFastBaseCampPassiveEffectRepInfoArray.h"
#include "PalBaseCampModulePassiveEffect.generated.h"

class UPalBaseCampModulePassiveEffect;
class UPalMapObjectConcreteModelBase;

UCLASS()
class PAL_API UPalBaseCampModulePassiveEffect : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalBaseCampModulePassiveEffect*, Module);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnChangePassiveSkillEffectDelegate;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalFastBaseCampPassiveEffectRepInfoArray RepInfoArray;
    
public:
    UPalBaseCampModulePassiveEffect();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnNotAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* Model);
    
    UFUNCTION()
    void OnAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* Model);
    
};

