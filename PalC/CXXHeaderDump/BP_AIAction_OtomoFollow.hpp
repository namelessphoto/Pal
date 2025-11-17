#ifndef UE4SS_SDK_BP_AIAction_OtomoFollow_HPP
#define UE4SS_SDK_BP_AIAction_OtomoFollow_HPP

class UBP_AIAction_OtomoFollow_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APalCharacter* Trainer;
    class APawn* SelfActor;
    bool IsMoveMode;
    FVector Destination;
    double CurrentMoveSpeedRate;
    class UPalCharacterMovementComponent* Movement;
    double tempDeltaTime;
    TEnumAsByte<EOtomoFollowState> FollowState;
    double FolowEndDistance;
    FVector DelayedDestination;
    double DefaultMaxSpeed;
    double ConstMaxSpeedRateVsPlayer;
    double CurrentSpeedVsPlayer;
    bool IsTurnMode;
    double SprintSpeedVsPlayer;
    double DelayedTrainerYawDegree;
    double WarpTimer;
    FVector PreSelfLocation;
    bool JumpAble;
    bool PlayerDelayJumpAble;
    bool IsForceFitGoal;
    float TargetLocationDistanceForward;
    float TargetLocationDistanceRight;
    int32 DebugType;

    void IsFishing(bool& IsFishing);
    void UpdateReturnTooFar();
    void IsTurnInBuildingMode(bool& IsTurn);
    void IsBuildingMode(bool& IsBuilding);
    void GetTargetLocationInBuildingMode(FVector& Location);
    void GetFollowSpeedFromController(double& FollowSpeed);
    void GetFollowInterpolatedPosFromController(FVector& FollowInterpolatedPos);
    void TryGetTrainer(class APalCharacter*& Trainer);
    void ForwardRayCheckJump(bool& DoJump);
    void SetInitialValue();
    void PlayerCameraCheck(bool& InCamera);
    void DoWarpNearPlayer();
    void TryWarpToPlayer();
    void DelayTrainerYaw();
    void GetTargetLocationInFishing(FVector& Location);
    void GetTargetLocationInAim(FVector& Location);
    void GetTargetLocationInHighSpeed(FVector& Location);
    void GetTargetLocationInWalk(FVector& Location);
    void ChangeStateByRange();
    void targetPosition_2();
    void Speed Control(double DeltaTime);
    void OnFail_1EB8A4B348D9F7922741CD9438D88086(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnSuccess_1EB8A4B348D9F7922741CD9438D88086(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnFail_F8B4E13F434B182E285FEEA53BAAED7C(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnSuccess_F8B4E13F434B182E285FEEA53BAAED7C(TEnumAsByte<EPathFollowingResult> MovementResult);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void PlayerJumpEvent(class UPalCharacterMovementComponent* Component);
    void ActionAbort(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_OtomoFollow(int32 EntryPoint);
};

#endif
