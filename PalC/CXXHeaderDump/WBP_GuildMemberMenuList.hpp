#ifndef UE4SS_SDK_WBP_GuildMemberMenuList_HPP
#define UE4SS_SDK_WBP_GuildMemberMenuList_HPP

class UWBP_GuildMemberMenuList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* FocusBase;
    class UImage* Frame;
    class UBP_PalTextBlock_C* Text_Title;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_GuildMemberMenuList_COnClicked OnClicked;
    void OnClicked(class UWBP_GuildMemberMenuList_C* Button);

    void GetBindedTextString(FString& OutString);
    void SetText(FText newText);
    void BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_GuildMemberMenuList(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
};

#endif
