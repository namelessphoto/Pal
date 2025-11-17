#ifndef UE4SS_SDK_BP_FishingSpotPalSpawner_HPP
#define UE4SS_SDK_BP_FishingSpotPalSpawner_HPP

class ABP_FishingSpotPalSpawner_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* Debug_Mesh;                                           // 0x03A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03B0 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> IndividualHandleList;                // 0x03B8 (size: 0x10)
    double SpawnRadius;                                                               // 0x03C8 (size: 0x8)
    bool IsWorldLoadComplete;                                                         // 0x03D0 (size: 0x1)
    bool IsSpawnRequested;                                                            // 0x03D1 (size: 0x1)
    double DespawnPlusDistance;                                                       // 0x03D8 (size: 0x8)
    double ReturnTerritoryRadius;                                                     // 0x03E0 (size: 0x8)
    double WildLifeWalkingAreaRadius;                                                 // 0x03E8 (size: 0x8)
    double ReturnRadiusRate_Combat;                                                   // 0x03F0 (size: 0x8)
    TEnumAsByte<ELeashType> Leash Type;                                               // 0x03F8 (size: 0x1)
    double WanderingRadius;                                                           // 0x0400 (size: 0x8)

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
}; // Size: 0x408

#endif
