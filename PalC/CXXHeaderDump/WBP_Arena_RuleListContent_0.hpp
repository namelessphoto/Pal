#ifndef UE4SS_SDK_WBP_Arena_RuleListContent_0_HPP
#define UE4SS_SDK_WBP_Arena_RuleListContent_0_HPP

class UWBP_Arena_RuleListContent_0_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UImage* Image_ChangeMark;
    class USizeBox* SizeBox_Button;
    class USizeBox* SizeBox_Slider;
    class USizeBox* SizeBox_Switch;
    class UWBP_OptionSettings_ListContentSlider_C* WBP_OptionSettings_ListContentSlider;
    class UWBP_OptionSettings_ListContentSwitch_C* WBP_OptionSettings_ListContentSwitch;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    class UWBP_Title_WorldSettings_ListButton_C* WBP_Title_WorldSettings_ListButton;
    FDataTableRowHandle SettingName;
    bool Is Changeable;
    FWBP_Arena_RuleListContent_0_COnContentHovered OnContentHovered;
    void OnContentHovered(class UWidget* Button);
    double Change Value;
    FWBP_Arena_RuleListContent_0_COnContentUnhovered OnContentUnhovered;
    void OnContentUnhovered();

    class UWidget* Custom Navigation ToRight(EUINavigation Navigation);
    class UWidget* Custom Navigation ToLeft(EUINavigation Navigation);
    void SetChangeable(bool IsChangeable);
    void SetChangedFlag();
    void SetupButton(const FSetupButtonOnClickEvent& OnClickEvent, FText ButtonText);
    void SetupSlider_Int(int32 Value, int32 Min, int32 Max, const FSetupSlider_IntEvent& Event, double ChangeValue);
    void SetupSlider(double Value, double Min, double Max, const FSetupSliderEvent& Event, double ChangeValue);
    void SetupSwitch(bool IsTure, const FSetupSwitchOnSwitchEvent& OnSwitchEvent);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void Construct();
    void BndEvt__WBP_Arena_RuleListContent_0_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_RuleListContent_0_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_RuleListContent_0_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_RuleListContent_0(int32 EntryPoint);
    void OnContentUnhovered__DelegateSignature();
    void OnContentHovered__DelegateSignature(class UWidget* Button);
};

#endif
