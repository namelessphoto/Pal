#ifndef UE4SS_SDK_WBP_Notice_HPP
#define UE4SS_SDK_WBP_Notice_HPP

class UWBP_Notice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Visit_Close;
    class UWidgetAnimation* Anm_Visit_Open;
    class UWidgetAnimation* Anm_Raid_Close;
    class UWidgetAnimation* Anm_Raid_Open;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_84;
    class UImage* Icon_notice;
    class UImage* Icon_notice_Shadow;
    class UImage* Notice_base_C;
    class UImage* Notice_base_C_1;
    class UImage* Notice_base_L;
    class UImage* Notice_base_L_1;
    class UImage* Notice_base_R;
    class UImage* Notice_base_R_1;
    FWBP_Notice_COnOpened OnOpened;
    void OnOpened();
    FWBP_Notice_COnClosed OnClosed;
    void OnClosed();

    void SetText(FText Text);
    void HideIcon();
    void SetIconTexture(class UTexture2D* Texture);
    void Finished_77B22E4B4836BC8AB8B4A08F2691F416();
    void Finished_6DE1EEED4A47BC160DDFEBA700165427();
    void Finished_6F0CFBFE4FFC647FC29A08AD10869738();
    void Finished_1C35836941B88D2824102B8E8EC65295();
    void AnmEvent_Open_Negative();
    void AnmEvent_Close_Negative();
    void AnmEvent_Open_Positive();
    void AnmEvent_Close_Positive();
    void ExecuteUbergraph_WBP_Notice(int32 EntryPoint);
    void OnClosed__DelegateSignature();
    void OnOpened__DelegateSignature();
};

#endif
