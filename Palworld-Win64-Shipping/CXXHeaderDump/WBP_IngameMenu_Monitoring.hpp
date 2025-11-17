#ifndef UE4SS_SDK_WBP_IngameMenu_Monitoring_HPP
#define UE4SS_SDK_WBP_IngameMenu_Monitoring_HPP

class UWBP_IngameMenu_Monitoring_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_WorkInfo;
    class UWBP_IngameMenu_Monitoring_WorkButton_C* WBP_IngameMenu_Monitoring_WorkButton;
    class UWBP_IngameMenu_Monitoring_WorkButton_C* WBP_IngameMenu_Monitoring_WorkButton1;
    class UWBP_IngameMenu_Monitoring_WorkButton_C* WBP_IngameMenu_Monitoring_WorkButton2;
    class UWBP_IngameMenu_Monitoring_WorkButton_C* WBP_IngameMenu_Monitoring_WorkButton3;
    class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo;
    class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo_1;
    class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo_2;
    class UWBP_IngameMenu_Monitoring_WorkInfo_C* WBP_IngameMenu_Monitoring_WorkInfo_3;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    EPalBaseCampPassiveEffectWorkHardType WorkHardLevel;
    TMap<class EPalBaseCampPassiveEffectWorkHardType, class UWBP_IngameMenu_Monitoring_WorkButton_C*> WorkHardButtonMap;
    class UPalMapObjectBaseCampPassiveWorkHardModel* PalWorkHardModel;
    TArray<class UWBP_IngameMenu_Monitoring_WorkInfo_C*> WorkInfos;
    bool IsHovering;
    TArray<FDataTableRowHandle> WorkHardMsgIds;

    void DisplayHoverWorkHardInfo(int32 WorkHardLevel);
    void DisplayCurrentWorkHardInfo();
    void UpdateWorkHardInfo(int32 WorkHardLevel);
    class UWidget* BP_GetDesiredFocusTarget();
    void RequestChangeHardWorkLevel(int32 Level);
    void OnUpdateWorkHardType(class UPalBaseCampPassiveEffect_WorkHard* EffectWorkHard);
    void BndEvt__WBP_IngameMenu_Monitoring_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void Construct();
    void ExecuteUbergraph_WBP_IngameMenu_Monitoring(int32 EntryPoint);
};

#endif
