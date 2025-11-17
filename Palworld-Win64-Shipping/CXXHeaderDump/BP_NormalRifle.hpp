#ifndef UE4SS_SDK_BP_NormalRifle_HPP
#define UE4SS_SDK_BP_NormalRifle_HPP

class ABP_NormalRifle_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Weapon;
    FVector NewLocalVar_0;
    class UAnimSequence* EmptyAnim;
    class UAnimSequence* FireAnim;
    class UAnimSequence* ReloadAnim;
    class UAnimSequence* LoadedAnim;

    void GetMuzzleEffectAttached(class UNiagaraSystem*& Effect);
    void OnFireStart();
    float GetDefaultBlurAngle();
    void PlayEndFireSound_Callback(bool IsPlaying);
    void PlayEndFireSound();
    void StopFireSound();
    void PlayFireSound();
    void PlayReloadAnimation();
    FTransform GetLeftHandTransform();
    void GetAimingBlurAngle(double& Angle);
    void Is UseEjectionPort(bool& isUse);
    void GeyEjectionPortTransform(FTransform& Transform);
    void GetShotAnimation();
    bool IsUseLeftHandAttach();
    void GetMuzzleRotator(FRotator& Rotator);
    void GetShootInterval(double& Time);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    FName GetEquipSocketName();
    void OnPullTrigger();
    void OnReleaseTrigger();
    void OnDetachWeapon(class AActor* detachActor);
    void カスタムイベント_0(EWeaponNotifyType NotifyType);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void OnAttachWeapon(class AActor* attachActor);
    void OnShoot(class APalBullet* BulletActor);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NormalRifle(int32 EntryPoint);
};

#endif
