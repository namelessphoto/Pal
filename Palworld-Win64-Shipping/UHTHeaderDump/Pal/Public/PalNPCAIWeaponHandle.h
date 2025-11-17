#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalWeaponType.h"
#include "PalNPCWeaponCombatInfo.h"
#include "Templates/SubclassOf.h"
#include "PalNPCAIWeaponHandle.generated.h"

class AActor;
class APalWeaponBase;
class UPalAIActionBase;
class UPalStateMachineStateBase;

UCLASS(BlueprintType)
class PAL_API UPalNPCAIWeaponHandle : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInitializeEnd);
    
    UPROPERTY(BlueprintAssignable)
    FOnInitializeEnd OnInitializeEnd;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalWeaponType, FPalNPCWeaponCombatInfo> CombatAIParamMap;
    
private:
    UPROPERTY(Transient)
    AActor* ShooterHuman;
    
    UPROPERTY(Transient)
    TSubclassOf<UPalStateMachineStateBase> FireStateClass;
    
public:
    UPalNPCAIWeaponHandle();

    UFUNCTION(BlueprintCallable)
    void UnequipWeapon();
    
    UFUNCTION(BlueprintCallable)
    void TerminateNPCWeapon();
    
    UFUNCTION(BlueprintCallable)
    void ShootOneBullet();
    
    UFUNCTION(BlueprintCallable)
    void ShootBurstBullet(float PullSecond);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTrigger();
    
    UFUNCTION(BlueprintPure)
    bool IsTargetInConeShap();
    
    UFUNCTION(BlueprintPure)
    bool IsNear_NearRange(AActor* TargetActor, float NearRangePlusOffset);
    
    UFUNCTION(BlueprintPure)
    bool IsNear_FarRange(AActor* TargetActor, float FarRangePlusOffset);
    
    UFUNCTION(BlueprintPure)
    bool IsMagazineEmpty() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEndInitialize();
    
    UFUNCTION(BlueprintCallable)
    void InitializeNPCWeapon(APalWeaponBase* WeaponActor);
    
    UFUNCTION(BlueprintPure)
    bool GetUseSideDashMovement();
    
    UFUNCTION(BlueprintPure)
    float GetSphereCastRadius();
    
    UFUNCTION(BlueprintPure)
    float GetShootInterval();
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainingBullet();
    
    UFUNCTION(BlueprintPure)
    float GetReloadTime();
    
    UFUNCTION(BlueprintPure)
    float GetRandomMoveTimeMin();
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxShootCount();
    
    UFUNCTION(BlueprintPure)
    bool GetIsMeleeAttackWithGun();
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UPalStateMachineStateBase> GetFireStateClass();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UPalAIActionBase> GetCombatClass();
    
private:
    UFUNCTION()
    void FullReload();
    
public:
    UFUNCTION(BlueprintCallable)
    void EquipWeapon();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseBullet();
    
    UFUNCTION(BlueprintCallable)
    void AimToTarget(AActor* TargetActor, bool Aim, float DeltaTime);
    
};

