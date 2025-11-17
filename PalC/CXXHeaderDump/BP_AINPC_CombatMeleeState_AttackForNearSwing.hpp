#ifndef UE4SS_SDK_BP_AINPC_CombatMeleeState_AttackForNearSwing_HPP
#define UE4SS_SDK_BP_AINPC_CombatMeleeState_AttackForNearSwing_HPP

class UBP_AINPC_CombatMeleeState_AttackForNearSwing_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StateEnter();
    void ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing(int32 EntryPoint);
};

#endif
