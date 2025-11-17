#ifndef UE4SS_SDK_BP_PalAudioWorldSubsystem_HPP
#define UE4SS_SDK_BP_PalAudioWorldSubsystem_HPP

class UBP_PalAudioWorldSubsystem_C : public UPalAudioWorldSubsystem
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool IsDead;
    class AActor* DeubugModel;
    class AActor* LastOneEnemy;
    TArray<FGuid> ExecRaid;
    TArray<FGuid> ArrivedRaid;
    bool IsLocalPlayerInsideBaseCamp;
    TArray<class APalSpotAreaBase*> SpotList;
    TArray<class APalAmbientSoundAreaBase*> AmbientSoundList;
    TArray<class APalAmbientSoundAreaBase*> AmbientSoundListPrev;
    TArray<int32> AmbinetSoundPlayingIdList;
    FPalAmbientSoundAreaData CurrentAmbientData;
    TMap<class EPalBattleBGMType, class EPalAudioState> BattleBGMMap2;
    bool IsDisableBattleBGM;
    EPalBattleBGMType BattleBGMRankCache;

    void OnArenaSequenceChanged(class UPalArenaSequencer* Sequencer, EPalArenaSequenceType PrevType, EPalArenaSequenceType AfterType);
    void SetDsiableBattleBGM(bool bIsDisable);
    void On Change Battle BGM(EPalBattleBGMType Rank);
    void OnArenaSequenceEnd();
    void OnArenaSequenceStart(class UPalArenaSequencer* ArenaSequencer);
    void FindMaxPriorityAmbientSoundArea(class APalAmbientSoundAreaBase*& AmbinetSoundArea);
    bool IsPlayingArea(class APalAmbientSoundAreaBase* AmbientSoundArea);
    void OnPlayerEnterAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea);
    void OnPlayerExitAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea);
    void PlayAmbientSounds(EPalOneDayTimeType OneDayTimeType);
    void OnChangeOneDayTimeType(EPalOneDayTimeType OneDayTimeType);
    void OnNightEnd();
    void OnNightStart();
    void UpdateAmbient();
    void OnBattleRankDown(EPalPlayerBattleFinishType Finish);
    void OnPlayerExitSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea);
    void OnPlayerEnterSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea);
    void UpdateSpot();
    void OnPlayerExitBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel);
    void OnPlayerEnterBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel);
    void UpdateRaid();
    void OnArrivedRaid(const FPalIncidentBroadcastParameter& Param);
    void OnEndRaid(const FPalIncidentBroadcastParameter& Parameter);
    void OnStartRaid(const FPalIncidentBroadcastParameter& Parameter);
    void CreateDebugModel(class AActor*& NewParam);
    void OnBattleModeChanged(bool IsBattleMode);
    void UpdateDebugDisplay();
    void UpdateWorldLocation();
    void UpdateWorldTime();
    void UpdateStatePlayerAlive();
    void SetDefaultState();
    void Tick_BP(float DeltaTime);
    void OnEndOfEvent();
    void DeathPlayer();
    void RespawnPlayer(class APalPlayerCharacter* Player);
    void OnSpawnedLocalPlayerCharacter(class APawn* Pawn, class AController* Controller);
    void ExecuteUbergraph_BP_PalAudioWorldSubsystem(int32 EntryPoint);
};

#endif
