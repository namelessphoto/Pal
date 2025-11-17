#ifndef UE4SS_SDK_WBP_GuildHeadButton_HPP
#define UE4SS_SDK_WBP_GuildHeadButton_HPP

class UWBP_GuildHeadButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* FrameFlare;
    class UCanvasPanel* LogHead;
    class UPalComboBoxString* PalComboBoxString_15;
    class UImage* TabIconBase;
    class UBP_PalTextBlock_C* Text_Center;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_GuildHeadButton_COnSelected OnSelected;
    void OnSelected(FString SelectedOption);
    FWBP_GuildHeadButton_COnClickedSingleButton OnClickedSingleButton;
    void OnClickedSingleButton();
    FWBP_GuildHeadButton_COnOpenedDropDown OnOpenedDropDown;
    void OnOpenedDropDown();
    FWBP_GuildHeadButton_COnRemovedFocus OnRemovedFocus;
    void OnRemovedFocus();
    FWBP_GuildHeadButton_COnAddFocus OnAddFocus;
    void OnAddFocus();

    void SetValue(FString Value);
    void SetupAsSingleButton(FText Text);
    void SetOptions(TArray<FString>& OptionStrings);
    void OnClickedComboBoxContent(class UWBP_GuildMemberMenuList_C* Button);
    class UWidget* OnGenerateWidget(FString Item);
    void OnInitialized();
    void BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
    void BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_GuildHeadButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_GuildHeadButton_PalComboBoxString_15_K2Node_ComponentBoundEvent_4_OnOpeningEvent__DelegateSignature();
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_WBP_GuildHeadButton(int32 EntryPoint);
    void OnAddFocus__DelegateSignature();
    void OnRemovedFocus__DelegateSignature();
    void OnOpenedDropDown__DelegateSignature();
    void OnClickedSingleButton__DelegateSignature();
    void OnSelected__DelegateSignature(FString SelectedOption);
};

#endif
