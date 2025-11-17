#ifndef UE4SS_SDK_BP_HomingSphereLauncher_HPP
#define UE4SS_SDK_BP_HomingSphereLauncher_HPP

class ABP_HomingSphereLauncher_C : public ABP_RocketLauncher_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    TArray<class AActor*> targetList;                                                 // 0x0658 (size: 0x10)
    TMap<class FName, class EPalCaptureSphereLevelType> ItemName_LevelTypeMap;        // 0x0668 (size: 0x50)
    FBP_HomingSphereLauncher_COnLaunchPalSphere OnLaunchPalSphere;                    // 0x06B8 (size: 0x10)
    void OnLaunchPalSphere(class AActor* Bullet);

    bool IsEnableAutoAim();
    void ClearAttackTarget();
    void GetAttackTarget(class APalCharacter*& Target);
    void GetMuzzleTransform(FTransform& Transform);
    void GetShootTransformList(double BaseAnglePitch, double BaseAngleYaw, double BlurAngle, TArray<FTransform>& ShootTransformList);
    void GetAimingBlurAngle(double& Angle);
    void GetBlurAngle(double& Angle);
    void OnShoot(class APalBullet* BulletActor);
    void GetShootInterval(double& Time);
    void GetMuzzleRotator(FRotator& Rotator);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void ShootBullet();
    void ChangeTransformForRocketWhenReloadIsDone(FVector Location, FRotator Lotation);
    void ChangeTransformForRocketReload(FVector Location, FRotator Rotation);
    void ReceiveBeginPlay();
    void CustomEvent(int32 bulletsNum);
    void OnReleaseTrigger();
    void ExecuteUbergraph_BP_HomingSphereLauncher(int32 EntryPoint);
    void OnLaunchPalSphere__DelegateSignature(class AActor* Bullet);
}; // Size: 0x6C8

#endif
