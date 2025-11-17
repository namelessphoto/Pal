#ifndef UE4SS_SDK_BP_RocketLauncher_HPP
#define UE4SS_SDK_BP_RocketLauncher_HPP

class ABP_RocketLauncher_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Sphere;
    class UChildActorComponent* BP_Ammo_Rocket;
    class USkeletalMeshComponent* SkeletalMesh;
    class UMaterialInstanceDynamic* RocketMask;

    void GetBackFireLocation(FVector& Location, FRotator& Rotation);
    void OnShoot(class APalBullet* BulletActor);
    void StopReloadSound();
    void PlayReloadSound();
    void PlayFireSound();
    void ShootBullet();
    void ChangeTransformForRocketWhenReloadIsDone(FVector Location, FRotator Lotation);
    void ChangeTransformForRocketReload(FVector Location, FRotator Rotation);
    FTransform GetLeftHandTransform();
    void OnEndShootAnimation(class UAnimMontage* Montage);
    void GetAimingBlurAngle(double& Angle);
    void GetBlurAngle(double& Angle);
    void isUseRightHandAttach(bool& isUse);
    void Get Right Hand Location(FVector& RightHandLocation);
    bool IsUseLeftHandAttach();
    void GetMuzzleRotator(FRotator& Rotator);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetInitializeInterval(double& Time);
    void GetShootInterval(double& Time);
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnReload(int32 bulletsNum);
    void OnReloadStart(float InReloadSpeedPlayRate);
    void OnPullTrigger();
    void OnDetachWeapon(class AActor* detachActor);
    void OnAttachWeapon(class AActor* attachActor);
    void OnStopReload();
    void OnNotify(TEnumAsByte<E_PalWeaponAnimationNotify> Notify);
    void ExecuteUbergraph_BP_RocketLauncher(int32 EntryPoint);
};

#endif
