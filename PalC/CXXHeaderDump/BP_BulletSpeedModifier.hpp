#ifndef UE4SS_SDK_BP_BulletSpeedModifier_HPP
#define UE4SS_SDK_BP_BulletSpeedModifier_HPP

class UBP_BulletSpeedModifier_C : public UPalBulletModifierComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Initialize(const class APalBullet* Bullet);
    void ExecuteUbergraph_BP_BulletSpeedModifier(int32 EntryPoint);
};

#endif
