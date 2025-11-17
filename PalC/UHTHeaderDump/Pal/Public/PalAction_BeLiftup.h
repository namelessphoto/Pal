#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalDeadInfo.h"
#include "PalAction_BeLiftup.generated.h"

UCLASS()
class UPalAction_BeLiftup : public UPalActionBase {
    GENERATED_BODY()
public:
    UPalAction_BeLiftup();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartLifting();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartInterpTransform();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndInterpTransform();
    
private:
    UFUNCTION()
    void OnDeadOwner_ServerInternal(FPalDeadInfo DeadInfo);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttachedForBP();
    
};

