#ifndef UE4SS_SDK_BP_AIAction_CombatGunState_SideDashMove_HPP
#define UE4SS_SDK_BP_AIAction_CombatGunState_SideDashMove_HPP

class UBP_AIAction_CombatGunState_SideDashMove_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    EPalCharacterMovementCustomMode Sprint;
    FVector GoalPos;
    FVector Timer;
    FVector selfPos;
    bool PathFindSuccess;

    void FindMoveGoal(FVector& Goal, bool& Success);
    void StateEnter();
    void StateExit();
    void StateTick(float DeltaTime);
    void ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove(int32 EntryPoint);
};

#endif
