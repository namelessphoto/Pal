#ifndef UE4SS_SDK_BP_AIAction_WildLife_HPP
#define UE4SS_SDK_BP_AIAction_WildLife_HPP

class UBP_AIAction_WildLife_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector SpawnedPosition;
    FVector GoalPosition;
    bool InitEnd;
    FVector PrePos;
    FTimerHandle StackTimerHandle;
    FVector SpawnerLocation;
    double WalkingTimer;
    double tempDeltaTime;
    bool RestMode;
    double FollowRandomDistance;
    FTimerHandle StateUpdateTimerHandle;
    FVector RestStartPosition;
    TEnumAsByte<EWildPalAIMoveMode> MoveMode;
    TEnumAsByte<EWildPalAIRestType> RestType;
    double WalkingRadius;
    bool IsGroupBehavior;
    bool IsCancelThisAIAction;
    bool IsTickStop;
    FTimerHandle TickStopTimer;
    FTimerHandle DrinkWaterTimerHandle;
    bool DrinkWaterCheckFlag;
    class AActor* CurrentTarget;
    EPalAIResponseType CurrentResponse;
    bool IsSleep;

    void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds);
    void CheckDrinkWater_ForNotLeader(bool& ChangeAction);
    void SetDrinkWaterFlag();
    void CheckDrinkWater_ForLeader(bool& ChangeState);
    void IsSleepTime(bool& Sleep);
    void ResetSelfAction();
    void PlayNightSleep();
    void RandomRestModeStart();
    void GetLeaderRestMode(bool& Rest);
    void StateUpdate();
    void FollowLeader();
    void SoundEvent(FVector EmitLocation);
    void GetMyLocation(FVector& NewParam);
    void ChangeNextMovePosition(double Radius, FVector CenterPos);
    void OnFail_D878AC8F4430A5C3183029AD1B4F53CF(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnSuccess_D878AC8F4430A5C3183029AD1B4F53CF(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnFail_B707D59048A2C3D7CD1D13834143E5F8(TEnumAsByte<EPathFollowingResult> MovementResult);
    void OnSuccess_B707D59048A2C3D7CD1D13834143E5F8(TEnumAsByte<EPathFollowingResult> MovementResult);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void カスタムイベント_Stack();
    void RestModeUpdate(bool Nest);
    void MoveAndAction(EPalActionType action);
    void RestModeWalk();
    void ActionAbort(class APawn* ControlledPawn);
    void Event_StopFalse();
    void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_WildLife(int32 EntryPoint);
};

#endif
