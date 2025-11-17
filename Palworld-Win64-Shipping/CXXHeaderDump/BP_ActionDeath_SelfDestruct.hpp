#ifndef UE4SS_SDK_BP_ActionDeath_SelfDestruct_HPP
#define UE4SS_SDK_BP_ActionDeath_SelfDestruct_HPP

class UBP_ActionDeath_SelfDestruct_C : public UBP_ActionDeath_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class ABP_SkillEffect_SelfDestruct_C> ExClass;

    void GetExClass();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionDeath_SelfDestruct(int32 EntryPoint);
};

#endif
