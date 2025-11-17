#ifndef UE4SS_SDK_BP_AIAction_Leave_BackStep_HPP
#define UE4SS_SDK_BP_AIAction_Leave_BackStep_HPP

class UBP_AIAction_Leave_BackStep_C : public UPalAIAction_LeaveBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool EndAble;
    bool TurnAble;
    TArray<FVector> GoalLocationList;
    bool JumpFailure;

    void CheckReachable(FVector GoalPos, bool& Success, FVector& HitLocation);
    void AddGoalArray(double Right, double DistanceRate, FVector BackVector, FVector RightVector);
    void FindGoalLocation(FVector& GoalPos, bool& Success);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult> WithResult);
    void ExecuteUbergraph_BP_AIAction_Leave_BackStep(int32 EntryPoint);
};

#endif
