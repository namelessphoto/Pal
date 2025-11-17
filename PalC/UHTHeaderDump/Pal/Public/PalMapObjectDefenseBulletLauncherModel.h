#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalMapObjectDefenseAttackModelBase.h"
#include "PalMapObjectDefenseBulletLauncherModel.generated.h"

UCLASS()
class UPalMapObjectDefenseBulletLauncherModel : public UPalMapObjectDefenseAttackModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBulletNumUpdated, int32, Num);
    
    UPROPERTY(BlueprintAssignable)
    FOnBulletNumUpdated OnBulletNumUpdatedDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_RemainingBulletsNum)
    int32 remainingBulletsNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 MxgazineSize;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName BulletItemName;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float AttackableDistance;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float AttackableAngleElevation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float AttackableAngleDepression;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float AttackableAngleElevationDot;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float AttackableAngleDepressionDot;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector RotateAxisWorldLocation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FQuat RotateAxisWorldRotation;
    
public:
    UPalMapObjectDefenseBulletLauncherModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UseBullet();
    
    UFUNCTION(BlueprintCallable)
    void ReloadBullets(int32 ReloadBulletsNum);
    
protected:
    UFUNCTION()
    void OnRep_RemainingBulletsNum();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetRemainingBulletsNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMagazineSize() const;
    
    UFUNCTION(BlueprintPure)
    FName GetBulletName() const;
    
};

