#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalAction_FeedItemToCharacter.generated.h"

class UPalAIActionFed;

UCLASS()
class UPalAction_FeedItemToCharacter : public UPalActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FSimpleDelegate);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float TurnSpeed;
    
private:
    UPROPERTY()
    UPalAIActionFed* TargetCharacterAction;
    
public:
    UPalAction_FeedItemToCharacter();

private:
    UFUNCTION()
    void TimeoutStartTargetCharacterApproachAction();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMontageFeeding();
    
    UFUNCTION(BlueprintCallable)
    void OnNotifiedMontage_OnReachFeeding();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishPlayMontageFeeding();
    
private:
    UFUNCTION()
    void OnCancelByInputGuard();
    
};

