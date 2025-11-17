#ifndef UE4SS_SDK_WBP_PalStorageSortWorkSuitabilityFilterCheckBox_HPP
#define UE4SS_SDK_WBP_PalStorageSortWorkSuitabilityFilterCheckBox_HPP

class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalCheckBox* PalCheckBox_43;
    class UBP_PalTextBlock_C* Text_Title;
    class UWBP_IconPalWork_C* WBP_IconPalWork;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    EPalWorkSuitability BindSuitability;
    FWBP_PalStorageSortWorkSuitabilityFilterCheckBox_COnClicked OnClicked;
    void OnClicked(bool bChecked, EPalWorkSuitability WorkSuitbility);

    void SetCheckedState(bool bChecked);
    void OnChangedStateInternal(bool IsChecked);
    void SetWorkSuitability(EPalWorkSuitability WorkSuitability);
    void BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_PalStorageSortWorkSuitabilityFilterCheckBox(int32 EntryPoint);
    void OnClicked__DelegateSignature(bool bChecked, EPalWorkSuitability WorkSuitbility);
};

#endif
