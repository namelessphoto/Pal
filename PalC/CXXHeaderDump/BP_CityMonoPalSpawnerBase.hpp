#ifndef UE4SS_SDK_BP_CityMonoPalSpawnerBase_HPP
#define UE4SS_SDK_BP_CityMonoPalSpawnerBase_HPP

class ABP_CityMonoPalSpawnerBase_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* DebugMesh;                                            // 0x03A8 (size: 0x8)
    class USphereComponent* SpawnCollision;                                           // 0x03B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03B8 (size: 0x8)
    bool NotSleepFlag;                                                                // 0x03C0 (size: 0x1)
    class ABP_MonsterBase_C* tempSpawnedMonster;                                      // 0x03C8 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> IndividualHandleList;                // 0x03D0 (size: 0x10)
    double ReturnTerritoryRadius;                                                     // 0x03E0 (size: 0x8)
    double WanderingRadius;                                                           // 0x03E8 (size: 0x8)
    FVector BattleStartLocation;                                                      // 0x03F0 (size: 0x18)
    double SpawnRadius;                                                               // 0x0408 (size: 0x8)
    double RayStartUpOffset;                                                          // 0x0410 (size: 0x8)
    double WildLifeWalkingAreaRadius;                                                 // 0x0418 (size: 0x8)
    TEnumAsByte<ELeashType> LeashType;                                                // 0x0420 (size: 0x1)
    double DespawnPlusDistance;                                                       // 0x0428 (size: 0x8)
    bool IsLoading;                                                                   // 0x0430 (size: 0x1)
    bool IsWorldLoadComplete;                                                         // 0x0431 (size: 0x1)
    FName SpawnerName;                                                                // 0x0434 (size: 0x8)
    EPalSpawnedCharacterType SpawnerType;                                             // 0x043C (size: 0x1)
    double ReturnRadiusRate_Combat;                                                   // 0x0440 (size: 0x8)
    int32 Level;                                                                      // 0x0448 (size: 0x4)
    FPalDataTableRowName_PalMonsterData PalName;                                      // 0x044C (size: 0x8)
    TSubclassOf<class UPalActionBase> DefaultAction;                                  // 0x0458 (size: 0x8)
    EPalFacialEyeType StartFacial;                                                    // 0x0460 (size: 0x1)
    EPalOrganizationType OverridePalOrganizationType;                                 // 0x0461 (size: 0x1)

    FName GetSpawnerName();
    void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>& Handles);
    float GetSpawnPointRadius();
    void BlueprintTick_Despawning(float DeltaTime);
    void BlueprintTick_Spawning(float DeltaTime);
    void Spawn Reauest();
    void ExistAliveCharacter(bool& Exist);
    void IsWorldPartitionLoadComplete(bool& IsLoading);
    void IsCharacterLoading(bool& IsLoading);
    void CheckIntervalByDistance();
    void BP_PalSpawner_Standard_AutoGenFunc(class AActor* DestroyedActor);
    void CheckWorldLoadCompleted();
    void IsAlwaysSpawn(bool& Always);
    void RemoveHandleList(class APalCharacter* Monster);
    void FindIndividualHandle(FPalInstanceID ID, class UPalIndividualCharacterHandle*& Handle);
    void DespawnDelegate(FPalInstanceID ID);
    void Spawn Delegate(FPalInstanceID ID);
    void CheckSpawn(double DeltaTime);
    void Despawn();
    void Spawn();
    void ReceiveBeginPlay();
    void カスタムイベント_0();
    void SetAllNPCLocation();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void SpawnRequest_ByOutside(bool IsDeleteAliveCharacter);
    void ExecuteUbergraph_BP_CityMonoPalSpawnerBase(int32 EntryPoint);
}; // Size: 0x462

#endif
