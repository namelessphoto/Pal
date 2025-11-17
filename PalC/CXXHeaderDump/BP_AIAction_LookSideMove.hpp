#ifndef UE4SS_SDK_BP_AIAction_LookSideMove_HPP
#define UE4SS_SDK_BP_AIAction_LookSideMove_HPP

class UBP_AIAction_LookSideMove_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SelfToTarget;
    double Rate;
    double Right;
    bool IsRightMoving;
    FVector CurrentMoveGoal;
    class APalCharacter* SelfActor;
    bool IsCheckWalkableSuccess;

    void CheckWalkable(bool IsRight, bool& Success, FVector& GoalPos);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_LookSideMove(int32 EntryPoint);
};

#endif
