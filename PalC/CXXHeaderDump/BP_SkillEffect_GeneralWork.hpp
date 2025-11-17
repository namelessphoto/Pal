#ifndef UE4SS_SDK_BP_SkillEffect_GeneralWork_HPP
#define UE4SS_SDK_BP_SkillEffect_GeneralWork_HPP

class ABP_SkillEffect_GeneralWork_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UParticleSystemComponent* PS_Scratch2;
    class UParticleSystemComponent* PS_Scratch1;
    class UParticleSystemComponent* PS_Scratch;
    double StartCollisionTime;
    double EndCollisionTime;

    void SetupCollision(FVector TargetLocationPoint, FVector ImpactPoint);
    void ReceiveBeginPlay();
    void EnableCollision();
    void EndCollision();
    void ExecuteUbergraph_BP_SkillEffect_GeneralWork(int32 EntryPoint);
};

#endif
