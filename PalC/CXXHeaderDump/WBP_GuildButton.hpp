#ifndef UE4SS_SDK_WBP_GuildButton_HPP
#define UE4SS_SDK_WBP_GuildButton_HPP

class UWBP_GuildButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_GrayToRed;
    class UWidgetAnimation* Anm_NotmalToFocus;
    class UImage* Base;
    class UImage* Dot_0;
    class UImage* Dot_1;
    class UImage* Dot_2;
    class UImage* Dot_3;
    class UImage* Frame;
    class UImage* Frame_1;
    class UImage* FrameFlare;
    class UBP_PalTextBlock_C* Text_Title;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    bool IsRedButton;
    FDataTableRowHandle MsgID;
    FWBP_GuildButton_COnClicked OnClicked;
    void OnClicked();

    void SetEnableButton(bool IsEnableFlag);
    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void BndEvt__WBP_GuildButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_GuildButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_GuildButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_GuildButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
