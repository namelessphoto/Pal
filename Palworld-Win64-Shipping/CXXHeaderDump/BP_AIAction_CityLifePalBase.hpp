#ifndef UE4SS_SDK_BP_AIAction_CityLifePalBase_HPP
#define UE4SS_SDK_BP_AIAction_CityLifePalBase_HPP

class UBP_AIAction_CityLifePalBase_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class APalCharacter* SelfActor;
    FTimerHandle UnequipTimer;
    FVector DefaultLocation;
    FVector DefaultForward;
    bool IsReturnDefaultLocationAI;
    bool IsDefaultLocationMotionPlayMode;
    class UPalActionBase* DefaultLocationAction;
    double tempDeltaTime;
    FRotator DefaultRotate;
    bool IsDefaultLocationForceSet;
    bool IsSkipSight;
    FTimerHandle SightSkipTimer;
    class AActor* CurrentTarget;
    EPalAIResponseType CurrentResponse;
    TSubclassOf<class UPalActionBase> actionClass;

    void SetDefaultActionClass(TSubclassOf<class UPalActionBase> action);
    void PlayDefaultAction();
    void CancelDefaultAction();
    void SelfIsLeader(bool& IsLeader);
    void SoundEvent(FVector EmitLocation);
    void ActionPause(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionStart(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_CityLifePalBase(int32 EntryPoint);
};

#endif
