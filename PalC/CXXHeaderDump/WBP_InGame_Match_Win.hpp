#ifndef UE4SS_SDK_WBP_InGame_Match_Win_HPP
#define UE4SS_SDK_WBP_InGame_Match_Win_HPP

class UWBP_InGame_Match_Win_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Win;
    class UBP_PalTextBlock_C* Text_Win_Name;

    void SetWinner(FText InText);
    void ExecuteUbergraph_WBP_InGame_Match_Win(int32 EntryPoint);
};

#endif
