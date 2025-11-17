#ifndef UE4SS_SDK_WBP_InGame_Match_SignalStart_HPP
#define UE4SS_SDK_WBP_InGame_Match_SignalStart_HPP

class UWBP_InGame_Match_SignalStart_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Fight;
    class UWidgetAnimation* Anm_Ready;
    class UBP_PalTextBlock_C* Text_Fight;
    class UBP_PalTextBlock_C* Text_Fight_1;
    class UBP_PalTextBlock_C* Text_Fight_2;
    class UBP_PalTextBlock_C* Text_Ready;

    void SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalStart_0();
    void SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalStart();
    void SequenceEvent();
    void SequenceEvent_0();
    void ExecuteUbergraph_WBP_InGame_Match_SignalStart(int32 EntryPoint);
};

#endif
