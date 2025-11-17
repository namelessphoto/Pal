#ifndef UE4SS_SDK_BP_AINPC_CombatGunState_AimMove_HPP
#define UE4SS_SDK_BP_AINPC_CombatGunState_AimMove_HPP

class UBP_AINPC_CombatGunState_AimMove_C : public UBP_AINPC_CombatState_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector MoveDirection;

    void CanMove(bool& CanMove);
    void FindMoveGoal(bool& Success, FVector& GoalPos);
    void MoveDIrectionWorldSpace(FVector& Direction);
    void StateEnter();
    void StateExit();
    void StateTick(float DeltaTime);
    void ExecuteUbergraph_BP_AINPC_CombatGunState_AimMove(int32 EntryPoint);
};

#endif
