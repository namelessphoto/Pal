#ifndef UE4SS_SDK_BP_AINPC_CombatMeleeState_StepAttack_Katana_HPP
#define UE4SS_SDK_BP_AINPC_CombatMeleeState_StepAttack_Katana_HPP

class UBP_AINPC_CombatMeleeState_StepAttack_Katana_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StateEnter();
    void ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana(int32 EntryPoint);
};

#endif
