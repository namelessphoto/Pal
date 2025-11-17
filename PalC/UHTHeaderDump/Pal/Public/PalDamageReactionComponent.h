#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalAdditionalEffectType.h"
#include "EPalDamageAnimationReactionType.h"
#include "EPalDeadType.h"
#include "EPalWazaID.h"
#include "PalDamageRactionInfo.h"
#include "PalDamageResult.h"
#include "PalDeadInfo.h"
#include "PalDyingEndInfo.h"
#include "PalEachDamageRactionInfo.h"
#include "PalInstanceID.h"
#include "Templates/SubclassOf.h"
#include "PalDamageReactionComponent.generated.h"

class AActor;
class APalPlayerCharacter;
class UAnimMontage;
class UPalHitEffectSlot;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlipDamageDelegate, int32, Damage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSleepDelegate, int32, LastDamage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartBrokenDelegate, FPalDeadInfo, AttackInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNooseTrapDelegate, AActor*, TrapActor, FVector, FixLocation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMentalDamageDelegate, FPalDamageResult, DamageResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEachDamageReactionDelegate, FPalEachDamageRactionInfo, EachReactionInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDyingDeadEnd, APalPlayerCharacter*, PlayerCharacter, const FPalDyingEndInfo&, DyingEndInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeadDelegate, FPalDeadInfo, DeadInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageReactionDelegate, FPalDamageRactionInfo, ReactionInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageDelegate, FPalDamageResult, DamageResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCaptureStartDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnDamageDelegate OnDamageDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnDamageDelegate OnDamageDelegate_Always;
    
    UPROPERTY(BlueprintAssignable)
    FOnDeadDelegate OnDeadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnDyingDeadEnd OnDyingDeadEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnPartBrokenDelegate OnPartBrokenDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMentalDamageDelegate OnMentalDamageDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSleepDelegate OnSleepDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnDamageReactionDelegate OnDamageReactionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEachDamageReactionDelegate OnEachDamageReactionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSlipDamageDelegate OnSlipDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnCaptureStartDelegate OnCaptureStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnNooseTrapDelegate OnNooseTrapDelegate;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalHitEffectSlot> DamageEffectSlotClass;
    
private:
    UPROPERTY()
    UPalHitEffectSlot* EffectSlot;
    
    UPROPERTY()
    TArray<float> RateList;
    
    UPROPERTY(Transient)
    TArray<float> LargeDownAbleHPRate;
    
    UPROPERTY(Transient)
    bool DisableLargeDown;
    
    UPROPERTY(Transient)
    FPalInstanceID LastAttackerInstanceID;
    
    UPROPERTY(Transient)
    bool BossEnemyLeanBackCoolTimeFlag;
    
    UPROPERTY(Transient)
    FTimerHandle BossEnemyLeanBackCoolTimeHandle;
    
public:
    UPalDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SlipDamageAndBlowWhenDead(int32 Damage, FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    void SlipDamage(int32 Damage, bool ShieldIgnore, EPalDeadType DeadType);
    
private:
    UFUNCTION()
    void ShowDeadDebugLog(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableLargeDown();
    
private:
    UFUNCTION()
    void ResetBossEnemyLeanBackCoolTimeFlag();
    
    UFUNCTION(NetMulticast, Reliable)
    void PopupDamageBySlipDamage_ToALL(int32 Damage);
    
    UFUNCTION(NetMulticast, Reliable)
    void PlayEachDamageReaction(FPalEachDamageRactionInfo EachReactionInfo);
    
    UFUNCTION(NetMulticast, Reliable)
    void PlayDamageReaction(FPalDamageRactionInfo ReactionInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayAddDamageMotion(EPalDamageAnimationReactionType reactionType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHitNooseTrap(AActor* TrapActor, FVector FixLocation);
    
    UFUNCTION()
    void OnEndDamageMotion(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnDyingDeadEndDelegate_ToALL(bool bIsInstantDeath);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDamageReact(FPalDamageResult DamageResult, const FPalDeadInfo& ProcessedDeadInfo, const bool IsDead, const bool IsPartsBroke);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsIgnoreElementStatus(EPalAdditionalEffectType Effect);
    
    UFUNCTION(BlueprintPure)
    FPalInstanceID GetLastAttackerInstanceID();
    
private:
    UFUNCTION(BlueprintCallable)
    void ForceDamageDelegateForCaptureBall(AActor* Attacker);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeathDamage_ForSelfDestruct(FVector Velocity, EPalWazaID WazaID);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void CallOnDamageDelegateAlways(FPalDamageResult DamageResult);
    
    UFUNCTION(NetMulticast, Reliable)
    void CallDeadDelegate_ToALL(FPalDeadInfo DeadInfo);
    
    UFUNCTION(NetMulticast, Reliable)
    void AddDeadImplus(FPalDamageResult DamageResult);
    
};

