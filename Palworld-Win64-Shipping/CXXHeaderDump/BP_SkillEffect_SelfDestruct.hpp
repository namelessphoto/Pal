#ifndef UE4SS_SDK_BP_SkillEffect_SelfDestruct_HPP
#define UE4SS_SDK_BP_SkillEffect_SelfDestruct_HPP

class ABP_SkillEffect_SelfDestruct_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* AttackCollision;
    class UNiagaraComponent* Niagara;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_SelfDestruct(int32 EntryPoint);
};

#endif
