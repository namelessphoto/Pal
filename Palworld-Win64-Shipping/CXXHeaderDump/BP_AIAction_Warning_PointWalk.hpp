#ifndef UE4SS_SDK_BP_AIAction_Warning_PointWalk_HPP
#define UE4SS_SDK_BP_AIAction_Warning_PointWalk_HPP

class UBP_AIAction_Warning_PointWalk_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector AttentionPoint;
    double ConstWalkSpeed;
    FVector MoveGoalLocation;
    double AcceptanceDistance;
    double tempDeltaTime;
    double Timer;
    double RandomWalkStartTime;
    FVector TurnR_Direction;
    FVector TurnL_Direction;
    TEnumAsByte<EWarningPalAIMoveType> MoveMode;
    double TimeOutTime;
    class UPalActionBase* TurnAction;

    void CancelTurnAction();
    void PlayActionTurnIfNoneAction(FVector Direction);
    void TurnL45();
    void TurnR45();
    void StartJump();
    void TurnMode();
    void UpdateMoveGoal();
    void SoundEvent(FVector EmitLocation);
    void Setup(FVector AttentionLocation);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_Warning_PointWalk(int32 EntryPoint);
};

#endif
