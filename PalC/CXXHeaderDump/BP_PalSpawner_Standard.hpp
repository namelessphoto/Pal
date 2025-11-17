#ifndef UE4SS_SDK_BP_PalSpawner_Standard_HPP
#define UE4SS_SDK_BP_PalSpawner_Standard_HPP

class ABP_PalSpawner_Standard_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* DummyTextRender;
    class USkeletalMeshComponent* DummySkeletalMesh;
    class USphereComponent* SpawnCollision;
    class USceneComponent* DefaultSceneRoot;
    bool NotSleepFlag;
    class ABP_MonsterBase_C* tempSpawnedMonster;
    TArray<class UPalIndividualCharacterHandle*> IndividualHandleList;
    double ReturnTerritoryRadius;
    double WanderingRadius;
    TEnumAsByte<ELeashType> Leash Type;
    FVector BattleStartLocation;
    double SpawnRadius;
    TArray<FPalSpawnerGroupInfo> SpawnGroupList;
    double RayStartUpOffset;
    FPalSpawnerGroupInfo tempSpawnGroupInfo;
    double WildLifeWalkingAreaRadius;
    double DespawnPlusDistance;
    bool IsLoading;
    bool IsWorldLoadComplete;
    FName SpawnerName;
    EPalSpawnedCharacterType SpawnerType;
    double ReturnRadiusRate_Combat;
    bool IgnoreGroundRaycast;

    void SetLocationIgnoreRaycast(class AActor* PalActor);
    EPalSpawnedCharacterType GetSpawnerType();
    FName GetSpawnerName();
    TArray<FPalSpawnerGroupInfo> GetOriginalSpawnGroupList();
    TArray<FPalSpawnerGroupInfo> GetSpawnGroupList(class UObject* WorldContextObject);
    void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>& Handles);
    bool IsSuppressedByRandomIncident();
    float GetSpawnPointRadius();
    void BlueprintTick_Despawning(float DeltaTime);
    void BlueprintTick_Spawning(float DeltaTime);
    void Is Field Boss or Imprisonment Boss Spawner(bool& IsTimer);
    void OnDead(FPalDeadInfo Info);
    void OnCaptured(class APalCharacter* SelfPal, class APalCharacter* Attacker);
    void Lottery and Spawn Reauest();
    void ExistAliveCharacter(bool& Exist);
    int32 GetMaxMonsterLevel();
    void IsWorldPartitionLoadComplete(bool& IsLoading);
    void IsCharacterLoading(bool& IsLoading);
    void GetFixedSpawnInfo(FPalSpawnerGroupInfo& Group);
    void CheckIntervalByDistance();
    void BP_PalSpawner_Standard_AutoGenFunc(class AActor* DestroyedActor);
    void CheckWorldLoadCompleted();
    void IsAlwaysSpawn(bool& Always);
    void LotterySpawnPalListIndex(bool& Success, FPalSpawnerGroupInfo& SpawnGroup);
    void RemoveHandleList(class APalCharacter* Monster);
    void FindIndividualHandle(FPalInstanceID ID, class UPalIndividualCharacterHandle*& Handle);
    void DespawnDelegate(FPalInstanceID ID);
    void Spawn Delegate(FPalInstanceID ID);
    void CheckSpawn(double DeltaTime);
    void Despawn();
    void Spawn(FPalSpawnerGroupInfo SpawnGroup);
    void ReceiveBeginPlay();
    void カスタムイベント_0();
    void CreateDebugSpawnerGroupInfo(FPalSpawnerGroupInfo OneGroupInfo);
    void SetAllNPCLocation();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void SpawnRequest_ByOutside(bool IsDeleteAliveCharacter);
    void TestDelaySetLocation(class AActor* Actor);
    void ExecuteUbergraph_BP_PalSpawner_Standard(int32 EntryPoint);
};

#endif
