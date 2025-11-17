#ifndef UE4SS_SDK_WBP_IngameMenu_Mission_HPP
#define UE4SS_SDK_WBP_IngameMenu_Mission_HPP

class UWBP_IngameMenu_Mission_C : public UPalUIBaseCampTaskBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_LevelUp;
    class UWidgetAnimation* Anm_CampInfo;
    class UBP_PalTextBlock_C* Text_LevelNum;
    class UBP_PalTextBlock_C* Text_PalNum;
    class UWBP_CommonButton_C* WBP_CommonButton;
    class UWBP_IngameMenu_MissionLevelEffect_C* WBP_IngameMenu_MissionLevelEffect;
    class UWBP_IngameMenu_MissionLevelEffect_C* WBP_IngameMenu_MissionLevelEffect_1;
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList;
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList_1;
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList_2;
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList_3;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_1;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_2;
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_3;
    TArray<class UWBP_IngameMenu_MissionList_C*> MissionList;
    FPalBaseCampTaskCheckedData ChedckedData;
    FPalBaseCampTaskDataSet TaskData;
    FDataTableRowHandle BuildOBjectNumTaskInfoMsgID;
    FDataTableRowHandle WorkerNumTaskInfoMsgID;
    bool CanLevelup;
    int32 LastLevel;
    FTimerHandle TaskUpdateTimer;
    bool ButtonActive;
    FDataTableRowHandle PalLimitMsgId;

    class UWidget* BP_GetDesiredFocusTarget();
    void UpdateLevelEffectInfo(int32 Level);
    void UpdateCampInfoMax();
    void UpdateCampInfo();
    void OnUpdateCampStatus(class UPalBaseCampModel* Model);
    void Finished_37D37A8647957B4095DAF6B247AB02F5();
    void OnSetup();
    void Construct();
    void ClosePanel();
    void BndEvt__WBP_IngameMenu_Mission_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_IngameMenu_Mission_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_Mission(int32 EntryPoint);
};

#endif
