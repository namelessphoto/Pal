#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_LockSettings_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_LockSettings_HPP

class UWBP_IngameMenu_Chest_LockSettings_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PalInvisibleButton_C* ButtonPrivateLockToggle;
    class UCheckBox* CheckBox_80;
    class UCheckBox* CheckBoxPrivateLock;
    class UHorizontalBox* HorizontalBox_PrivateLock;
    class UWBP_CommonButton_C* WBP_CommonButton;
    class UWBP_CommonButton_C* WBP_CommonButton_1;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    class UPalMapObjectPasswordLockModule* PasswordLockModule;

    class UWidget* CustomNavigation_ToCloseButton(EUINavigation Navigation);
    void OnUpdateItemChestPrivateLock(class UPalMapObjectItemChestModel* ConcreteModel);
    void SetupForPrivateLock(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void SetupForPassword(class UPalMapObjectConcreteModelBase* ConcreteModel);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_CommonButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_Menu_btn_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_PalInvisibleButton_1_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_Chest_LockSettings(int32 EntryPoint);
};

#endif
