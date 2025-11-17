#ifndef UE4SS_SDK_BP_CombatHeli_HPP
#define UE4SS_SDK_BP_CombatHeli_HPP

class ABP_CombatHeli_C : public APalNPC
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule3;                        // 0x0A20 (size: 0x8)
    class UPalBodyPartsBoxComponent* PalBodyPartsBox3;                                // 0x0A28 (size: 0x8)
    class UPalBodyPartsBoxComponent* PalBodyPartsBox2;                                // 0x0A30 (size: 0x8)
    class UPalBodyPartsBoxComponent* PalBodyPartsBox1;                                // 0x0A38 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0A40 (size: 0x8)
    class UStaticMeshComponent* CombatHeli_HeliBody;                                  // 0x0A48 (size: 0x8)
    class UStaticMeshComponent* CombatHeli_Gun;                                       // 0x0A50 (size: 0x8)
    class UPalBodyPartsBoxComponent* PalBodyPartsBox;                                 // 0x0A58 (size: 0x8)
    class UBP_CombatHeliRpidWeaponComponent_Bomber_C* BP_CombatHeliRpidWeaponComponent_Bomber; // 0x0A60 (size: 0x8)
    class UBP_CombatHeliRpidWeaponComponent_WingMiso_C* BP_CombatHeliRpidWeaponComponent_WingMiso; // 0x0A68 (size: 0x8)
    class UBP_CombatHeliRpidWeaponComponent_FrontMG_C* BP_CombatHeliRpidWeaponComponent_FrontMG; // 0x0A70 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0A78 (size: 0x8)

    void CalcHeightControl(double TargetHeight, double& Result);
    void SetHideAll();
    void ShootMGBullet();
    void ReceiveBeginPlay();
    void OnHPGaugeCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnHPGaugeCollisionOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_CombatHeli(int32 EntryPoint);
}; // Size: 0xA80

#endif
