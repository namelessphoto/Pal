#ifndef UE4SS_SDK_WBP_ItemGet_HPP
#define UE4SS_SDK_WBP_ItemGet_HPP

class UWBP_ItemGet_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Close;
    class UWidgetAnimation* Anm_Open;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_C_128;
    class UImage* ItemGet_base_C;
    class UImage* ItemGet_base_L;
    class UImage* ItemGet_base_R;
    class UImage* ItemIcon;
    class UImage* ItemIcon_Shadow;
    FWBP_ItemGet_COnOpened OnOpened;
    void OnOpened();
    FWBP_ItemGet_COnClosed OnClosed;
    void OnClosed();

    void SetDefaultFontStyleName(FName StyleName);
    void ChangeBgColor(FLinearColor Color);
    void SetText(FText Text);
    void HideIcon();
    void SetIconTexture(class UTexture2D* Texture);
    void Finished_1F002FD94DF611BBD1EF47BE09B9889B();
    void Finished_841401E94A6018595306E0AC3B421AB7();
    void AnmEvent_Open();
    void AnmEvent_Close();
    void ExecuteUbergraph_WBP_ItemGet(int32 EntryPoint);
    void OnClosed__DelegateSignature();
    void OnOpened__DelegateSignature();
};

#endif
