#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalHate.generated.h"

class AActor;

UCLASS(BlueprintType)
class PAL_API UPalHate : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FPalInstanceID, float> HateMap;
    
    UPROPERTY(Transient)
    FTimerHandle HateTimerHandle;
    
public:
    UPalHate();

private:
    UFUNCTION()
    void SelfDeathEvent(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceHateUp_ForActiveAndAttackOtomoPal(AActor* OtomoPal);
    
    UFUNCTION(BlueprintPure)
    AActor* FindMostHateTarget();
    
private:
    UFUNCTION()
    void DamageEvent(FPalDamageResult DamageResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeHate(AActor* Attacker, float PlusHateValue);
    
private:
    UFUNCTION()
    void AttackSuccessEvent(FPalDamageResult DamageResult);
    
};

