#ifndef UE4SS_SDK_WBP_MainMenu_Technology_SortCheckBox_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_SortCheckBox_HPP

class UWBP_MainMenu_Technology_SortCheckBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalCheckBox* PalCheckBox_43;
    class UBP_PalTextBlock_C* Text_Title;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_MainMenu_Technology_SortCheckBox_COnItemFilterChanged OnItemFilterChanged;
    void OnItemFilterChanged(EPalItemTypeA ItemType, bool Enabled);
    EPalItemTypeA Item Type;
    EPalBuildObjectTypeA Build Type;
    FWBP_MainMenu_Technology_SortCheckBox_COnBuildFilterChanged OnBuildFilterChanged;
    void OnBuildFilterChanged(EPalBuildObjectTypeA BuildType, bool Enabled);

    void BndEvt__WBP_MainMenu_Technology_SortCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetupAsItem(EPalItemTypeA ItemType, bool CheckState);
    void SetCheckState(bool Check);
    void SetupAsBuild(EPalBuildObjectTypeA BuildType, bool CheckState);
    void ExecuteUbergraph_WBP_MainMenu_Technology_SortCheckBox(int32 EntryPoint);
    void OnBuildFilterChanged__DelegateSignature(EPalBuildObjectTypeA BuildType, bool Enabled);
    void OnItemFilterChanged__DelegateSignature(EPalItemTypeA ItemType, bool Enabled);
};

#endif
