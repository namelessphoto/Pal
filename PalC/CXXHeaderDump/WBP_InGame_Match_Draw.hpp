#ifndef UE4SS_SDK_WBP_InGame_Match_Draw_HPP
#define UE4SS_SDK_WBP_InGame_Match_Draw_HPP

class UWBP_InGame_Match_Draw_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Draw;

    void SequenceEvent__ENTRYPOINTWBP_InGame_Match_Draw();
    void SequenceEvent();
    void ExecuteUbergraph_WBP_InGame_Match_Draw(int32 EntryPoint);
};

#endif
