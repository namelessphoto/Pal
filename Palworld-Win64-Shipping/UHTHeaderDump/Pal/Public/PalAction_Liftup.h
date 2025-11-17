#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalAction_Liftup.generated.h"

class APalCharacter;

UCLASS()
class UPalAction_Liftup : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float AttachRelativeLocationOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsAttachToLeftHand;
    
public:
    UPalAction_Liftup();

protected:
    UFUNCTION(BlueprintCallable)
    void StartRagdollForTargetCharacter();
    
    UFUNCTION(BlueprintCallable)
    void StartInterpTransformForAttachCharacter();
    
    UFUNCTION(BlueprintCallable)
    void PlayWeaponChangeAnime();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayTargetBeLiftupAction(APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayStartLiftupMontage();
    
    UFUNCTION()
    void OnTriggerPlayerInteract();
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteStartLiftupMontage();
    
    UFUNCTION(BlueprintCallable)
    void AttachLiftedCharacter();
    
};

