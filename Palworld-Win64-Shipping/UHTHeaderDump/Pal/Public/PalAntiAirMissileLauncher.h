#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalMissileLauncherTargetInfo.h"
#include "PalAntiAirMissileLauncher.generated.h"

class USceneComponent;

UCLASS()
class PAL_API APalAntiAirMissileLauncher : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCannonDestroyedDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnCannonDestroyedDelegate OnCannonDestroyedDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TargetSerchRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AttackableInRangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetChangeIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ReloadTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PitchSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float YawSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PitchMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PitchMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LongPressTime;
    
private:
    UPROPERTY(Transient)
    TMap<AActor*, FPalMissileLauncherTargetInfo> InRangeTargetMap;
    
    UPROPERTY(Replicated)
    AActor* AimTarget;
    
    UPROPERTY(Transient)
    FGuid SelfCannonID;
    
    UPROPERTY(Transient)
    float TargetChangeTimer;
    
    UPROPERTY(Transient)
    bool IsShooting;
    
    UPROPERTY(Transient)
    float ReloadingTimer;
    
    UPROPERTY(Transient)
    bool IsReloading;
    
    UPROPERTY(Transient)
    bool IsDisableInteractive;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DestroyedFlag)
    bool IsDestroyed;
    
public:
    APalAntiAirMissileLauncher(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StartReload();
    
    UFUNCTION(BlueprintCallable)
    void RemoveInRangeActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTrigger_ByBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReleaseTrigger_BP();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void ReleaseTrigger();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PullTrigger_BP();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void PullTrigger();
    
    UFUNCTION()
    void OnRep_DestroyedFlag();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDestroyWeapon_BP();
    
private:
    UFUNCTION()
    void OnDeadByDamage();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDestroyedWeapon() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    USceneComponent* GetYawMesh() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    USceneComponent* GetPitchMesh() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    EPalInteractiveObjectIndicatorType GetIndicatorType() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAimTarget() const;
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void DestroyByPlayerCon_ToAll();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddInRangeActor(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

