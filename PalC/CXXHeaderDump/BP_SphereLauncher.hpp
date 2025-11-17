#ifndef UE4SS_SDK_BP_SphereLauncher_HPP
#define UE4SS_SDK_BP_SphereLauncher_HPP

class ABP_SphereLauncher_C : public ABP_RocketLauncher_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    double ScatteredAngle;                                                            // 0x0658 (size: 0x8)
    TArray<FName> ItemNameList;                                                       // 0x0660 (size: 0x10)
    TArray<class TSubclassOf<ABP_PalSphere_ThrowObject_C>> BulletClass;               // 0x0670 (size: 0x10)
    int32 CurrentBallIndex;                                                           // 0x0680 (size: 0x4)
    TMap<class FName, class EPalCaptureSphereLevelType> ItemName_LevelTypeMap;        // 0x0688 (size: 0x50)
    FBP_SphereLauncher_COnLaunchPalSphere OnLaunchPalSphere;                          // 0x06D8 (size: 0x10)
    void OnLaunchPalSphere(class AActor* Bullet);
    double Const_BulletSpeed;                                                         // 0x06E8 (size: 0x8)

    bool IsEnableAutoAim();
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
    void ExecuteUbergraph_BP_SphereLauncher(int32 EntryPoint);
    void OnLaunchPalSphere__DelegateSignature(class AActor* Bullet);
}; // Size: 0x6F0

#endif
