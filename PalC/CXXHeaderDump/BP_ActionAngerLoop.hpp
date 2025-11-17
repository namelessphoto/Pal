#ifndef UE4SS_SDK_BP_ActionAngerLoop_HPP
#define UE4SS_SDK_BP_ActionAngerLoop_HPP

class UBP_ActionAngerLoop_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    FTimerHandle Timer;

    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void カスタムイベント_0();
    void ExecuteUbergraph_BP_ActionAngerLoop(int32 EntryPoint);
};

#endif
