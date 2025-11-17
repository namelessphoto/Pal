#ifndef UE4SS_SDK_BP_AINPC_Combat_CommonState_BackwardTurn_HPP
#define UE4SS_SDK_BP_AINPC_Combat_CommonState_BackwardTurn_HPP

class UBP_AINPC_Combat_CommonState_BackwardTurn_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    double RightLeftMove;
    FName flagName;

    void StateTick(float DeltaTime);
    void StateEnter();
    void StateExit();
    void ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn(int32 EntryPoint);
};

#endif
