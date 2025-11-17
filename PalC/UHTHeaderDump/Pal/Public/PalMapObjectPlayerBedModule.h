#pragma once
#include "CoreMinimal.h"
#include "PalDamageResult.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectPlayerBedModule.generated.h"

class APalCharacter;
class UPalActionBase;

UCLASS()
class PAL_API UPalMapObjectPlayerBedModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    APalCharacter* SleepingCharacter;
    
public:
    UPalMapObjectPlayerBedModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestTriggerSleepPlayerBed_ToServer(const int32 RequestPlayerId);
    
    UFUNCTION()
    void RequestTriggerGetupPlayerBed_ToServer(const int32 TargetPlayerId);
    
    UFUNCTION()
    void ReceiveTriggerSleepPlayerBedSuccess_ToClient();
    
    UFUNCTION()
    void ReceiveTriggerGetupPlayerBedSuccess_ToClient();
    
    UFUNCTION()
    void OnPlayerActionBegin(const UPalActionBase* ActionBase);
    
    UFUNCTION()
    void OnGetupTrigger();
    
    UFUNCTION()
    void OnEndSleep();
    
    UFUNCTION()
    void OnDamagePlayer(FPalDamageResult DamageResult);
    
};

