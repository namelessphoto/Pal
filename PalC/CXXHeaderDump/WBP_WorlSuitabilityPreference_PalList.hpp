#ifndef UE4SS_SDK_WBP_WorlSuitabilityPreference_PalList_HPP
#define UE4SS_SDK_WBP_WorlSuitabilityPreference_PalList_HPP

class UWBP_WorlSuitabilityPreference_PalList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_FixedAssign;
    class UCanvasPanel* CanvasPanel_FreeAssign;
    class UCanvasPanel* CanvasPanel_PalInfo_Simple;
    class UCanvasPanel* CanvasPanel_PalInfo_TaskDetail;
    class UHorizontalBox* HorizontalBox_CheckBox;
    class UImage* Image;
    class UImage* Image_PalIcon;
    class UOverlay* Overlay_Night;
    class UBP_PalTextBlock_C* Text_CurrentTask;
    class UBP_PalTextBlock_C* Text_Pal_LevelValue;
    class UBP_PalTextBlock_C* Text_Pal_name;
    class UBP_PalTextBlock_C* Text_Task_Fix;
    class UBP_PalTextBlock_C* Text_Task_Free;
    class UBP_PalTextBlock_C* Text_Task_Free_1;
    class UWBP_EnemyGauge_SAN_C* WBP_EnemyGauge_SAN;
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_0;
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_1;
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_2;
    TArray<class UWBP_MainMenu_Pal_State_C*> ConditionWidgets;
    FTimerHandle UpdateWorkDetailTimerHandle;
    TSoftObjectPtr<UPalIndividualCharacterSlot> bindedSlot;
    FDataTableRowHandle FixedAssignMsgID;
    FDataTableRowHandle FreeAssignMsgID;
    TMap<class EPalWorkSuitability, class UWBP_WorkSuitabilityPreference_CheckBox_0_C*> SuitabilityCheckBoxMap;
    FWBP_WorlSuitabilityPreference_PalList_COnChangedSuitabilityCheck OnChangedSuitabilityCheck;
    void OnChangedSuitabilityCheck(bool IsChecked, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* TargetSlot);
    class UWBP_WorkSuitabilityPreference_CheckBox_0_C* BattleModeCheckBox;
    FWBP_WorlSuitabilityPreference_PalList_COnChangedBattleModeCheck OnChangedBattleModeCheck;
    void OnChangedBattleModeCheck(bool IsChecked, class UPalIndividualCharacterSlot* TargetSlot);
    FWBP_WorlSuitabilityPreference_PalList_COnHoveredCheckBox OnHoveredCheckBox;
    void OnHoveredCheckBox(class UWBP_WorlSuitabilityPreference_PalList_C* SelfWidget);
    int32 LastHoveredCheckBoxIndex;

    void GetLastHoveredCheckBoxIndex(int32& Index);
    void GetFocusTargetByCheckBoxIndex(int32 Index, class UWidget*& TargetWidget);
    void OnHoveredCheckBox_Internal(class UWBP_WorkSuitabilityPreference_CheckBox_0_C* CheckBox);
    void ArrangeHorizontalSlot_ForCheckBox(class UHorizontalBoxSlot* Slot);
    void OnChangedBattleModeCheckState_Internal(bool IsChecked, EPalWorkSuitability Suitability);
    void Set Work Suitability(TMap<EPalWorkSuitability, int32> WorkSuitabilities);
    void OnChangedSuitabilityCheckState_Internal(bool IsChecked, EPalWorkSuitability Suitability);
    void OnUpdateLevel_Binded(int32 NewLevel);
    void SetFixedAssignMode(bool IsFixedAssign);
    void OnUpdateSlotHandle(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void Unbind();
    void BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot);
    void UpdateWorkDetail_Timer();
    void OnUpdateNickName_Binded(FString NewNickName);
    void OnUpdateCondition_Binded();
    void OnUpdateWorkSuitabilityOption_Binded(FPalWorkSuitabilityPreferenceInfo Info);
    void OnUpdateSanity_Binded(double nowSanity, double nowMaxSanity);
    void SetupCheckBox();
    void SetEnableTaskDetail(bool IsEnable);
    void GetTopFocusTarget(class UWidget*& Target);
    void Construct();
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_WorlSuitabilityPreference_PalList(int32 EntryPoint);
    void OnHoveredCheckBox__DelegateSignature(class UWBP_WorlSuitabilityPreference_PalList_C* SelfWidget);
    void OnChangedBattleModeCheck__DelegateSignature(bool IsChecked, class UPalIndividualCharacterSlot* TargetSlot);
    void OnChangedSuitabilityCheck__DelegateSignature(bool IsChecked, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* TargetSlot);
};

#endif
