#ifndef UE4SS_SDK_BP_AIAction_BaseCamp_Trantrum_HPP
#define UE4SS_SDK_BP_AIAction_BaseCamp_Trantrum_HPP

class UBP_AIAction_BaseCamp_Trantrum_C : public UPalAIActionBaseCampTrantrum
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle Timer;
    class UNiagaraComponent* Niagara;

    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void カスタムイベント_0();
    void ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum(int32 EntryPoint);
};

#endif
