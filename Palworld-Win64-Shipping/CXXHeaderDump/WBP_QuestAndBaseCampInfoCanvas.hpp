#ifndef UE4SS_SDK_WBP_QuestAndBaseCampInfoCanvas_HPP
#define UE4SS_SDK_WBP_QuestAndBaseCampInfoCanvas_HPP

class UWBP_QuestAndBaseCampInfoCanvas_C : public UPalUIInsideBaseCampCanvas
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_Border_Bottom;
    class UHorizontalBox* HorizontalBox_Border_Top;
    class UVerticalBox* VerticalBox;
    class UWBP_BattleEntry_Member_C* WBP_BattleEntry_Member;
    class UWBP_Ingame_QuestBoard_C* WBP_Ingame_QuestBoard;
    class UWBP_IngameMenu_CampLevelUp_C* WBP_IngameMenu_CampLevelUp;
    class UWBP_IngameMenu_Task_Simple_C* WBP_IngameMenu_Task_Simple;
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;
    class UWBP_WorkerSimpleDetail_C* WBP_WorkerSimpleDetail;
    FTimerHandle tackCheckTimerHandle;
    double TraceLength;
    TSoftObjectPtr<APalCharacter> NowDisplayInfoCharacter;
    FTimerHandle CollectWorkerDirectorModelTimer;
    FTimerHandle LoopCheckTimer;
    FTimerHandle NewVar;
    FTimerHandle TimerHandle_UpdateQuestDetail;

    void CREATEDELEGATE_PROXYFUNCTION_0(const FName& QuestId);
    void OnTimerEvent_UpdateQuestDetail();
    void OnUpdatedTrackingQuest(const FName& QuestId);
    void OnCompletedQuest(const FName& QuestId);
    void OnUpdatedQuest(FName QuestId);
    void OnChangedUISettings(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void OnUpdateBaseCampWorkHard(EPalBaseCampPassiveEffectWorkHardType WorkHardType);
    void OnUpdateWorkerBattleType(EPalBaseCampWorkerDirectionBattleType BattleType);
    void OnTimer_CollectWorkerDirectorModel();
    void ShowLevelUp(class UPalBaseCampModel* Model);
    void UpdateWindowBorder();
    void Show Base Camp Info();
    void HideBaseCampInfo();
    void Trace Worker Pal();
    void OnLeavePalBoxArea();
    void On Enter Pal Box Area();
    void Update Item Detail();
    void UpdatePalDetail();
    void UpdateTask();
    void On Update Base Camp Detail();
    void On Leave Base Camp();
    void On Enter Base Camp(class UPalBaseCampModel* Model);
    void OnInitialized();
    void Construct();
    void Destruct();
    void OnSetup_AfterCreatedPlayer();
    void SetVerticalBoxVisible(bool IsVisible);
    void LoopCheck();
    void ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas(int32 EntryPoint);
};

#endif
