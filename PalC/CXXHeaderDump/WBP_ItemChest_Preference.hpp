#ifndef UE4SS_SDK_WBP_ItemChest_Preference_HPP
#define UE4SS_SDK_WBP_ItemChest_Preference_HPP

class UWBP_ItemChest_Preference_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UWBP_IngameMenu_Chest_Filter_C* WBP_IngameMenu_Chest_Filter;
    class UPalUIItemChestFilterModel* PreferenceModel;

    void OnClickedCheck(FName FilterId, bool bChecked);
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void OnSetup();
    void BndEvt__WBP_ItemChest_Preference_WBP_IngameMenu_Chest_Filter_K2Node_ComponentBoundEvent_1_OnClickedCloseButton__DelegateSignature();
    void Construct();
    void BndEvt__WBP_ItemChest_Preference_WBP_IngameMenu_Chest_Filter_K2Node_ComponentBoundEvent_0_OnClickedAllCheckButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_Preference_WBP_IngameMenu_Chest_Filter_K2Node_ComponentBoundEvent_2_OnClickedAllUncheckButton__DelegateSignature();
    void ExecuteUbergraph_WBP_ItemChest_Preference(int32 EntryPoint);
};

#endif
