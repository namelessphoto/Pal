#ifndef UE4SS_SDK_WBP_MainMenu_Pal_WorkIconText_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_WorkIconText_HPP

class UWBP_MainMenu_Pal_WorkIconText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;
    class UCanvasPanel* CanvasPanel_2;
    class UHorizontalBox* HorizontalBox_0;
    class UBP_PalTextBlock_C* Text_Title;
    class UWBP_MainMenu_Pal_WorkIcon_C* WBP_MainMenu_Pal_WorkIcon;

    void Set Suitability(EPalWorkSuitability Suitability, int32 Rank);
    void AnmEvent_OffToOn();
    void AnmEvent_ForceOff();
    void ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText(int32 EntryPoint);
};

#endif
