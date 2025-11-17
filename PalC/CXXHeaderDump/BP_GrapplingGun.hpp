#ifndef UE4SS_SDK_BP_GrapplingGun_HPP
#define UE4SS_SDK_BP_GrapplingGun_HPP

class ABP_GrapplingGun_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Weapon;
    bool IsEquip;
    double CableMaxLength;
    double CableShootSpeed;
    double CableReturnSpeed;
    double PlayerMoveSpeed;
    bool IsVisibleReticle;
    class ABP_GrapplingGun_Bullet_C* Bullet;
    double NearCoolTimeDistance;
    double NearCoolTimeRate;
    class UPalGrapplingGunModule* GrapplingGunModule;

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
};

#endif
