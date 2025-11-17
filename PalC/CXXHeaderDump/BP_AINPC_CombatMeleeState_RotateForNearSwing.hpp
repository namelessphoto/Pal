#ifndef UE4SS_SDK_BP_AINPC_CombatMeleeState_RotateForNearSwing_HPP
#define UE4SS_SDK_BP_AINPC_CombatMeleeState_RotateForNearSwing_HPP

class UBP_AINPC_CombatMeleeState_RotateForNearSwing_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StateTick(float DeltaTime);
    void ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing(int32 EntryPoint);
};

#endif
