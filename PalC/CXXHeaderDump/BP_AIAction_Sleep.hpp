#ifndef UE4SS_SDK_BP_AIAction_Sleep_HPP
#define UE4SS_SDK_BP_AIAction_Sleep_HPP

class UBP_AIAction_Sleep_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool DeepSleep;
    class UPalActionComponent* ActionComp;
    class APawn* PawnSelf;
    class UPalActionBase* SleepAction;

    void OnDamageDelegate_イベント_0(FPalDamageResult DamageResult);
    void ActionStart(class APawn* ControlledPawn);
    void OnAllActionFinishDelegate_イベント_0(const class UPalActionComponent* ActionComponent);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ExecuteUbergraph_BP_AIAction_Sleep(int32 EntryPoint);
};

#endif
