#ifndef UE4SS_SDK_BP_CombatHeli_HPP
#define UE4SS_SDK_BP_CombatHeli_HPP

class ABP_CombatHeli_C : public APalNPC
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule3;
    class UPalBodyPartsBoxComponent* PalBodyPartsBox3;
    class UPalBodyPartsBoxComponent* PalBodyPartsBox2;
    class UPalBodyPartsBoxComponent* PalBodyPartsBox1;
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;
    class UStaticMeshComponent* CombatHeli_HeliBody;
    class UStaticMeshComponent* CombatHeli_Gun;
    class UPalBodyPartsBoxComponent* PalBodyPartsBox;
    class UBP_CombatHeliRpidWeaponComponent_Bomber_C* BP_CombatHeliRpidWeaponComponent_Bomber;
    class UBP_CombatHeliRpidWeaponComponent_WingMiso_C* BP_CombatHeliRpidWeaponComponent_WingMiso;
    class UBP_CombatHeliRpidWeaponComponent_FrontMG_C* BP_CombatHeliRpidWeaponComponent_FrontMG;
    class AActor* TargetActor;

    void CalcHeightControl(double TargetHeight, double& Result);
    void SetHideAll();
    void ShootMGBullet();
    void ReceiveBeginPlay();
    void OnHPGaugeCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnHPGaugeCollisionOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_CombatHeli(int32 EntryPoint);
};

#endif
