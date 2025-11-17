#ifndef UE4SS_SDK_BP_MonoNPCSpawner_HPP
#define UE4SS_SDK_BP_MonoNPCSpawner_HPP

class ABP_MonoNPCSpawner_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class USphereComponent* SpawnCollision;                                           // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* Debug_Mesh;                                           // 0x03B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03B8 (size: 0x8)
    FPalDataTableRowName_PalHumanData HumanName;                                      // 0x03C0 (size: 0x8)
    bool Spawned;                                                                     // 0x03C8 (size: 0x1)
    FPalDataTableRowName_NPCUniqueData UniqueName;                                    // 0x03CC (size: 0x8)
    FPalDataTableRowName_PalMonsterData OtomoName;                                    // 0x03D4 (size: 0x8)
    int32 Level;                                                                      // 0x03DC (size: 0x4)
    FName CharaName;                                                                  // 0x03E0 (size: 0x8)
    class UPalIndividualCharacterHandle* SpawnedHandle;                               // 0x03E8 (size: 0x8)
    TArray<FName> NameList;                                                           // 0x03F0 (size: 0x10)
    double ReturnRadius;                                                              // 0x0400 (size: 0x8)
    TSubclassOf<class ABP_NPCAIController_C> ControllerClass;                         // 0x0408 (size: 0x8)
    TSubclassOf<class UPalAIActionBase> DefaultActionClass;                           // 0x0410 (size: 0x8)
    double DespawnPlusDistance;                                                       // 0x0418 (size: 0x8)
    FName UniqueNPCID;                                                                // 0x0420 (size: 0x8)
    FF_NPC_PathWalkArray PathWalkArray;                                               // 0x0428 (size: 0x10)
    bool IsLoading;                                                                   // 0x0438 (size: 0x1)
    bool IsWorldLoadComplete;                                                         // 0x0439 (size: 0x1)
    bool Debug_Disable;                                                               // 0x043A (size: 0x1)
    TArray<class ABP_NPC_WalkPathPoint_1_C*> WalkPointRefarence;                      // 0x0440 (size: 0x10)
    class UPalIndividualCharacterHandle* OtomoHandle;                                 // 0x0450 (size: 0x8)
    int32 DespawnWaitCounter;                                                         // 0x0458 (size: 0x4)
    bool IsBossSpawner;                                                               // 0x045C (size: 0x1)
    FName SaveKeyName;                                                                // 0x0460 (size: 0x8)
    bool NotDeleteGroupByDespawn;                                                     // 0x0468 (size: 0x1)
    double RespawnTimer;                                                              // 0x0470 (size: 0x8)
    double RespawnTime;                                                               // 0x0478 (size: 0x8)

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
}; // Size: 0x480

#endif
