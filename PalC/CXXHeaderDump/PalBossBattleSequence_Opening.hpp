#ifndef UE4SS_SDK_PalBossBattleSequence_Opening_HPP
#define UE4SS_SDK_PalBossBattleSequence_Opening_HPP

class UPalBossBattleSequence_Opening_C : public UPalBossBattleSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 LoadingAssetCount;
    class ULevelSequencePlayer* LSPlayer;
    bool IsEndCutscene;
    bool IsEndSetBoss;
    TArray<FTransform> PlayerPosList;
    bool IsPlayerFix;
    class UPalHUDDispatchParameter_FadeWidget* FadeParameter;
    bool IsLoaded;
    class APalBossBattleLevelInstance* BossRoom;
    class UPalBossBattleInstanceModel* InstanceModel;
    bool IsCutscenePlayed;
    bool IsTeleportEnd;
    double LevelLoadCheckTimer;
    class UAkAudioEvent* BGMBeginEvent;
    class UAkAudioEvent* BGMLoopEvent;
    TSoftObjectPtr<UAkAudioEvent> BGMLoopEventSoft;
    TSubclassOf<class APalCutsceneActor> PalCustCeneActorClass;
    bool IsPlayIntroBGM;
    class APalBossBattleEventBase* Boss Battle Event;
    FName flagName;

    void IsLoadingAction(bool& IsLoadingAction);
    void TryEventInitialize();
    void IsAssetLoadingCompleted(bool& NewParam);
    void DecAssetLoadingCount();
    void InitPlayerCameraRotation();
    void CheckLevelInstanceLoaded(double DeltaTime);
    void StartUIFadeIn();
    void StartUIFadeOut();
    void GetLevelSpawnPos(FVector& Pos);
    void FixPlayerPos();
    void DoSequenceFinish();
    void IsSkipCutscene(bool& Skip);
    void ActivateBossAI();
    void OnFinishCutscene(bool IsSkipped);
    void PlayIntroMovie(TSubclassOf<class APalCutsceneActor> StartCutscene);
    void SetPlayerLocation_StartPoint();
    void LogShow(FString String);
    void OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB(class UObject* Loaded);
    void OnLoaded_95B43418450294BEE8289E863350333C(class UObject* Loaded);
    void OnLoaded_87511D084D17A2720B719F91D617DC72(UClass* Loaded);
    void OnBeginSequence();
    void カスタムイベント_0(class APalCharacter* SpawnedCharacter);
    void FinishSequence(bool IsSuccess);
    void TickSequence(float DeltaTime);
    void LoadedLevel();
    void SetupCutscene();
    void OnPlayerTeleported();
    void StartCustcene();
    void OnEventCreated(class APalBossBattleEventBase* BossBattleEvent);
    void OnActionBegin(const class UPalActionBase* action);
    void OnLoadingActionEnd();
    void ExecuteUbergraph_PalBossBattleSequence_Opening(int32 EntryPoint);
};

#endif
