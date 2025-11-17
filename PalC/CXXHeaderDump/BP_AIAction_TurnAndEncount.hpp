#ifndef UE4SS_SDK_BP_AIAction_TurnAndEncount_HPP
#define UE4SS_SDK_BP_AIAction_TurnAndEncount_HPP

class UBP_AIAction_TurnAndEncount_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TargetAct;
    bool Turning;
    bool Propagated;
    class UPawnAction_BlueprintBase* tempAction;
    bool IsCanceled;
    bool IsDelayStop;
    double TurnTimer;
    double Const_TurnEndTime;
    class UPalActionBase* TurnAction;
    double tempDeltaTime;
    TSubclassOf<class UPalAIActionBase> CombatAIActionClass;
    bool SkipEncout;

    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_TurnAndEncount(int32 EntryPoint);
};

#endif
