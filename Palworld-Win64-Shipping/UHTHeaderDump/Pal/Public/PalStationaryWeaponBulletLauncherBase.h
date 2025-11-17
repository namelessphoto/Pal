#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalStationaryWeaponBase.h"
#include "PalStationaryWeaponBulletLauncherBase.generated.h"

UCLASS(Abstract)
class PAL_API APalStationaryWeaponBulletLauncherBase : public APalStationaryWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float AttackableDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float AttackableAnglePitchRange;
    
    UPROPERTY(EditDefaultsOnly)
    float AttackableAngleYawRange;
    
    UPROPERTY(EditDefaultsOnly)
    float RotateSpeed;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_LauncherRotator)
    FRotator LauncherRotator;
    
public:
    APalStationaryWeaponBulletLauncherBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintNativeEvent)
    FRotator RotateLauncherCalculatePostProcess(const FRotator& InRotator);
    
    UFUNCTION()
    void OnRep_LauncherRotator();
    
public:
    UFUNCTION(BlueprintPure)
    float GetRotateSpeed() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector GetRotateAxisWorldLocation() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLauncherRotator() const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackableAngleYaw() const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackableAnglePitch() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyRotateLauncher_BPImpl(const FRotator& Rotator);
    
};

