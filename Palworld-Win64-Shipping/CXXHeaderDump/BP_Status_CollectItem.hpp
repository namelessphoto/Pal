#ifndef UE4SS_SDK_BP_Status_CollectItem_HPP
#define UE4SS_SDK_BP_Status_CollectItem_HPP

class UBP_Status_CollectItem_C : public UPalStatusCollectItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 CollectItemTimeMinuteMin;
    int32 CollectItemTimeMinuteMax;
    double CollectItemTimeSec;
    double ElapsedTimeSec;
    TArray<FFPassiveSkillCollectItemLotteryData> LotteryTable;
    TArray<int32> RankTable;
    TMap<FName, int32> DebugLotteryCounter;
    bool IsDebugLottery;
    FName DebugLotteryItemName;
    FPalStaticItemIdAndNum AddItemInfo;
    bool IsPaused;
    TSubclassOf<class UBP_AIAction_SpawnItemBase_C> BaseCampActionClass;
    class UPalAIActionBase* AIAction;
    TArray<class UDataTable*> LotteryTables;
    bool IsActionPlaying;

    void AddLog_UseSkillInBaseCamp();
    void AddLog_UseSkill();
    void GetRank(int32& Rank);
    void Observe AIAction();
    void GetLotteryDataTable(class UDataTable*& DataTable);
    void CreateLotteryTable(TArray<FFPassiveSkillCollectItemLotteryData>& Result);
    void Get Base Camp Action Class(TSubclassOf<class UBP_AIAction_SpawnItemBase_C>& Class);
    void SetPause(bool Pause);
    void IsActorDead(bool& IsDead);
    void Get Name Text Id(FName& SkillNameTextId);
    void OnAddItem(EPalItemOperationResult Result);
    void Get Lottery Index(int32 LotteryValue, int32& Index);
    void GetRandVal(int32 Max, int32& RandVal);
    void Is Actor Active(bool& IsActive);
    void UpdateSkill(double DeltaTime);
    void AddItem(FPalStaticItemIdAndNum ItemInfo);
    void LotteryItem(FPalStaticItemIdAndNum& ItemInfo);
    void ResetElapsedTime();
    void SetCollectItemTime();
    void OnBeginStatus();
    void OnBreakStatus();
    void OnEndStatus();
    void TickStatus(float DeltaTime);
    void PlayAction_SpawnItem(FPalStaticItemIdAndNum AddItemInfo);
    void ExecuteUbergraph_BP_Status_CollectItem(int32 EntryPoint);
};

#endif
