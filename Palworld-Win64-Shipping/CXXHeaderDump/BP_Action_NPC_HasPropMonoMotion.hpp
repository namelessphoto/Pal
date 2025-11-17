#ifndef UE4SS_SDK_BP_Action_NPC_HasPropMonoMotion_HPP
#define UE4SS_SDK_BP_Action_NPC_HasPropMonoMotion_HPP

class UBP_Action_NPC_HasPropMonoMotion_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Prop_Base_C* PropModel;
    TSubclassOf<class ABP_Prop_Base_C> PropActorClass;

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_NPC_HasPropMonoMotion(int32 EntryPoint);
};

#endif
