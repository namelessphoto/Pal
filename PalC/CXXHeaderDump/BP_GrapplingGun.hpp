#ifndef UE4SS_SDK_BP_GrapplingGun_HPP
#define UE4SS_SDK_BP_GrapplingGun_HPP

class ABP_GrapplingGun_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05E8 (size: 0x8)
    class USkeletalMeshComponent* Weapon;                                             // 0x05F0 (size: 0x8)
    bool IsEquip;                                                                     // 0x05F8 (size: 0x1)
    double CableMaxLength;                                                            // 0x0600 (size: 0x8)
    double CableShootSpeed;                                                           // 0x0608 (size: 0x8)
    double CableReturnSpeed;                                                          // 0x0610 (size: 0x8)
    double PlayerMoveSpeed;                                                           // 0x0618 (size: 0x8)
    bool IsVisibleReticle;                                                            // 0x0620 (size: 0x1)
    class ABP_GrapplingGun_Bullet_C* Bullet;                                          // 0x0628 (size: 0x8)
    double NearCoolTimeDistance;                                                      // 0x0630 (size: 0x8)
    double NearCoolTimeRate;                                                          // 0x0638 (size: 0x8)
    class UPalGrapplingGunModule* GrapplingGunModule;                                 // 0x0640 (size: 0x8)

    void IsShowReticle(bool& IsShow);
    bool CanDealDamageWeapon();
    void UpdateVisibleReticle();
    void UpdateBulletLocation();
    void OnPullTrigger();
    void ReceiveTick(float DeltaSeconds);
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void OnGrapplingActionStart(const FVector HitLocation, double CoolTimeRate);
    void OnGrapplingActionEnd();
    void ExecuteUbergraph_BP_GrapplingGun(int32 EntryPoint);
}; // Size: 0x648

#endif
