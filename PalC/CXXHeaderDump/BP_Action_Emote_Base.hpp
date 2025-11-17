#ifndef UE4SS_SDK_BP_Action_Emote_Base_HPP
#define UE4SS_SDK_BP_Action_Emote_Base_HPP

class UBP_Action_Emote_Base_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* EmoteAnimation;
    bool IsEnableInputEnd;
    int32 EmoteIndex;

    void OnNotify(FName Value);
    void SetMoveEnable(bool Enable);
    void OnNotifyEnd_11A0523F4A84359AD4CD3E999BE200ED(FName NotifyName);
    void OnNotifyBegin_11A0523F4A84359AD4CD3E999BE200ED(FName NotifyName);
    void OnInterrupted_11A0523F4A84359AD4CD3E999BE200ED(FName NotifyName);
    void OnBlendOut_11A0523F4A84359AD4CD3E999BE200ED(FName NotifyName);
    void OnCompleted_11A0523F4A84359AD4CD3E999BE200ED(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Emote_Base(int32 EntryPoint);
};

#endif
