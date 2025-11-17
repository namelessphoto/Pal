#ifndef UE4SS_SDK_WBP_Quest_ForDisplay_HPP
#define UE4SS_SDK_WBP_Quest_ForDisplay_HPP

class UWBP_Quest_ForDisplay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_Quest_C* WBP_Quest;
    FPalDataTableRowName_UIInputAction InputActionName_QuestTracking;
    FPalUIActionBindData InputActionHandle_QuestTracking;
    FPalDataTableRowName_UIInputAction InputActionName_QuestShowMap;
    FPalUIActionBindData InputActionHandle_QuestShowMap;
    FWBP_Quest_ForDisplay_COnRequestShowMap OnRequestShowMap;
    void OnRequestShowMap(FName QuestId);
    FPalDataTableRowName_UIInputAction NextTabAction;
    FPalDataTableRowName_UIInputAction PrevTabAction;

    void OnInputAction_PrevTab();
    void OnInputAction_NextTab();
    void OnInputAction_ShowMap();
    void UnregisterShowMapAction();
    void RegisterQuestShowMap();
    void OnUpdateTrackingQuestId(const FName& QuestId);
    void On Input Action Quest Tracking();
    void UnregisterQuestTracingAction();
    void RegisterQuestTrackingAction();
    void Setup(FName DisplayQuestId);
    class UWidget* BP_GetDesiredFocusTarget();
    void Construct();
    void BndEvt__WBP_Quest_ForDisplay_WBP_Quest_K2Node_ComponentBoundEvent_0_OnClickedQuestButton__DelegateSignature(class UWBP_Quest_ListButton_C* QuestWidget);
    void Destruct();
    void ExecuteUbergraph_WBP_Quest_ForDisplay(int32 EntryPoint);
    void OnRequestShowMap__DelegateSignature(FName QuestId);
};

#endif
