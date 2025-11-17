#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_FilterContent_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_FilterContent_HPP

class UWBP_IngameMenu_Chest_FilterContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;
    class UPalCheckBox* PalCheckBox_43;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_IngameMenu_Chest_FilterContent_COnClickedCheckButton OnClickedCheckButton;
    void OnClickedCheckButton(FName FilterId, bool bChecked);
    FName FilterId;

    void On Changed State Internal(bool IsChecked);
    void OnUpdateFilterPreference(class UPalItemContainer* ItemContainer);
    void RegisterEvents(class UPalUIItemChestFilterModel* Model);
    void SetupUI(FName FilterId, FName TextId);
    void BndEvt__WBP_IngameMenu_Chest_FilterContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_Chest_FilterContent(int32 EntryPoint);
    void OnClickedCheckButton__DelegateSignature(FName FilterId, bool bChecked);
};

#endif
