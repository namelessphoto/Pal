#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BranchingPointNotifyPayload -FallbackName=BranchingPointNotifyPayload
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EPalCharacterImportanceType.h"
#include "EPalShooterFlagContainerPriority.h"
#include "EPalWeaponType.h"
#include "EWeaponAnimationType.h"
#include "EWeaponNotifyType.h"
#include "FlagContainer.h"
#include "LayeredFlagContainer.h"
#include "PalDeadInfo.h"
#include "RidingAnimationInfo.h"
#include "WeaponAnimationInfo.h"
#include "WeaponNotifyAnimationInfo.h"
#include "PalShooterComponent.generated.h"

class APalWeaponBase;
class UAnimMontage;
class UInputComponent;
class UPalActionBase;
class UPalCharacterMovementComponent;
class UPalShooterAnimeAssetBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalShooterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartAimDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReturnTriggerDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPullTriggerDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponNotifyDelegate, EWeaponNotifyType, Type);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdatedUsableHandFlag, bool, CanUseLeftHandFlag, bool, CanUseRightHandFlag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShootBulletDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReloadStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReloadBullet);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadedWeaponAnimeDelegate, UPalShooterAnimeAssetBase*, AnimeAsset);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndShootingAnimation, UAnimMontage*, Montage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeWeapon, APalWeaponBase*, Weapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndAimDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeTargetDirectionDelegate, FVector, Direction);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeStateDelegate, bool, IsAim, bool, IsShoot);
    
    UPROPERTY(BlueprintAssignable)
    FChangeTargetDirectionDelegate OnChangeTargetDirectionDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FStartAimDelegate OnStartAim;
    
    UPROPERTY(BlueprintAssignable)
    FEndAimDelegate OnEndAim;
    
    UPROPERTY(BlueprintAssignable)
    FPullTriggerDelegate OnPullTrigger;
    
    UPROPERTY(BlueprintAssignable)
    FReturnTriggerDelegate OnReleaseTrigger;
    
    UPROPERTY(BlueprintAssignable)
    FChangeStateDelegate OnChangeState;
    
    UPROPERTY(BlueprintAssignable)
    FOnWeaponNotifyDelegate OnWeaponNotifyDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndShootingAnimation OnEndShootingAnimationDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeWeapon OnChangeWeaponDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnReloadStart OnReloadStartDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnReloadBullet OnReloadBulletDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdatedUsableHandFlag OnUpdatedUsableHandFlagDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnShootBulletDelegate OnShootBulletDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadedWeaponAnimeDelegate OnLoadedWeaponAnimeDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkSpeedMultiplierInAim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkSpeedMultiplierInHipShoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChangeWeaponInterpTime;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalWeaponType, TSoftClassPtr<UPalShooterAnimeAssetBase>> DefaultWeaponAnimeAssetBPSoftClassMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<TSoftClassPtr<APalWeaponBase>, TSoftClassPtr<UPalShooterAnimeAssetBase>> OtherWeaponAnimeAssetBPSoftClassMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<TSoftClassPtr<APalWeaponBase>, EPalWeaponType> WeaponCategoryForPreLoad;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsUseBlurUpdate;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIgnoreUIDelayForNextWeapon;
    
