#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalAction_LiftupThrow.generated.h"

UCLASS()
class PAL_API UPalAction_LiftupThrow : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float AttachRelativeLocationOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsAttachToLeftHand;
    
public:
    UPalAction_LiftupThrow();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayWeaponChangeAnime();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayPlayerThrowMontage();
    
    UFUNCTION(BlueprintCallable)
    void LaunchLiftObject();
    
};

