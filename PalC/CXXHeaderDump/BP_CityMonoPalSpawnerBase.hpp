#ifndef UE4SS_SDK_BP_CityMonoPalSpawnerBase_HPP
#define UE4SS_SDK_BP_CityMonoPalSpawnerBase_HPP

class ABP_CityMonoPalSpawnerBase_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* DebugMesh;
    class USphereComponent* SpawnCollision;
    class USceneComponent* DefaultSceneRoot;
    bool NotSleepFlag;
    class ABP_MonsterBase_C* tempSpawnedMonster;
    TArray<class UPalIndividualCharacterHandle*> IndividualHandleList;
    double ReturnTerritoryRadius;
    double WanderingRadius;
    FVector BattleStartLocation;
    double SpawnRadius;
    double RayStartUpOffset;
    double WildLifeWalkingAreaRadius;
    TEnumAsByte<ELeashType> LeashType;
    double DespawnPlusDistance;
    bool IsLoading;
    bool IsWorldLoadComplete;
    FName SpawnerName;
    EPalSpawnedCharacterType SpawnerType;
    double ReturnRadiusRate_Combat;
    int32 Level;
    FPalDataTableRowName_PalMonsterData PalName;
    TSubclassOf<class UPalActionBase> DefaultAction;
    EPalFacialEyeType StartFacial;
    EPalOrganizationType OverridePalOrganizationType;

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
};

#endif
