#ifndef UE4SS_SDK_BP_AINPC_Combat_CommonState_BackStep_HPP
#define UE4SS_SDK_BP_AINPC_Combat_CommonState_BackStep_HPP

class UBP_AINPC_Combat_CommonState_BackStep_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StateEnter();
    void StateTick(float DeltaTime);
    void ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep(int32 EntryPoint);
};

#endif
