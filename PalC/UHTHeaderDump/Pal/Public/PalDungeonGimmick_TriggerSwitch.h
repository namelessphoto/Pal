#pragma once
#include "CoreMinimal.h"
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmick_TriggerSwitch.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;

UCLASS()
class PAL_API APalDungeonGimmick_TriggerSwitch : public APalDungeonLevelGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractComp;
    
    UPROPERTY(EditAnywhere)
    float TriggerCooldownInterval;
    
    UPROPERTY(EditAnywhere)
    bool bDetectPlayerOnly;
    
    UPROPERTY()
    TSet<AActor*> InteractingActors;
    
public:
    APalDungeonGimmick_TriggerSwitch(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION()
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
};

