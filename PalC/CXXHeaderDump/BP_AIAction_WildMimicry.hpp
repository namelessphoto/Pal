#ifndef UE4SS_SDK_BP_AIAction_WildMimicry_HPP
#define UE4SS_SDK_BP_AIAction_WildMimicry_HPP

class UBP_AIAction_WildMimicry_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalActionBase* MimicAction;

    void On Damage Mimicry(FPalDamageResult DamageResult);
    void ActionStart(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_WildMimicry(int32 EntryPoint);
};

#endif
