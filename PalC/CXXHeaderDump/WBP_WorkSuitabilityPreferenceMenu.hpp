#ifndef UE4SS_SDK_WBP_WorkSuitabilityPreferenceMenu_HPP
#define UE4SS_SDK_WBP_WorkSuitabilityPreferenceMenu_HPP

class UWBP_WorkSuitabilityPreferenceMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_WorkIcon;
    class UImage* Image_Icon_Change;
    class UBP_PalTextBlock_C* Text_WorkerNum;
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;
    class UWBP_Menu_btn_C* WBP_Menu_btn_Close;
    class UWBP_NoData_C* WBP_NoData;
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_PalList;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;
    FWBP_WorkSuitabilityPreferenceMenu_COnClickedCloseButton OnClickedCloseButton;
    void OnClickedCloseButton();
    TArray<class UWBP_IconPalWork_C*> SuitabilityIconArray;
    TSoftObjectPtr<UPalIndividualCharacterContainer> SoftTargetContainer;
    FWBP_WorkSuitabilityPreferenceMenu_COnChangedSuitabilitySetting OnChangedSuitabilitySetting;
    void OnChangedSuitabilitySetting(bool IsOn, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* TargetSlot);
    FWBP_WorkSuitabilityPreferenceMenu_COnChangedBattleModeSetting OnChangedBattleModeSetting;
    void OnChangedBattleModeSetting(bool CanBattle, class UPalIndividualCharacterSlot* Slot);
    TSoftObjectPtr<UPalIndividualCharacterHandle> NowDisplayingCharacterHandle;
    class UWBP_WorlSuitabilityPreference_PalList_C* LastHoveredListWidget;

    class UWidget* GetNextListFocusTarget(int32 TargetListDistance);
    class UWidget* CustomNavi_DownList(EUINavigation Navigation);
    class UWidget* CustomNavi_UpList(EUINavigation Navigation);
    void OnHoveredAnyCheckBox_Internal(class UWBP_WorlSuitabilityPreference_PalList_C* SelfWidget);
    void ArrangeHorizontalBoxSlot_ForSuitabilityIcon(class UHorizontalBoxSlot* Slot);
    void OnChangedBattleModeCheck_Internal(bool IsChecked, class UPalIndividualCharacterSlot* TargetSlot);
    void OnChangedSuitabilityCheck_Internal(bool IsChecked, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* TargetSlot);
    void UpdateWorkerNum();
    void OnUpdateSlotHandle(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void SetEnableWorkerInfo(bool IsEnableInfo);
    void SetupSuitabilityIcon();
    void GetTopFocusTarget_PalList(class UWidget*& Target);
    void GetTopFocusTarget(class UWidget*& TargetWidget);
    void SetTargetContainer(class UPalIndividualCharacterContainer* Container);
    void Construct();
    void Destruct();
    void BndEvt__WBP_WorkSuitabilityPreferenceMenu_WBP_Menu_btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnInitialized();
    void ExecuteUbergraph_WBP_WorkSuitabilityPreferenceMenu(int32 EntryPoint);
    void OnChangedBattleModeSetting__DelegateSignature(bool CanBattle, class UPalIndividualCharacterSlot* Slot);
    void OnChangedSuitabilitySetting__DelegateSignature(bool IsOn, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* TargetSlot);
    void OnClickedCloseButton__DelegateSignature();
};

#endif
