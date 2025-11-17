#ifndef UE4SS_SDK_WBP_InGame_Match_SignalFinish_HPP
#define UE4SS_SDK_WBP_InGame_Match_SignalFinish_HPP

class UWBP_InGame_Match_SignalFinish_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Finish;
    class UBP_PalTextBlock_C* Text_Finish;
    class UBP_PalTextBlock_C* Text_Finish_1;
    class UBP_PalTextBlock_C* Text_Finish_2;

    void SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalFinish();
    void SequenceEvent();
    void ExecuteUbergraph_WBP_InGame_Match_SignalFinish(int32 EntryPoint);
};

#endif
