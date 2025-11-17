#ifndef UE4SS_SDK_BP_ActionInteractBase_Player_HPP
#define UE4SS_SDK_BP_ActionInteractBase_Player_HPP

class UBP_ActionInteractBase_Player_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle CheckEndCancelTimer;

    void OnPlayEndMontage(double EndMontageLength);
    void OnMontageEnd();
    void OnNotifyEnd_36D51E3C4259C62DFB5AF89FB171675F(FName NotifyName);
    void OnNotifyBegin_36D51E3C4259C62DFB5AF89FB171675F(FName NotifyName);
    void OnInterrupted_36D51E3C4259C62DFB5AF89FB171675F(FName NotifyName);
    void OnBlendOut_36D51E3C4259C62DFB5AF89FB171675F(FName NotifyName);
    void OnCompleted_36D51E3C4259C62DFB5AF89FB171675F(FName NotifyName);
    void CheckEndCancel();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionInteractBase_Player(int32 EntryPoint);
};

#endif
