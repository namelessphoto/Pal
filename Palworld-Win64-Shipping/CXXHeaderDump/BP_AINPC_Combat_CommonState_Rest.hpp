#ifndef UE4SS_SDK_BP_AINPC_Combat_CommonState_Rest_HPP
#define UE4SS_SDK_BP_AINPC_Combat_CommonState_Rest_HPP

class UBP_AINPC_Combat_CommonState_Rest_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StateTick(float DeltaTime);
    void ExecuteUbergraph_BP_AINPC_Combat_CommonState_Rest(int32 EntryPoint);
};

#endif
