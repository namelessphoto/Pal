#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalWeaponBase.h"
#include "Templates/SubclassOf.h"
#include "PalMonsterEquipWeaponBase.generated.h"

class APalBullet;
class UNiagaraSystem;

UCLASS()
class PAL_API APalMonsterEquipWeaponBase : public APalWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FVector BattleAimTargetLocation;
    
public:
    APalMonsterEquipWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    APalBullet* ShootOneBulletDefault();
    
    UFUNCTION(BlueprintCallable)
    APalBullet* ShootOneBullet(TSubclassOf<APalBullet> BulletClass, UNiagaraSystem* MuzzleEffect, FVector MuzzleLocation, FRotator MuzzleRotate, float BulrAngle);
    
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
    
};

