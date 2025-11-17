#ifndef UE4SS_SDK_BP_ActionFriendlyLookat_HPP
#define UE4SS_SDK_BP_ActionFriendlyLookat_HPP

class UBP_ActionFriendlyLookat_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagra;
    double Offset;

    void ChangeFace(bool Smile);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionFriendlyLookat(int32 EntryPoint);
};

#endif
