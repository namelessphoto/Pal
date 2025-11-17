#ifndef UE4SS_SDK_BP_AINPC_Combat_CommonState_MoveToTarget_HPP
#define UE4SS_SDK_BP_AINPC_Combat_CommonState_MoveToTarget_HPP

class UBP_AINPC_Combat_CommonState_MoveToTarget_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    EPalCharacterMovementCustomMode Sprint;

    void StateEnter();
    void StateTick(float DeltaTime);
    void StateExit();
    void ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget(int32 EntryPoint);
};

#endif
