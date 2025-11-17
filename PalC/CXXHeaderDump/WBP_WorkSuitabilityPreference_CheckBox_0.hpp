#ifndef UE4SS_SDK_WBP_WorkSuitabilityPreference_CheckBox_0_HPP
#define UE4SS_SDK_WBP_WorkSuitabilityPreference_CheckBox_0_HPP

class UWBP_WorkSuitabilityPreference_CheckBox_0_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_None;
    class UPalCheckBox* PalCheckBox;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_0;
    bool IsEnableCheckBox;
    FWBP_WorkSuitabilityPreference_CheckBox_0_COnCheckStateChanged OnCheckStateChanged;
    void OnCheckStateChanged(bool IsChecked, EPalWorkSuitability Suitability);
    EPalWorkSuitability BindedSuitability;
    bool IsBattleSettingMode;
    FWBP_WorkSuitabilityPreference_CheckBox_0_COnHoveredCheckBox OnHoveredCheckBox;
    void OnHoveredCheckBox(class UWBP_WorkSuitabilityPreference_CheckBox_0_C* SelfWidget);

    void IsBattleSettingCheckBox(bool& IsBattleSetting);
    void Setup_ForBattleSetting();
    void SetCheckedState(bool IsChecked);
    void GetBindedSuitability(EPalWorkSuitability& Suitability);
    void Setup(EPalWorkSuitability BindSuitability);
    void SetEnableClick(bool IsEnable);
    void BndEvt__WBP_WorkSuitabilityPreference_CheckBox_0_WBP_PalInvisibleButton_0_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_WorkSuitabilityPreference_CheckBox_0_PalCheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_WorkSuitabilityPreference_CheckBox_0_WBP_PalInvisibleButton_0_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_WorkSuitabilityPreference_CheckBox_0(int32 EntryPoint);
    void OnHoveredCheckBox__DelegateSignature(class UWBP_WorkSuitabilityPreference_CheckBox_0_C* SelfWidget);
    void OnCheckStateChanged__DelegateSignature(bool IsChecked, EPalWorkSuitability Suitability);
};

#endif
