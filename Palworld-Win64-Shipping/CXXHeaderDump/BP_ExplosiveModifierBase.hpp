#ifndef UE4SS_SDK_BP_ExplosiveModifierBase_HPP
#define UE4SS_SDK_BP_ExplosiveModifierBase_HPP

class UBP_ExplosiveModifierBase_C : public UPalBulletModifierComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class ABP_ExplosionAttackBase_C> ExplosiveBullet;
    class UNiagaraSystem* TrailEffect;

    void Initialize(const class APalBullet* Bullet);
    void カスタムイベント_0(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hi);
    void ExecuteUbergraph_BP_ExplosiveModifierBase(int32 EntryPoint);
};

#endif
