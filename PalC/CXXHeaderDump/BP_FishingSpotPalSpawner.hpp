#ifndef UE4SS_SDK_BP_FishingSpotPalSpawner_HPP
#define UE4SS_SDK_BP_FishingSpotPalSpawner_HPP

class ABP_FishingSpotPalSpawner_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Debug_Mesh;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UPalIndividualCharacterHandle*> IndividualHandleList;
    double SpawnRadius;
    bool IsWorldLoadComplete;
    bool IsSpawnRequested;
    double DespawnPlusDistance;
    double ReturnTerritoryRadius;
    double WildLifeWalkingAreaRadius;
    double ReturnRadiusRate_Combat;
    TEnumAsByte<ELeashType> Leash Type;
    double WanderingRadius;

    void SetMuteki(class APalCharacter* Pal, bool IsMuteki);
    void ExistAliveCharacter(bool& Exist);
    void BlueprintTick_Spawning(float DeltaTime);
    void BlueprintTick_Despawning(float DeltaTime);
    void DespawnDelegate(FPalInstanceID ID);
    void Despawn();
    void CheckWorldLoadCompleted();
    void SpawnAllPal();
    void OnDestroyedCharacter(class AActor* DestroyedActor);
    void SetLocationIgnoreRaycast(class AActor* PalActor);
    void FindIndividualHandle(FPalInstanceID ID, class UPalIndividualCharacterHandle*& Handle);
    void Spawn Delegate(FPalInstanceID ID);
    void Spawn(FName CharacterID, int32 Level, FVector Location);
    void RequestSpawn();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void OnCreateActor(class UPalIndividualCharacterHandle* Handle);
    void ExecuteUbergraph_BP_FishingSpotPalSpawner(int32 EntryPoint);
};

#endif
