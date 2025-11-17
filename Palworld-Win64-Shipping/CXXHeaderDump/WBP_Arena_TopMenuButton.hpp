#ifndef UE4SS_SDK_WBP_Arena_TopMenuButton_HPP
#define UE4SS_SDK_WBP_Arena_TopMenuButton_HPP

class UWBP_Arena_TopMenuButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UWidgetAnimation* Anm_FocusLoop;
    class UCanvasPanel* Canvas_Lock;
    class UImage* Image_Add;
    class UImage* Image_Add_1;
    class UImage* Image_Button;
    class UImage* Image_Button_Add;
    class UPalRetainerBox* PalRetainerBox_117;
    class UBP_PalTextBlock_C* Text_ButtonName;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_Arena_TopMenuButton_COnArenaButtonClicked OnArenaButtonClicked;
    void OnArenaButtonClicked();
    bool isFocused;
    FWBP_Arena_TopMenuButton_COnArenaButtonHovered OnArenaButtonHovered;
    void OnArenaButtonHovered();
    FWBP_Arena_TopMenuButton_COnArenaButtonUnhovered OnArenaButtonUnhovered;
    void OnArenaButtonUnhovered();
    double AnmTime;
    bool Is Lock;

    void Setup(int32 Type);
    void SetLock(bool IsLock);
    void Finished_F552AADE467C2B4C78B4C5AEAA55800C();
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void AnmEvent_NormalImmediate();
    void Construct();
    void BndEvt__WBP_Arena_TopMenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_TopMenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_TopMenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_TopMenuButton(int32 EntryPoint);
    void OnArenaButtonUnhovered__DelegateSignature();
    void OnArenaButtonHovered__DelegateSignature();
    void OnArenaButtonClicked__DelegateSignature();
};

#endif
