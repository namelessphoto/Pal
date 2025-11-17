#ifndef UE4SS_SDK_WBP_MapMarker_Content_HPP
#define UE4SS_SDK_WBP_MapMarker_Content_HPP

class UWBP_MapMarker_Content_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* FrameFlare;
    class UImage* Icon;
    class UCanvasPanel* Select;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    int32 Index;
    FWBP_MapMarker_Content_COnClicked OnClicked;
    void OnClicked(int32 Index);

    void BndEvt__WBP_MapMarker_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MapMarker_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MapMarker_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetIndex(int32 Index, class UTexture2D* Texture);
    void SetSelected(bool IsSelected);
    void SetUnhovered();
    void ExecuteUbergraph_WBP_MapMarker_Content(int32 EntryPoint);
    void OnClicked__DelegateSignature(int32 Index);
};

#endif
