#ifndef UE4SS_SDK_WBP_MainMenu_Technology_SortSettingWindow_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_SortSettingWindow_HPP

class UWBP_MainMenu_Technology_SortSettingWindow_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalCheckBox* PalCheckBox_UnlockTec;
    class UWBP_CommonButton_1_C* WBP_CommonButton_CheckAll;
    class UWBP_CommonButton_1_C* WBP_CommonButton_Confirm;
    class UWBP_CommonButton_1_C* WBP_CommonButton_UncheckAll;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_ShowUnlocked;
    class UWrapBox* WrapBox_Build;
    class UWrapBox* WrapBox_Item;
    TArray<EPalItemTypeA> ItemFilterPrefab;
    FWBP_MainMenu_Technology_SortSettingWindow_COnFilterChanged OnFilterChanged;
    void OnFilterChanged(TSet<EPalItemTypeA> NewItemFilter, TSet<EPalBuildObjectTypeA> NewBuildFilter, bool ShowUnlocked);
    TArray<EPalBuildObjectTypeA> BuildFilterPrefab;
    TSet<EPalItemTypeA> CurrentItemFilter;
    TSet<EPalBuildObjectTypeA> CurrentBuildFilter;
    bool CurrentShowUnlocked;

    class UWidget* Custom Navigation Up(EUINavigation Navigation);
    void SetAll(bool Check);
    void OnBuildFilterChanged(EPalBuildObjectTypeA BuildType, bool CheckState);
    void OnItemFilterChanged(EPalItemTypeA ItemType, bool CheckState);
    void Setup(TSet<EPalItemTypeA> NowItemFilter, TSet<EPalBuildObjectTypeA> NowBuildFilter);
    class UWidget* BP_GetDesiredFocusTarget();
    void BndEvt__WBP_MainMenu_Technology_SortSettingWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_Technology_SortSettingWindow_WBP_CommonButton_Confirm_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnSetup();
    void BndEvt__WBP_MainMenu_Technology_SortSettingWindow_WBP_CommonButton_CheckAll_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_Technology_SortSettingWindow_WBP_CommonButton_UncheckAll_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_Technology_SortSettingWindow_WBP_PalInvisibleButton_ShowUnlocked_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void FocusToConfirm();
    void ExecuteUbergraph_WBP_MainMenu_Technology_SortSettingWindow(int32 EntryPoint);
    void OnFilterChanged__DelegateSignature(TSet<EPalItemTypeA> NewItemFilter, TSet<EPalBuildObjectTypeA> NewBuildFilter, bool ShowUnlocked);
};

#endif
