#ifndef UE4SS_SDK_BP_MonoNPCSpawner_HPP
#define UE4SS_SDK_BP_MonoNPCSpawner_HPP

class ABP_MonoNPCSpawner_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* SpawnCollision;
    class UStaticMeshComponent* Debug_Mesh;
    class USceneComponent* DefaultSceneRoot;
    FPalDataTableRowName_PalHumanData HumanName;
    bool Spawned;
    FPalDataTableRowName_NPCUniqueData UniqueName;
    FPalDataTableRowName_PalMonsterData OtomoName;
    int32 Level;
    FName CharaName;
    class UPalIndividualCharacterHandle* SpawnedHandle;
    TArray<FName> NameList;
    double ReturnRadius;
    TSubclassOf<class ABP_NPCAIController_C> ControllerClass;
    TSubclassOf<class UPalAIActionBase> DefaultActionClass;
    double DespawnPlusDistance;
    FName UniqueNPCID;
    FF_NPC_PathWalkArray PathWalkArray;
    bool IsLoading;
    bool IsWorldLoadComplete;
    bool Debug_Disable;
    TArray<class ABP_NPC_WalkPathPoint_1_C*> WalkPointRefarence;
    class UPalIndividualCharacterHandle* OtomoHandle;
    int32 DespawnWaitCounter;
    bool IsBossSpawner;
    FName SaveKeyName;
    bool NotDeleteGroupByDespawn;
    double RespawnTimer;
    double RespawnTime;

    void CheckRespawnByTimer(double DeltaTime);
    void GetCanAppearFlag(bool& CanSpawn);
    void SetFlag_IsLoading(bool Next);
    void RespawnByOutside();
    void On Dead(FPalDeadInfo DeadInfo);
    void SetSaveData(class AActor* Boss);
    void On Capture(class APalCharacter* SelfCharacter, class APalCharacter* Attacker);
    void SetNullHandleWhenDestoryOtomo(class AActor* DestroyedActor);
    void OnOtomoSpawned(class AController* HolderController, class APalCharacter* OtomoPal);
    void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>& Handles);
    float GetSpawnPointRadius();
    void BlueprintTick_Despawning(float DeltaTime);
    void BlueprintTick_Spawning(float DeltaTime);
    void GetWorldLoadWaitRadius(double& Radius);
    void AdjustFloor(class AActor* SpaenedChara);
    void Editor Setup Walk Point Ref();
    void CheckWorldLoadCompleted();
    void CreateWalkPathList(class USceneComponent* Parent, FF_NPC_PathWalkArray& PathArray);
    void Initialize Spawned Character(class UPalIndividualCharacterHandle* Handle, TSubclassOf<class UPalAIActionBase> DefaultAction, FF_NPC_PathWalkArray WalkPath, FName Otomo);
    void SetCharaNames();
    void DespawnDelegateMono(FPalInstanceID ID);
    void SetNullHandleWhenDestoryNPC(class AActor* DestroyedActor);
    void SpawnDelegate(FPalInstanceID ID);
    void Despawn();
    void Spawn();
    void Check Spawn(double DeltaTime);
    void ReceiveBeginPlay();
    void カスタムイベント_0();
    void SetAllNPCLocation();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void CreateDebugSpawnerGroupInfo(FPalSpawnerGroupInfo OneGroupInfo);
    void BlueprintTick_AnyThread(float DeltaTime);
    void ExecuteUbergraph_BP_MonoNPCSpawner(int32 EntryPoint);
};

#endif
