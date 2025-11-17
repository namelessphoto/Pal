#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectSwitchState.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectSwitchModule.generated.h"

class UPalMapObjectSwitchModule;

UCLASS(BlueprintType)
class PAL_API UPalMapObjectSwitchModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalMapObjectSwitchModule*, Module);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMulticastDelegate OnUpdateSwitchStateDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_SwitchState)
    EPalMapObjectSwitchState SwitchState;
    
public:
    UPalMapObjectSwitchModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_SwitchState();
    
public:
    UFUNCTION(BlueprintPure)
    EPalMapObjectSwitchState GetSwitchState() const;
    
};

