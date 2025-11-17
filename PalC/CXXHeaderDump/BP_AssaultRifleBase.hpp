#ifndef UE4SS_SDK_BP_AssaultRifleBase_HPP
#define UE4SS_SDK_BP_AssaultRifleBase_HPP

class ABP_AssaultRifleBase_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x05F0 (size: 0x8)
    FTimerHandle ShootingHandle;                                                      // 0x05F8 (size: 0x8)
    bool IsAccurate;                                                                  // 0x0600 (size: 0x1)
    FVector targetPosition;                                                           // 0x0608 (size: 0x18)
    bool SendShootCompletedNotify;                                                    // 0x0620 (size: 0x1)
    bool IsInCoolTime;                                                                // 0x0621 (size: 0x1)

    void IsDecrementBullet(bool& Result);
    void OnFireStart();
    float CalcAccuracy();
    float CalcRange();
    float CalcDPS();
    void GetAmmoClass(TSubclassOf<class AActor>& AmmoClass);
    void PlayReloadAnimation();
    void CanShoot(bool& can);
    void Get Right Hand Location(FVector& RightHandLocation);
    void GeyEjectionPortTransform(FTransform& Transform);
    void Is UseEjectionPort(bool& isUse);
    void GetShotAnimation();
    bool IsUseLeftHandAttach();
    void OnShoot(class APalBullet* BulletActor);
    void GetAimingBlurAngle(double& Angle);
    void GetInitializeInterval(double& Time);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetBlurAngle(double& Angle);
    void GetMuzzleEffectParticle(class UParticleSystem*& Particle System);
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void GetMuzzleRotator(FRotator& Rotator);
    void GetShootInterval(double& Time);
    void GetTargetPosition(FVector& targetPosition);
    void ShootBullet();
    FName GetEquipSocketName();
    void OnStartAim();
    void OnEndAim();
    void OnPullTrigger();
    void OnReleaseTrigger();
    void OnReloadStart(float InReloadSpeedPlayRate);
    void OnAttachWeapon(class AActor* attachActor);
    void StopReloadWhenRoll(const class UPalActionBase* action);
    void OnDetachWeapon(class AActor* detachActor);
    void ResetCoolTime();
    void ExecuteUbergraph_BP_AssaultRifleBase(int32 EntryPoint);
}; // Size: 0x622

#endif
