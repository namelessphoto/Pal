#ifndef UE4SS_SDK_WBP_PalStorageSortElementFilterCheckBox_HPP
#define UE4SS_SDK_WBP_PalStorageSortElementFilterCheckBox_HPP

class UWBP_PalStorageSortElementFilterCheckBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalCheckBox* PalCheckBox_43;
    class UBP_PalTextBlock_C* Text_Title;
    class UWBP_PalElementIcon_C* WBP_PalElementIcon;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    EPalElementType BindElementType;
    FWBP_PalStorageSortElementFilterCheckBox_COnClicked OnClicked;
    void OnClicked(bool bChecked, EPalElementType ElementType);

    void SetCheckedState(bool bChecked);
    void OnChangedStateInternal(bool IsChecked);
    void SetElementType(EPalElementType ElenemtType);
    void BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_PalStorageSortElementFilterCheckBox(int32 EntryPoint);
    void OnClicked__DelegateSignature(bool bChecked, EPalElementType ElementType);
};

#endif
