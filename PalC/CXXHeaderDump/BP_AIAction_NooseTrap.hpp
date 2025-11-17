#ifndef UE4SS_SDK_BP_AIAction_NooseTrap_HPP
#define UE4SS_SDK_BP_AIAction_NooseTrap_HPP

class UBP_AIAction_NooseTrap_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AActor* TrapActor;
    FVector DeadVelocity;
    class UPalActionBase* PlayedAction;

    void ActionStart(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_NooseTrap(int32 EntryPoint);
};

#endif