private:
    UPROPERTY(Transient)
    TMap<EPalWeaponType, UPalShooterAnimeAssetBase*> DefaultWeaponAnimeAssetMap;
    
    UPROPERTY(Transient)
    TMap<TSoftClassPtr<APalWeaponBase>, UPalShooterAnimeAssetBase*> OtherWeaponAnimeAssetMap;
    
    UPROPERTY(Transient)
    TSet<EPalWeaponType> LoadedDefaultWeaponSet;
    
    UPROPERTY(Transient)
    TSet<TSoftClassPtr<APalWeaponBase>> LoadedOtherWeaponSet;
    
    UPROPERTY(Transient)
    TMap<EWeaponAnimationType, FWeaponNotifyAnimationInfo> OverrideWeaponNotifyAnimationMap;
    
    UPROPERTY(ReplicatedUsing=OnChangeTargetDirection)
    FVector targetDirection;
    
    UPROPERTY()
    TMap<EPalShooterFlagContainerPriority, bool> IsAimingFlags;
    
    UPROPERTY()
    bool bIsShooting;
    
    UPROPERTY()
    TMap<EPalShooterFlagContainerPriority, bool> IsRequestAimFlags;
    
    UPROPERTY()
    bool bIsRequestPullTrigger;
    
    UPROPERTY()
    bool bIsReloading;
    
    UPROPERTY()
    FFlagContainer UseControllerRotationYawFlags;
    
    UPROPERTY()
    APalWeaponBase* HasWeapon;
    
    UPROPERTY()
    APalWeaponBase* CacheNextWeapon;
    
    UPROPERTY(Transient)
    FWeaponAnimationInfo PrevWeaponAnimationInfo;
    
    UPROPERTY()
    bool bIsDisableShootingTemporarily;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FLayeredFlagContainer DisableAimFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FLayeredFlagContainer DisableShootFlag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FLayeredFlagContainer DisableWeaponChange;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer HiddenWeapon;
    
    UPROPERTY()
    float PullTriggerCountDown;
    
    UPROPERTY()
    int32 PullTriggerCountDownCount;
    
    UPROPERTY(Transient)
    float ElapsedTimeSinceWeaponChange;
    
    UPROPERTY(Transient)
    EPalWeaponType OverrideWeaponType;
    
    UPROPERTY()
    bool bUnstoppable;
    
    UPROPERTY()
    bool bIsHoldTrigger;
    
    UPROPERTY()
    bool bBufferedInput;
    
    UPROPERTY()
    bool bIsShootingHold;
    
    UPROPERTY()
    bool bIsAttachRequest;
    
    UPROPERTY()
    bool bChangeIsShootingPulling;
    
    UPROPERTY()
    bool bChangeIsShootingRelaseRequest;
    
    UPROPERTY(Transient)
    APalWeaponBase* NPCWeapon;
    
    UPROPERTY()
    float CurrentBulletBlurRate;
    
    UPROPERTY()
    float RapidFireBlur;
    
    UPROPERTY(Replicated, Transient)
    FRandomStream RandomStream;
    
    UPROPERTY(Transient)
    bool CurrentWeaponUseLeftHandIK;
    
    UPROPERTY(Transient)
    FTransform CurrentWeaponTransformLeftHandIK;
    
    UPROPERTY(Transient)
    UAnimMontage* CacheAnimMontage;
    
