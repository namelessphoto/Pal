#ifndef UE4SS_SDK_WBP_WorkSuitabilityPreference_HPP
#define UE4SS_SDK_WBP_WorkSuitabilityPreference_HPP

class UWBP_WorkSuitabilityPreference_C : public UPalUIWorkSuitabilitySelect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UWBP_WorkSuitabilityPreferenceMenu_C* WBP_WorkSuitabilityPreferenceMenu;
    FPalDataTableRowName_UIInputAction ToggleWorkerDetailInputAction;
    bool IsDisplayDetail;

    void OnTrigger_ToggleDetail();
    void Setup();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature(bool IsOn, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* TargetSlot);
    void BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature(bool CanBattle, class UPalIndividualCharacterSlot* Slot);
    void ExecuteUbergraph_WBP_WorkSuitabilityPreference(int32 EntryPoint);
};

#endif
