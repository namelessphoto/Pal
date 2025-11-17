#ifndef UE4SS_SDK_BP_AIAction_AlertByKilledFriend_HPP
#define UE4SS_SDK_BP_AIAction_AlertByKilledFriend_HPP

class UBP_AIAction_AlertByKilledFriend_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<EPal_AI_AlertByKilledFriendState> CurrentState;
    TMap<TEnumAsByte<EPal_AI_AlertByKilledFriendState>, TSubclassOf<UPalStateMachineStateBase_BlueprintBase>> StateMap;
    class UPalStateMachine* StateMacine;
    class AActor* DeadBody;
    FVector DeadLocation;
    class AActor* SelfActor;
    double Timer;
    double tempDeltaTime;

    void LineTraceGround(FVector CenterPos, bool& IsHit, FVector& HitPos);
    void StopMovement();
    void MoveToDeadBody();
    void ChangeNextState(TEnumAsByte<EPal_AI_AlertByKilledFriendState> Next);
    void AddState(TEnumAsByte<EPal_AI_AlertByKilledFriendState> NewParam);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionAbort(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_AlertByKilledFriend(int32 EntryPoint);
};

#endif
