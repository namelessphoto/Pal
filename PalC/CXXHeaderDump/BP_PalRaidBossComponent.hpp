#ifndef UE4SS_SDK_BP_PalRaidBossComponent_HPP
#define UE4SS_SDK_BP_PalRaidBossComponent_HPP

class UBP_PalRaidBossComponent_C : public UPalRaidBossComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0170 (size: 0x8)
    class AActor* VolumeActor;                                                        // 0x0178 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> ServantActors;                       // 0x0180 (size: 0x10)
    TSubclassOf<class UPalAIActionBase> EnterAIActionClass;                           // 0x0190 (size: 0x8)
    TSubclassOf<class AActor> VolumeClass;                                            // 0x0198 (size: 0x8)

    void ShouldUseCustomSequenceOnRaidBossFinish(EPalRaidBossBattleFinishType RiadBossFinishType, bool& UseCustomSequence);
    void On Despawn Pal(FPalInstanceID ID);
    void Spawn Delegate_Servant(FPalInstanceID ID);
    void SpawnServantPal(FName CharacterID, int32 Level, FVector Location, FRotator Rotate);
    void DespawnVolume();
    void Spawn Volume();
    void Spawn Delegate(FPalInstanceID ID);
    void Spawn One Pal(FPalRaidBossSpawnInfo SpawnInfo, int32 Index, FTransform SpawnerTransform, class UPalIndividualCharacterHandle*& Handle);
    void SpawnRaidBoss_BP(FPalRaidBossSpawnInfoList SpawnInfo, const FTransform& SpawnTransform);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
    void ReceiveBeginPlay();
    void OnEndBattle_Server_BP();
    void PlayCustomRaidSequence(EPalRaidBossBattleFinishType RiadBossFinishType, class UWBP_BossBattle_BattleInfo_C* Widget);
    void ExecuteUbergraph_BP_PalRaidBossComponent(int32 EntryPoint);
}; // Size: 0x1A0

#endif
