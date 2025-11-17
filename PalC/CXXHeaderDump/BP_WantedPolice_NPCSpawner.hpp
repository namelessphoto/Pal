#ifndef UE4SS_SDK_BP_WantedPolice_NPCSpawner_HPP
#define UE4SS_SDK_BP_WantedPolice_NPCSpawner_HPP

class ABP_WantedPolice_NPCSpawner_C : public ABP_MonoNPCSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x0488 (size: 0x8)
    class UStaticMeshComponent* DummyPlayer;                                          // 0x0490 (size: 0x8)
    int32 SpawnPointNum;                                                              // 0x0498 (size: 0x4)
    double SpawnPointRadius;                                                          // 0x04A0 (size: 0x8)
    double RespawnDistance;                                                           // 0x04A8 (size: 0x8)
    class ABP_NPCAIController_C* NPCAIController;                                     // 0x04B0 (size: 0x8)
    class UPalIndividualCharacterHandle* OwnerHandle;                                 // 0x04B8 (size: 0x8)
    class APalCharacter* OwnerCharacter;                                              // 0x04C0 (size: 0x8)
    bool IsWanted;                                                                    // 0x04C8 (size: 0x1)
    double LostSearchTime;                                                            // 0x04D0 (size: 0x8)
    double LostSearchTimer;                                                           // 0x04D8 (size: 0x8)
    TMap<int32, FPalDataTableRowName_PalHumanData> PoliceHumanDataArray;              // 0x04E0 (size: 0x50)
    class UPalIndividualCharacterHandle* DespawnHandle;                               // 0x0530 (size: 0x8)
    TMap<class UPalIndividualCharacterHandle*, class ABP_NPCAIController_C*> NPCMap;  // 0x0538 (size: 0x50)
    TMap<class UPalIndividualCharacterHandle*, class ABP_NPCAIController_C*> PreNPCMap; // 0x0588 (size: 0x50)
    int32 SpawnNum;                                                                   // 0x05D8 (size: 0x4)
    double SpawnHeightOffset;                                                         // 0x05E0 (size: 0x8)
    int32 TotalReward;                                                                // 0x05E8 (size: 0x4)
    FName CharacterID;                                                                // 0x05EC (size: 0x8)
    double FloorCheckHeight;                                                          // 0x05F8 (size: 0x8)
    int32 PoliceLevel;                                                                // 0x0600 (size: 0x4)
    int32 RespawnCheckCount;                                                          // 0x0604 (size: 0x4)
    int32 RespawnCount;                                                               // 0x0608 (size: 0x4)
    double RespawnCheckTimer;                                                         // 0x0610 (size: 0x8)
    double RespawnCheckTime;                                                          // 0x0618 (size: 0x8)
    bool IsForceSpawn;                                                                // 0x0620 (size: 0x1)
    TArray<FVector> PreLocations;                                                     // 0x0628 (size: 0x10)
    int32 PreTargetReward;                                                            // 0x0638 (size: 0x4)
    int32 TargetReward;                                                               // 0x063C (size: 0x4)
    double StuckCheckDistance;                                                        // 0x0640 (size: 0x8)
    double MoveFailedRespawnTime;                                                     // 0x0648 (size: 0x8)
    double MoveFailedRespawnTimer;                                                    // 0x0650 (size: 0x8)
    TArray<class ABP_NPCAIController_C*> MoveFailedNPCs;                              // 0x0658 (size: 0x10)
    double PoliceHate;                                                                // 0x0668 (size: 0x8)
    FTimerHandle CheckMoveFailedTimerHandle;                                          // 0x0670 (size: 0x8)
    double CheckMoveFailedTime;                                                       // 0x0678 (size: 0x8)
    TMap<class ABP_NPCAIController_C*, class FVector> NPCPreLocationMap;              // 0x0680 (size: 0x50)
    bool IsSpawnFailed;                                                               // 0x06D0 (size: 0x1)
    FTimerHandle SpawnFailedCheckTimer;                                               // 0x06D8 (size: 0x8)
    double SpawnFailedCheckTime;                                                      // 0x06E0 (size: 0x8)
    FPalWorldSecurityWantedStateInfo CurrentWantedStateInfo;                          // 0x06E8 (size: 0x18)
    int64 LastUpdateFrame;                                                            // 0x0700 (size: 0x8)
    TArray<class AActor*> LastOverlapActors;                                          // 0x0708 (size: 0x10)
    bool LastOverlapResult;                                                           // 0x0718 (size: 0x1)

    bool GetBoxOverlappingActors(TSubclassOf<class AActor> ActorClassFilter, TArray<class AActor*>& OutActors);
    void FinderChangeAction(class APalCharacter* Reporter, class APalCharacter* WantedPlayer, EPalOrganizationType Organization);
    void CheckWanted();
    void TrySpawnPolices();
    void CheckSpawnFailed();
    void CheckWaterOrSky(FVector Start, FVector End, bool& IsWaterOrSky);
    void IsStuckMove(class ABP_NPCAIController_C* AIController, bool& IsStuck);
    void CheckReleaseWantedTimer(double DeltaTime, bool& IsRelease);
    void CheckPoliceInSight(class ABP_NPCAIController_C* NPC, bool& InSight);
    void IsPoliceInSight(bool& NoOneInSight);
    void IsOrganizationCitizen(EPalOrganizationType OrganizationType, bool& bCitizen);
    void IsFailedMove(class ABP_NPCAIController_C* AIController, bool& IsFailed);
    void CheckRespawnByFailedMove();
    void HasWeapon(class ABP_NPCAIController_C* NPCController, bool& HasWeapon);
    void ReporterChangeAction(class APalCharacter* Reporter, class APalCharacter* Criminal);
    void CheckReportCriminal();
    void DespawnPolices(TArray<class UPalIndividualCharacterHandle*>& DespawnHandles);
    void SpawnPolices();
    void GetCombatGunBP(class ABP_NPCAIController_C* AIController, class UBP_AIAction_NPC_Combat_Gun_C*& CombatAIAction);
    void CheckValidSpawnLocation(FVector TargetLocation, FVector& Location, bool& IsValid);
    void ReleaseWanted();
    void SetupOwnerAndHandle();
    void IsSelf(class UPalIndividualCharacterHandle* CharacterHandle, bool& IsSelf);
    void CheckRespawn(FVector CheckLocation, bool& IsRespawn);
    void FindSpawnLocation(FVector& Location, bool& IsSuccess);
    void SpawnDelegate(FPalInstanceID ID);
    void Despawn();
    void Spawn();
    void CorrectPoints(TArray<FVector>& Points);
    void ReceiveBeginPlay();
    void BlueprintTick(float DeltaTime);
    void OnInitializedNPC();
    void ChangeCombatMode();
    void OnReleaseWanted(class UPalIndividualCharacterHandle* CriminalHandle);
    void OnWanted(class UPalIndividualCharacterHandle* CriminalHandle, FPalWorldSecurityWantedStateInfo WantedStateInfo);
    void DebugShowPoints(double DeltaTime);
    void ExecuteUbergraph_BP_WantedPolice_NPCSpawner(int32 EntryPoint);
}; // Size: 0x719

#endif
