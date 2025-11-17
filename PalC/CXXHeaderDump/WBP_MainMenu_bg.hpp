#ifndef UE4SS_SDK_WBP_MainMenu_bg_HPP
#define UE4SS_SDK_WBP_MainMenu_bg_HPP

class UWBP_MainMenu_bg_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_bg_Open;
    class UCanvasPanel* IngameMenu_Foot;
    class UBP_PalTextBlock_C* Text_Title;
    bool bIsDisplayFooter;

    void SetText(FText Text);
    void Anm_Open();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_MainMenu_bg(int32 EntryPoint);
};

#endif
