#ifndef UE4SS_SDK_BP_NormalRifle_HPP
#define UE4SS_SDK_BP_NormalRifle_HPP

class ABP_NormalRifle_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0628 (size: 0x8)
    class USkeletalMeshComponent* Weapon;                                             // 0x0630 (size: 0x8)
    FVector NewLocalVar_0;                                                            // 0x0638 (size: 0x18)
    class UAnimSequence* EmptyAnim;                                                   // 0x0650 (size: 0x8)
    class UAnimSequence* FireAnim;                                                    // 0x0658 (size: 0x8)
    class UAnimSequence* ReloadAnim;                                                  // 0x0660 (size: 0x8)
    class UAnimSequence* LoadedAnim;                                                  // 0x0668 (size: 0x8)

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
}; // Size: 0x670

#endif
