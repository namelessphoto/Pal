#ifndef UE4SS_SDK_BP_SphereLauncher_HPP
#define UE4SS_SDK_BP_SphereLauncher_HPP

class ABP_SphereLauncher_C : public ABP_RocketLauncher_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    double ScatteredAngle;
    TArray<FName> ItemNameList;
    TArray<class TSubclassOf<ABP_PalSphere_ThrowObject_C>> BulletClass;
    int32 CurrentBallIndex;
    TMap<class FName, class EPalCaptureSphereLevelType> ItemName_LevelTypeMap;
    FBP_SphereLauncher_COnLaunchPalSphere OnLaunchPalSphere;
    void OnLaunchPalSphere(class AActor* Bullet);
    double Const_BulletSpeed;

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
};

#endif
