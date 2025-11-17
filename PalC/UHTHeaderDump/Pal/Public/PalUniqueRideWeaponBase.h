#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalWeaponBase.h"
#include "PalWeaponBulletHijackInfo.h"
#include "Templates/SubclassOf.h"
#include "PalUniqueRideWeaponBase.generated.h"

class AActor;
class APalBullet;
class UMeshComponent;
class UNiagaraSystem;
class UPalActionBase;
class UPalActionComponent;

UCLASS()
class PAL_API APalUniqueRideWeaponBase : public APalWeaponBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShootHijackBulletDelegate, FPalWeaponBulletHijackInfo, HijackInfo);
    
    UPROPERTY(BlueprintAssignable)
    FOnShootHijackBulletDelegate OnShootHijackBullet;
    
    APalUniqueRideWeaponBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ShootOneBulletByDefault();
    
    UFUNCTION(BlueprintCallable)
    void ShootOneBullet(TSubclassOf<APalBullet> BulletClass, UNiagaraSystem* MuzzleEffect, FVector MuzzleLocation, FRotator MuzzleRotate, float BulrAngle, TSubclassOf<AActor> AmmoClass, FTransform AmmoEject);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHijackEnable(bool IsEnable);
    
private:
    UFUNCTION()
    void OnUniqueShoot();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCancellShooting();
    
private:
    UFUNCTION()
    void OnActionCompleted(const UPalActionComponent* ActionComp);
    
    UFUNCTION()
    void OnActionBegin(const UPalActionBase* action);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWeaponHijacked();
    
protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FRotator GetMuzzleRotation();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector GetMuzzleLocation();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UNiagaraSystem* GetMuzzleEffect();
    
    UFUNCTION(BlueprintPure)
    FVector GetCommonTargetLocation();
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetBulrAngle();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TSubclassOf<APalBullet> GetBulletClass();
    
    UFUNCTION(BlueprintImplementableEvent)
    FTransform GetAmmoEjectTransform();
    
    UFUNCTION(BlueprintImplementableEvent)
    TSubclassOf<AActor> GetAmmoClass();
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetAllMeshComponent(TArray<UMeshComponent*>& OutMesh);
    
    UFUNCTION(BlueprintPure)
    bool CanUse();
    
};