public:
    UPalShooterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void StopWeaponChangeAnimation();
    
    UFUNCTION()
    void StopReloadInternal();
    
    UFUNCTION(Reliable, Server)
    void StopReload_ToServer(int32 ID);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void StopReload_ToALL(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void StopReload();
    
    UFUNCTION(BlueprintCallable)
    void StopPullTriggerAnime_forBP();
    
    UFUNCTION(BlueprintCallable)
    void StartAim();
    
    UFUNCTION(BlueprintCallable)
    void SetUsedRightHand(FName flagName, bool bIsUsed);
    
    UFUNCTION(BlueprintCallable)
    void SetUsedLeftHand(FName flagName, bool bIsUsed);
    
private:
    UFUNCTION()
    void SetupInputComponent(UInputComponent* InputComponent);
    
    UFUNCTION(Server, Unreliable)
    void SetTargetDirection_ToServer(FVector NewTargetDirection);
    
public:
    UFUNCTION()
    void SetTargetDirection_ByServer(FVector NewTargetDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetDirection(const FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetShootingHold(bool IsHold);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestAiming(EPalShooterFlagContainerPriority Priority, bool IsRequest);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideWeaponType(EPalWeaponType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideRotationFlags(bool bUseControllerRotationYaw, bool bOrientRotationToMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenAttachWeapon(FName flagName, bool isHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableWeaponForUI(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableWeaponChangeAnime(FName flagName, bool bIsUsed);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableShootFlag_Layered(EPalShooterFlagContainerPriority Priority, FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableShootFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableReloadFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableLeftHandAttachFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableEndAim(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableChangeWeaponFlag_Layered(EPalShooterFlagContainerPriority Priority, FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableChangeWeaponFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableAimFlag_Layered(EPalShooterFlagContainerPriority Priority, FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableAimFlag(FName flagName, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetAiming(EPalShooterFlagContainerPriority Priority, bool bIsAiming);
    
    UFUNCTION(BlueprintCallable)
    void ResetRequestAiming();
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideWeaponType();
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideRotationFlags();
    
private:
    UFUNCTION()
    void ReloadWeaponInternal();
    
    UFUNCTION(Reliable, Server)
    void ReloadWeapon_ToServer(int32 ID);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void ReloadWeapon_ToALL(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void ReloadWeapon();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTrigger();
    
    UFUNCTION(BlueprintCallable)
    void PullTrigger();
    
private:
    UFUNCTION()
    void OnWeaponNotify(EWeaponNotifyType Type);
    
    UFUNCTION()
    void OnWeaponAnimationNotifyEnd(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION()
    void OnWeaponAnimationNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION()
    void OnStartOwnerAction(const UPalActionBase* action);
    
    UFUNCTION()
    void OnShootBullet();
    
    UFUNCTION()
    void OnOwnerAnimInitialized();
    
    UFUNCTION()
    void OnLanded(UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    
    UFUNCTION()
    void OnJump(UPalCharacterMovementComponent* Component);
    
    UFUNCTION()
    void OnEndReloadAnimation(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnDead(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnCrouch(UPalCharacterMovementComponent* Component, bool bIsCrouch);
    
    UFUNCTION()
    void OnChangeTargetDirection();
    
public:
    UFUNCTION()
    void OnChangeChangeImportance(EPalCharacterImportanceType Next);
    
    UFUNCTION(BlueprintPure)
    bool IsShooting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRequestAiming_Layered(EPalShooterFlagContainerPriority Priority) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRequestAiming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayShootingAnimation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHiddenAttachWeapon();
    
    UFUNCTION(BlueprintPure)
    bool IsAiming_Layered(EPalShooterFlagContainerPriority Priority) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable)
    UPalShooterAnimeAssetBase* GetThrowAnimAsset();
    
    UFUNCTION(BlueprintPure)
    FVector GetTargetDirection() const;
    
    UFUNCTION(BlueprintPure)
    EPalShooterFlagContainerPriority GetRequestAimingPriority() const;
    
    UFUNCTION(BlueprintPure)
    FWeaponAnimationInfo GetPreviousWeaponAnimationInfo() const;
    
    UFUNCTION(BlueprintPure)
    APalWeaponBase* GetHasWeapon() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetCurrentWeaponTransformLeftHandIK() const;
    
    UFUNCTION(BlueprintPure)
    FWeaponAnimationInfo GetCurrentWeaponAnimationInfo() const;
    
    UFUNCTION(BlueprintPure)
    FRidingAnimationInfo GetCurrentRidingAnimationInfo() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentBulletBlurRate();
    
    UFUNCTION(BlueprintPure)
    float GetChangeWeaponAnimationWeight() const;
    
    UFUNCTION(BlueprintCallable)
    UPalShooterAnimeAssetBase* GetBowAnimAsset();
    
    UFUNCTION(BlueprintPure)
    EPalShooterFlagContainerPriority GetAimingPriority() const;
    
    UFUNCTION(BlueprintCallable)
    void EndAim(bool bAllEndAim);
    
private:
    UFUNCTION()
    void ChangeWeapon(APalWeaponBase* Weapon, bool bSkipLocalControlCheck);
    
    UFUNCTION(Reliable, Server)
    void ChangeIsShooting_ToServer(int32 ID, bool NewIsShooting);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void ChangeIsShooting_ToALL(int32 ID, bool NewIsShooting);
    
private:
    UFUNCTION()
    void ChangeIsShooting(bool NewIsShooting);
    
    UFUNCTION(Reliable, Server)
    void ChangeIsAiming_ToServer(int32 ID, EPalShooterFlagContainerPriority Priority, bool NewIsAiming);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void ChangeIsAiming_ToALL(int32 ID, EPalShooterFlagContainerPriority Priority, bool NewIsAiming);
    
private:
    UFUNCTION()
    void ChangeIsAiming(EPalShooterFlagContainerPriority Priority, bool NewIsAiming);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanWeaponChangeAnime();
    
    UFUNCTION(BlueprintPure)
    bool CanUseWeapon(APalWeaponBase* Weapon) const;
    
    UFUNCTION(BlueprintPure)
    bool CanUseRightHand() const;
    
    UFUNCTION(BlueprintPure)
    bool CanUseLeftHand() const;
    
    UFUNCTION(BlueprintPure)
    bool CanShoot() const;
    
    UFUNCTION(BlueprintPure)
    bool CanReload() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLeftHandAttach() const;
    
    UFUNCTION(BlueprintPure)
    bool CanChangeNextWeapon_Layered(EPalShooterFlagContainerPriority Priority) const;
    
    UFUNCTION(BlueprintPure)
    bool CanChangeNextWeapon() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAutoAim() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAim() const;
    
    UFUNCTION(BlueprintCallable)
    void BowPullAnimeEnd();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AttachWeapon_ForPartnerSkillPalWeapon_ToAll(APalWeaponBase* Weapon);
    
    UFUNCTION(NetMulticast, Reliable)
    void AttachWeapon_ForNPC_ToAll(bool IsNotNull);
    
    UFUNCTION(BlueprintCallable)
    void AttachWeapon(APalWeaponBase* Weapon, bool bSkipLocalControlCheck);
    
private:
    UFUNCTION()
    void AddRapidFireBlur();
    
};

