#ifndef UE4SS_SDK_BP_Action_Cooking_NPC_HPP
#define UE4SS_SDK_BP_Action_Cooking_NPC_HPP

class UBP_Action_Cooking_NPC_C : public UBP_ActionCooking_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Prop_Base_C* Prop;

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Cooking_NPC(int32 EntryPoint);
};

#endif
