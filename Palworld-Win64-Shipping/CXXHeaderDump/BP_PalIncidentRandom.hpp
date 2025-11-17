#ifndef UE4SS_SDK_BP_PalIncidentRandom_HPP
#define UE4SS_SDK_BP_PalIncidentRandom_HPP

class UBP_PalIncidentRandom_C : public UPalRandomIncidentBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalIncidentDynamicParameterRandom* Parameter;
    class UDataTable* SettingDT;
    class UPalRandomIncidentActionBase* action;
    TArray<FName> SpawnedNpcNames;
    class ABP_PalRandomIncidentNPCSpawner_C* NPCSpawner;
    bool ExcludedEvenOnce;
    bool InsideActionAreaEvenOnce;
    TArray<FPalRandomIncidentSpawnMonsterData> OutbreakMonsters;
    TArray<FName> OutbreakMonsterNames;
    class APalRandomIncidentMapObjectSpawner* MapObjectSpawner;
    class APalRandomIncidentObjectPlacement* ObjectgPlacement;

    void SpawnDropItems();
    void SpawnEggs();
    void CreateObjectPlacement();
    void CreateMapObjectSpawner();
    void ShowErrorNameDuplication(FName InName);
    void SetupOutbreakData();
    void GetGroupList(TArray<int32>& GroupNo);
    void OnRandomIncidentActionNotify(EPalRandomIncidentActionNotifyType NotifyType);
    void SetDisableFlagForNPCSpawner_BP(bool isDisable);
    void OnNPCSpawnerDestroyed(class AActor* DestroyedActor);
    void OnNpcDespawned(const FName& RowName);
    void TerminateAction();
    void OnEndProc();
    class APalRandomIncidentNPCSpawner* GetNPCSpawner();
    void StartAction();
    bool IsExcludeOtherPal();
    void ExcludeOtherPal();
    void OnExitAnyArea_Impl(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId);
    void OnEnterAnyArea_Impl(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId);
    void IsAllNpcSpawned(bool& IsSpawned);
    void OnNpcSpawned(const FName& RowName);
    void Spawn NPCs(class UDataTable* SpawnDataList);
    void Spawn Monsters(class UDataTable* SpawnDataList);
    void Spawn Characters();
    void OnGroupCreated();
    void CreateGroupRequestParams(TArray<FPalRandomIncidentGroupRequestParameter>& RequestParams);
    void Get Setting Table Row(bool& Result, FPalRandomIncidentSettings& Data);
    void Get Incident Spawner(class APalRandomIncidentSpawnerBase*& IncidentSpawner);
    void CreateAction();
    void CreateNpcSpawner();
    void SetupIncident();
    void OnBegin();
    void BindIDelegate_AreaInOut();
    void UnbindIDelegate_AreaInOut();
    void BindDelegate_NpcSpawner();
    void UnbindDelegate_NpcSpawner();
    void OnEnterAnyAreaEvent(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId);
    void OnExitAnyAreaEvent(EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId);
    void OnEnd();
    void BindDelegate_Action();
    void UnbindDelegate_Action();
    void OnCanceled();
    void ExecuteUbergraph_BP_PalIncidentRandom(int32 EntryPoint);
};

#endif
