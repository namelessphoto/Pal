#ifndef UE4SS_SDK_BP_ActionSurprised_HPP
#define UE4SS_SDK_BP_ActionSurprised_HPP

class UBP_ActionSurprised_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagra;
    double Timer;

    void ChangeFace(bool Angry);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionSurprised(int32 EntryPoint);
};

#endif
