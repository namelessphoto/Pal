#ifndef UE4SS_SDK_BP_AIAction_NPC_RelaxBase_HPP
#define UE4SS_SDK_BP_AIAction_NPC_RelaxBase_HPP

class UBP_AIAction_NPC_RelaxBase_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APalCharacter* SelfActor;
    FTimerHandle UnequipTimer;
    FVector DefaultLocation;
    FVector DefaultForward;
    bool IsReturnDefaultLocationAI;
    bool IsDefaultLocationMotionPlayMode;
    class UPalActionBase* DefaultLocationAction;
    TSubclassOf<class UPalActionBase> DefaultActionClass;
    EPalActionType DefaultActionType;
    double tempDeltaTime;
    FRotator DefaultRotate;
    bool IsDefaultLocationForceSet;
    bool IsSkipSight;
    FTimerHandle SightSkipTimer;
    class AActor* CurrentTarget;
    EPalAIResponseType CurrentResponse;
    bool IgnoreTalkAction;

    void PlayDefaultAction();
    void CancelDefaultAction();
    void SelfIsLeader(bool& IsLeader);
    void SoundEvent(FVector EmitLocation);
    void ActionResume(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void カスタムイベント_0();
    void ActionStart(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void SetSightSkipFlag();
    void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_NPC_RelaxBase(int32 EntryPoint);
};

#endif
