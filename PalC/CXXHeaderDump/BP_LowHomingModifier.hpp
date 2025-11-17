#ifndef UE4SS_SDK_BP_LowHomingModifier_HPP
#define UE4SS_SDK_BP_LowHomingModifier_HPP

class UBP_LowHomingModifier_C : public UPalBulletModifierComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileMovementComponent* ProjectileComponent;

    void SetHomingTarget(class AActor* Actor, bool& IsSuccess);
    void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Initialize(const class APalBullet* Bullet);
    void ExecuteUbergraph_BP_LowHomingModifier(int32 EntryPoint);
};

#endif
