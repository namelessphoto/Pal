#ifndef UE4SS_SDK_BP_AINPC_CombatMeleeState_StepAttack_HPP
#define UE4SS_SDK_BP_AINPC_CombatMeleeState_StepAttack_HPP

class UBP_AINPC_CombatMeleeState_StepAttack_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class UPalActionBase> Action Class;

    void StateEnter();
    void ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack(int32 EntryPoint);
};

#endif
