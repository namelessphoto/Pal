#ifndef UE4SS_SDK_BP_AIAction_Trap_MovingPanel_HPP
#define UE4SS_SDK_BP_AIAction_Trap_MovingPanel_HPP

class UBP_AIAction_Trap_MovingPanel_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalActionBase* ActionInst;

    void OnChangeTrapExist(bool Exist);
    void GetCPC(class UPalCharacterParameterComponent*& CPC);
    void ActionStart(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_Trap_MovingPanel(int32 EntryPoint);
};

#endif
