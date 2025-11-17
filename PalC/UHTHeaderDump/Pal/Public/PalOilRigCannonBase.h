#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "EPalOilrigType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "PalOilrigHandledActorInterface.h"
#include "PalOilRigCannonBase.generated.h"

class AActor;
class APalOilrigController;
class USceneComponent;

UCLASS()
class PAL_API APalOilRigCannonBase : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RangeMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RangeMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PitchMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PitchMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float YawMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PitchSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float YawSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChangeTargetInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BulletSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LongPressTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool OnlyFlyTarget;
    
private:
    UPROPERTY(Transient)
    TArray<AActor*> TargetActors;
    
    UPROPERTY(Replicated)
    AActor* AimTargetActor;
    
    UPROPERTY(Transient)
    float ChangeTargetTimer;
    
    UPROPERTY(Transient)
    float CurrentYaw;
    
    UPROPERTY(Transient)
    bool IsShooting;
    
    UPROPERTY(Transient)
    bool IsInConeAimTarget;
    
    UPROPERTY(Transient)
    bool IsDisableInteractive;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DestroyedFlag)
    bool IsDestroyed;
    
    UPROPERTY(Transient)
    EPalOilrigType SelfOilrigType;
    
public:
    APalOilRigCannonBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(NetMulticast, Reliable)
    void SyncDestroyObject_ToAll();
    
public:
    UFUNCTION()
    void RequestDestroyWeapon();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveOverlapCharacter(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ReleaseTrigger_ToAll();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReleaseTrigger_BP();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PullTrigger_ToAll();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PullTrigger_BP();
    
private:
    UFUNCTION()
    void OnRep_DestroyedFlag();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyedWeapon_ForBP();
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyedWeapon();
    
private:
    UFUNCTION()
    void OnDeadByDamage();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsShootingGun();
    
    UFUNCTION(BlueprintPure)
    bool IsDestroyedWeapon() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    USceneComponent* GetYawMesh() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    USceneComponent* GetPitchMesh() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    EPalInteractiveObjectIndicatorType GetIndicatorType() const;
    
    UFUNCTION(BlueprintPure)
    APalOilrigController* FindOilrigController();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DestroyWeapon_ToAll();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeDefaultVisual_BP();
    
    UFUNCTION(BlueprintCallable)
    bool CanRayCastToTarget();
    
    UFUNCTION(BlueprintCallable)
    void AddOverlapCharacter(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

