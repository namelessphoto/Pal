#ifndef UE4SS_SDK_BP_CombatHeliRpidWeaponComponent_HPP
#define UE4SS_SDK_BP_CombatHeliRpidWeaponComponent_HPP

class UBP_CombatHeliRpidWeaponComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeshComponent* GunMesh;
    double Const_ShootingTime;
    int32 Const_WeaponDamage;
    double Const_BulletSpeed;
    double Const_BulletAngle;
    FTimerHandle TimerHandle;
    double Const_ShootInterval;
    TSubclassOf<class APalBullet> Const_BulletClass;
    int32 CurrentShootCount;
    bool IsShooting;
    double Const_RestTime;

    void GetMuzzleFlashEffect(class UNiagaraSystem*& Effect);
    void GunAim(double DeltaTime, class AActor* Target);
    void GetMuzzleTransform(FTransform& MzlTF);
    void ShootBullet();
    void SetGunMesh(class UMeshComponent* GunMesh);
    void PullTrigger();
    void ReleaseTrigger();
    void ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent(int32 EntryPoint);
};

#endif
