#ifndef UE4SS_SDK_BP_AIAction_LargeDown_HPP
#define UE4SS_SDK_BP_AIAction_LargeDown_HPP

class UBP_AIAction_LargeDown_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalActionBase* DownAction;

    void ExistMontage(bool& Exist);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_LargeDown(int32 EntryPoint);
};

#endif
