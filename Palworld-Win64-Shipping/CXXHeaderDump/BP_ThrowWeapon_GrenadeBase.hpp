#ifndef UE4SS_SDK_BP_ThrowWeapon_GrenadeBase_HPP
#define UE4SS_SDK_BP_ThrowWeapon_GrenadeBase_HPP

class ABP_ThrowWeapon_GrenadeBase_C : public ABP_ThrowWeaponBase_C
{
    class UStaticMeshComponent* StaticMesh;
    FName ItemName;

    bool IsEnableAutoAim();
    int32 GetRemainBulletCount();
    void GetShootPitch(double& Pitch);
    void ComsumeItem();
    void On Throw();
    void GetBulletShootRotation(FRotator& BulletRotate);
    void GetThrowObjectClass(TSubclassOf<class AActor>& ThrowObject);
    FName GetEquipSocketName();
};

#endif
