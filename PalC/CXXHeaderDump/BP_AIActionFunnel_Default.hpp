#ifndef UE4SS_SDK_BP_AIActionFunnel_Default_HPP
#define UE4SS_SDK_BP_AIActionFunnel_Default_HPP

class UBP_AIActionFunnel_Default_C : public UPalAIActionFunnelCharacterDefault
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalFunnelSkillModule* SkillModule;

    void CreateSkillActionModule(TSubclassOf<class UPalFunnelSkillModule> FunnelSkillModuleClass);
    bool ShouldSetSkillAction();
    class UPalAIActionBase* SetAction(TSubclassOf<class UPalAIActionBase> Class);
    void SetActionSkill();
    void SetActionFollowTrainer();
    void SetOtomoFollowAction();
    void SetSkillAction();
    void OnTick_BP(float DeltaTime);
    void ExecuteUbergraph_BP_AIActionFunnel_Default(int32 EntryPoint);
};

#endif
