#ifndef UE4SS_SDK_WBP_Arena_Spectate_HPP
#define UE4SS_SDK_WBP_Arena_Spectate_HPP

class UWBP_Arena_Spectate_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScrollBox* ScrollBox_0;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_NoData_C* WBP_NoData;
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText;
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_1;
    class APalArenaEntrance* Entrance;
    TArray<FPalArenaSpectateRoomInfo> CachedInfo;
    FPalUIActionBindData RuleActionInput;
    FPalUIActionBindData SpecActionInput;
    int32 LastHoveredIndex;

    void ConfirmSpec(bool IsYes);
    void StartSpecAction();
    void ViewRuleAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSpecButtonUnhovered(class UWBP_Arena_Spectate_List_C* Button);
    void OnSpecButtonHovered(class UWBP_Arena_Spectate_List_C* Button);
    void OnSpecButtonClicked(class UWBP_Arena_Spectate_List_C* Button);
    void CancelAction();
    void Setup();
    void BndEvt__WBP_Arena_Spectate_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Arena_Spectate(int32 EntryPoint);
};

#endif
