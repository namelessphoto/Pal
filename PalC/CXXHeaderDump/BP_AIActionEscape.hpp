#ifndef UE4SS_SDK_BP_AIActionEscape_HPP
#define UE4SS_SDK_BP_AIActionEscape_HPP

class UBP_AIActionEscape_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector GoalLocation;
    class AActor* TargetActor;
    double Timer;
    double AcceptanceRadius;
    bool IsMoveing;
    bool IsLockLogic;
    double EndDistance;

    void Is Far Spawn Point(bool& IsFar);
    void OnSquadMemberDeadEvent(FPalDeadInfo DeadInbfo);
    void SoundEvent(FVector EmitLocation);
    void ChangeReturnMode(bool& ChangeSuccess);
    void SetGoalLocation(bool& Success);
    void OnFail_023A017548911A48339C18BEF9D1B042(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnSuccess_023A017548911A48339C18BEF9D1B042(TEnumAsByte<EPathFollowingResult> MovementResult);
    void NavMeshMove();
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionResume(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIActionEscape(int32 EntryPoint);
};

#endif
