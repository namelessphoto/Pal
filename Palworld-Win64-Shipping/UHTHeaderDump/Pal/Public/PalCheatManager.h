#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManager -FallbackName=CheatManager
#include "EPalActionType.h"
#include "EPalArenaRank.h"
#include "EPalBaseCampWorkerEventType.h"
#include "EPalBaseCampWorkerSickType.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossType.h"
#include "EPalEnergyType.h"
#include "EPalLimitVolumeFlag.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "EPalMapObjectVisualEffectType.h"
#include "EPalSkinType.h"
#include "EPalUserPrivilege.h"
#include "PalInstanceID.h"
#include "Templates/SubclassOf.h"
#include "PalCheatManager.generated.h"

class APalDebug_SpawnInfoReporter;
class APalImGui;
class APalPlayerCharacter;
class UDataTable;
class UPalDebugWindowSetting;
class UPalStatPalCount;
class UPingIP;

UCLASS()
class PAL_API UPalCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UPalDebugWindowSetting* DebugWindowSetting;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* DebugProgressPresetDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalDebug_SpawnInfoReporter> SpawnerInfoReporterClass;
    
private:
    UPROPERTY()
    APalImGui* PalImGui;
    
    UPROPERTY()
    UPalStatPalCount* PalCountSystem;
    
    UPROPERTY()
    APalDebug_SpawnInfoReporter* SpawnInfoReporter;
    
public:
    UPalCheatManager();

    UFUNCTION(Exec)
    void WorkerEventLog();
    
    UFUNCTION(Exec)
    void WorkerEventInterval(const float Interval);
    
    UFUNCTION(Exec)
    void WildPalCombatStart();
    
    UFUNCTION(Exec)
    void WazaCoolTimeFastMode();
    
    UFUNCTION(Exec)
    void VisitorTravel();
    
    UFUNCTION(Exec)
    void UpdateBaseCampWorkerSlotNum(const int32 SlotNum);
    
    UFUNCTION(Exec)
    void UpdateBaseCampTickInvokeMaxNumInOneTick(const int32 Value);
    
    UFUNCTION(Exec)
    void UpdateBaseCampLevelMax();
    
    UFUNCTION(Exec)
    void UnregisterTickFunctionMapObjectNotExistsConcrete();
    
    UFUNCTION(Exec)
    void UnlockTechnologyByLvCap(int32 Lv);
    
    UFUNCTION(Exec)
    void UnlockOneTechnology(FName technologyName);
    
    UFUNCTION(Exec)
    void UnlockMap(FName regionId);
    
    UFUNCTION(Exec)
    void UnlockAllRecipeTechnology();
    
    UFUNCTION(Exec)
    void UnlockAllCategoryTechnology();
    
    UFUNCTION(Exec)
    void UnlockAchievement(const FString& AchievementId, int32 Progress);
    
    UFUNCTION(Exec)
    void UNKO();
    
    UFUNCTION(Exec)
    void TriggerBaseCampWorkerSickServerInternal(const FGuid& InvokerPlayerUId, const EPalBaseCampWorkerSickType SickType);
    
    UFUNCTION(Exec)
    void TriggerBaseCampWorkerSick(const EPalBaseCampWorkerSickType SickType);
    
    UFUNCTION(Exec)
    void TriggerBaseCampWorkerEvent(const EPalBaseCampWorkerEventType EventType);
    
    UFUNCTION(Exec)
    void TraceReticleDirectionAllObjectType(const float Length);
    
    UFUNCTION(Exec)
    void ToggleVisibleStaticMeshImposterChunk();
    
    UFUNCTION(Exec)
    void ToggleVisibleLevelObject(const FName ClassName);
    
    UFUNCTION(Exec)
    void ToggleVisibleFoliageChunk();
    
    UFUNCTION(Exec)
    void ToggleUserAchievementDebug();
    
    UFUNCTION(Exec)
    void ToggleSpawnRandomIncidentLotteryDataOnly();
    
    UFUNCTION(Exec)
    void ToggleShowReticleLocation();
    
    UFUNCTION(Exec)
    void ToggleShowMsgID();
    
    UFUNCTION(Exec)
    void ToggleShowDropItemHitEventLog();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleRevision_BP();
    
public:
    UFUNCTION(Exec)
    void ToggleRevision();
    
    UFUNCTION(Exec)
    void TogglePartnerSkillNoDecrease();
    
    UFUNCTION(Exec)
    void ToggleLoadingScreen();
    
    UFUNCTION(Exec)
    void ToggleKillOnPlayerRide();
    
    UFUNCTION(Exec)
    void ToggleHUD();
    
    UFUNCTION(Exec)
    void ToggleForceSpawnRandomIncident();
    
    UFUNCTION(Exec)
    void ToggleFishMove();
    
    UFUNCTION(Exec)
    void ToggleFishingSuccess();
    
    UFUNCTION(Exec)
    void ToggleFishingSearchAreaDraw();
    
    UFUNCTION(Exec)
    void ToggleDebugFishingSpotRespawnTime();
    
    UFUNCTION(Exec)
    void ToggleBuildInstallCheckLookToCamera();
    
    UFUNCTION(Exec)
    void ToggleBaseCampWorkerSanityDetail();
    
    UFUNCTION(Exec)
    void ToggleABPLean();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void TimeStopForBP();
    
public:
    UFUNCTION(Exec)
    void TeleportToSafePoint();
    
    UFUNCTION(Exec)
    void TeleportToNearestPlayer();
    
    UFUNCTION(Exec)
    void TeleportToNearestCamp();
    
    UFUNCTION(Exec)
    void TeleportToLocationByClipboard();
    
    UFUNCTION(Exec)
    void TeleportToLocation(float X, float Y, float Z);
    
    UFUNCTION(Exec)
    void TeleportToLastLandingLocation();
    
    UFUNCTION(Exec)
    void TeleportToDungeonEntranceRandom();
    
    UFUNCTION(Exec)
    void TeleportToDungeonEntranceByRandomScattered();
    
    UFUNCTION(Exec)
    void TeleportToDungeonEntranceByIndex(const int32 Index);
    
    UFUNCTION(Exec)
    void TeleportToDungeonEntranceByDataLayer(const FName DataLayerName);
    
    UFUNCTION(Exec)
    void TeleportToCurrentStageRelativeLocation(float X, float Y, float Z);
    
    UFUNCTION(Exec)
    void TeleportToCurrentDungeonTreasureBox();
    
    UFUNCTION(Exec)
    void TeleportToCurrentDungeonGoal();
    
    UFUNCTION(Exec)
    void TeleportToBotLocation(int32 botIndex);
    
    UFUNCTION(Exec)
    void TeleportToBotCamp(int32 botIndex);
    
    UFUNCTION(Exec)
    void TeleportToBossTower(EPalBossType BossType);
    
    UFUNCTION(Exec)
    void TeleportNearestPlayerToMe() const;
    
    UFUNCTION(Exec)
    void TeleportBaseCampWorkerToFoodBox();
    
    UFUNCTION(Exec)
    void SwapUserPrivilege(EPalUserPrivilege Privilege);
    
    UFUNCTION(Exec)
    void SwapForceMuteBlockForMyself();
    
    UFUNCTION(Exec)
    void StunPlayer();
    
    UFUNCTION(Exec)
    void StringToPlayerUID(const FString& Str);
    
    UFUNCTION(Exec)
    void StopTimerDropItem();
    
    UFUNCTION(Exec)
    void StopOtomoMovement() const;
    
    UFUNCTION(Exec)
    void StopOtomoAI() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StartWildPalCombat();
    
public:
    UFUNCTION(Exec)
    void StartTraceAllOption();
    
    UFUNCTION(Exec)
    void StartLabResearchNotConsumeMaterials(const FName ResearchId);
    
    UFUNCTION(Exec)
    void StartDismantlingMode();
    
    UFUNCTION(Exec)
    void StartBuildMode(const FName BuildObjectId);
    
    UFUNCTION(Exec)
    void StartArenaSolo(EPalArenaRank ArenaRank);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpectatorOnForBP();
    
public:
    UFUNCTION(Exec)
    void SpectatorOn();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpectatorOffForBP();
    
public:
    UFUNCTION(Exec)
    void SpectatorOff();
    
    UFUNCTION(Exec)
    void SpawnUniqueNPC(const FName CharacterID);
    
    UFUNCTION(Exec)
    void SpawnPalEggBreedFarm(const FName MonsterId, const float Range);
    
    UFUNCTION(Exec)
    void SpawnMonsterForPlayer(const FName& CharacterID, int32 Num, int32 Level);
    
    UFUNCTION(Exec)
    void SpawnMonster(const FName CharacterID, int32 Level);
    
    UFUNCTION(Exec)
    void SleepAllEnemy();
    
    UFUNCTION(Exec)
    void SkipCutscene();
    
    UFUNCTION(Exec)
    void ShutdownRemoteServer();
    
    UFUNCTION(Exec)
    void ShowTargetLocalPlayerEnemyList();
    
    UFUNCTION(Exec)
    void ShowStreamingLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowSpawnerInfo();
    
    UFUNCTION(Exec)
    void ShowSnapMode();
    
    UFUNCTION(Exec)
    void ShowSaveFileNum();
    
    UFUNCTION(Exec)
    void ShowPlayers();
    
    UFUNCTION(Exec)
    void ShowPlayerMoveSpeed();
    
    UFUNCTION(Exec)
    void ShowPalEggStatus();
    
    UFUNCTION(Exec)
    void ShowPalCount();
    
    UFUNCTION(Exec)
    void ShowObjectNameGround();
    
    UFUNCTION(Exec)
    void ShowObjectNameForward();
    
    UFUNCTION(Exec)
    void ShowMovementMode();
    
    UFUNCTION(Exec)
    void ShowMaxPlayers();
    
    UFUNCTION(Exec)
    void ShowMapObjectStatus();
    
    UFUNCTION(Exec)
    void ShowMapObjectFoliageStatus();
    
    UFUNCTION(Exec)
    void ShowMapObjectConnector();
    
    UFUNCTION(Exec)
    void ShowLocalSaveData();
    
    UFUNCTION(Exec)
    void ShowLaunchArguments() const;
    
    UFUNCTION(Exec)
    void ShowInviteCode() const;
    
    UFUNCTION(Exec)
    void ShowInvaderDebugLog() const;
    
    UFUNCTION(Exec)
    void ShowHateArrow();
    
    UFUNCTION(Exec)
    void ShowFloorLocation();
    
    UFUNCTION(Exec)
    void ShowDialog(FText Msg);
    
    UFUNCTION(Exec)
    void ShowDefenseAttackTarget();
    
    UFUNCTION(Exec)
    void ShowDefenseAttackableRange();
    
    UFUNCTION(Exec)
    void ShowDebugWorkAssignTarget();
    
    UFUNCTION(Exec)
    void ShowDebugWorkAssign();
    
    UFUNCTION(Exec)
    void ShowDebugWanted();
    
    UFUNCTION(Exec)
    void ShowDebugCrime();
    
    UFUNCTION(Exec)
    void ShowCharacterStatus();
    
    UFUNCTION(Exec)
    void ShowBuildObjectInstallCheck();
    
    UFUNCTION(Exec)
    void ShowAlert(FText Msg);
    
    UFUNCTION(Exec)
    void ShowAISound();
    
    UFUNCTION(Exec)
    void ShowActionName();
    
    UFUNCTION(Exec)
    void ShowActionAndStatus_ToServer();
    
    UFUNCTION(Exec)
    void ShowActionAndStatus();
    
    UFUNCTION(Exec)
    void SetVoiceID(int32 VoiceID);
    
    UFUNCTION(Exec)
    void SetVisitorName(const FString& VisitorName);
    
    UFUNCTION(Exec)
    void SetVisibleLevelObjectAll(const bool bVisible);
    
    UFUNCTION(Exec)
    void SetVisibilityMapObject(const FName MapObjectId, const bool bVisible);
    
    UFUNCTION(Exec)
    void SetSunLightShadowDistance(const float InDistance);
    
    UFUNCTION(Exec)
    void SetShouldReplicateBaseCampItemStackInfo(const bool bReplicate);
    
    UFUNCTION(Exec)
    void SetSanityToBaseCampPal(const float Sanity);
    
    UFUNCTION(Exec)
    void SetPlayerSP(int32 NewSP);
    
    UFUNCTION(Exec)
    void SetPlayerSkin(EPalSkinType Part, FName SkinName);
    
    UFUNCTION(Exec)
    void SetPlayerHP(int32 NewHP);
    
    UFUNCTION(Exec)
    void SetPlayerCameraBoomLengthRate(const float Rate);
    
    UFUNCTION(Exec)
    void SetPassive_PlayerWeapon(FName firstPassive, FName secondPassive, FName thirdPassive);
    
    UFUNCTION(Exec)
    void SetPalWorldTimeScale(float Rate);
    
    UFUNCTION(Exec)
    void SetPalWorldTime(int32 Hour);
    
    UFUNCTION(Exec)
    void SetPalEggStatusRange(const float Range);
    
    UFUNCTION(Exec)
    void SetPaldexComplete(bool IsComplete);
    
    UFUNCTION(Exec)
    void SetPalCaptureNumRecordAll(const int32 CaptureNum);
    
    UFUNCTION(Exec)
    void SetPalCaptureNumRecord(const FName& CharacterID, const int32 CaptureNum);
    
    UFUNCTION(Exec)
    void SetOtomoPalWorkSpeedRank(int32 Rank);
    
    UFUNCTION(Exec)
    void SetOtomoPalRank(int32 Rank);
    
    UFUNCTION(Exec)
    void SetOtomoPalHPRank(int32 Rank);
    
    UFUNCTION(Exec)
    void SetOtomoPalDefenceRank(int32 Rank);
    
    UFUNCTION(Exec)
    void SetOtomoPalAttackRank(int32 Rank);
    
    UFUNCTION(Exec)
    void SetMultiplayRestriction(bool bRestriction);
    
    UFUNCTION(Exec)
    void SetMapObjectStatusRange(const float Range);
    
    UFUNCTION(Exec)
    void SetMapObjectStatusMapObjectId(const FName MapObjectId);
    
    UFUNCTION(Exec)
    void SetLoadingSceneVisible(bool IsVisible);
    
    UFUNCTION(Exec)
    void SetInventorySize(int32 NewSize);
    
    UFUNCTION(Exec)
    void SetInventoryItemDurability(const float Percent);
    
    UFUNCTION(Exec)
    void SetHardTowerBossDebugNo(int32 DebugNo);
    
    UFUNCTION(Exec)
    void SetGameTime_NextNight_SecondsAgo(const int32 SecondsAgo);
    
    UFUNCTION(Exec)
    void SetGameTime_NextNight();
    
    UFUNCTION(Exec)
    void SetGameTime_NextDay_SecondsAgo(const int32 SecondsAgo);
    
    UFUNCTION(Exec)
    void SetGameTime_NextDay();
    
    UFUNCTION(Exec)
    void SetFullStomachToBaseCampPal(const float Value);
    
    UFUNCTION(Exec)
    void SetFPSForServer(float fps);
    
    UFUNCTION(Exec)
    void SetForceSpawnRandomIncidentName(const FString& IncidentName);
    
    UFUNCTION(Exec)
    void SetForceLocationTeleport(bool bForceLocationTeleport);
    
    UFUNCTION(Exec)
    void SetEnablePlayerRespawnInHardcore(bool bEnable);
    
    UFUNCTION(Exec)
    void SetEnableInteractLock(bool bEnable);
    
    UFUNCTION(Exec)
    void SetDummyPlayerList(bool bEnable);
    
    UFUNCTION(Exec)
    void SetDisableInteractReticleTarget(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugRespawnPointForPlayer(APalPlayerCharacter* Character, FVector Location);
    
    UFUNCTION(Exec)
    void SetDebugFullStomachDecreaseRate(const float Rate);
    
    UFUNCTION(Exec)
    void SetDamageTextMaxNum(int32 Num);
    
    UFUNCTION(Exec)
    void SetCharacterName(const FString& Name);
    
    UFUNCTION(Exec)
    void SetCharacterMakeColor(FColor Color);
    
    UFUNCTION(Exec)
    void SetCharacterMakeAllRed();
    
    UFUNCTION(Exec)
    void SetCharacterMakeAllNormal();
    
    UFUNCTION(Exec)
    void SetCharacterMakeAllMin();
    
    UFUNCTION(Exec)
    void SetCharacterMakeAllMax();
    
    UFUNCTION(Exec)
    void SetCharacterMakeAllGreen();
    
    UFUNCTION(Exec)
    void SetCharacterMakeAllBlue();
    
    UFUNCTION(Exec)
    void SetBaseCampWorkerHpSingle(const float Percentage);
    
    UFUNCTION(Exec)
    void SetBaseCampWorkerHp(const float Percentage);
    
    UFUNCTION(Exec)
    void SetArenaRankPoint(int32 ArenaRankPoint);
    
    UFUNCTION(Exec)
    void SetAlwaysGrantPassiveSkillMode(bool flag);
    
    UFUNCTION(Exec)
    void SetAllowBaseCampBattle(const bool bAllowBaseCampBattle);
    
    UFUNCTION(Exec)
    void SetActivity(const FString& ConnStr, int32 maxPlayer, int32 currentPlayer);
    
    UFUNCTION(Exec)
    void SessionMemberInfoDump();
    
    UFUNCTION(Exec)
    void SendSaveLogTelemetry(const FString& ErrorType);
    
    UFUNCTION(Exec)
    void SendChatToBroadcast(const FString& Text);
    
    UFUNCTION(Exec)
    void SaikyoGamePreset();
    
    UFUNCTION(Exec)
    void RideIKEnable();
    
    UFUNCTION(Exec)
    void RideIKDisable();
    
    UFUNCTION(Exec)
    void RespawnPlayer();
    
    UFUNCTION(Exec)
    void ResetOilrig();
    
    UFUNCTION(Exec)
    void ResetDisplayTermsOfService();
    
    UFUNCTION(Exec)
    void RerollCharacterMake();
    
    UFUNCTION(Exec)
    void RequestLogTreasureBoxLocalPlayerAround();
    
    UFUNCTION(Exec)
    void RequestLogServerThreadNum();
    
    UFUNCTION(Exec)
    void RequestFillSlotChestToInventory();
    
    UFUNCTION(Exec)
    void RequestFillSlotChestFromInventory();
    
    UFUNCTION(Exec)
    void RequestDamageToMapObjectInAllBaseCamp(const int32 Value);
    
    UFUNCTION(Exec)
    void RequestDamageToBaseCampPoint(const int32 Value);
    
    UFUNCTION(Exec)
    void RepairEquipment();
    
    UFUNCTION(Exec)
    void RemovePlayerSkin(EPalSkinType Part, FName InTarget);
    
    UFUNCTION(Exec)
    void RandomizePassive_PlayerWeapon();
    
    UFUNCTION(Exec)
    void PrintWorkLog();
    
    UFUNCTION(Exec)
    void PrintRealTime();
    
    UFUNCTION(Exec)
    void PrintRandomizerInfo();
    
    UFUNCTION(Exec)
    void PrintPlatformInventory();
    
    UFUNCTION(Exec)
    void PrintPakFiles();
    
    UFUNCTION(Exec)
    void PrintNetDriverLog();
    
    UFUNCTION(Exec)
    void PrintLevelObjectClass();
    
    UFUNCTION(Exec)
    void PrintInventoryDynamicItemLog();
    
    UFUNCTION(Exec)
    void PrintGameTime();
    
    UFUNCTION(Exec)
    void PrintArenaSpectateInfoLog(bool ForceNetUpdate);
    
    UFUNCTION(Exec)
    void PrintAllDataLayerIDHash();
    
    UFUNCTION(Exec)
    void Ping(const FString& Address);
    
    UFUNCTION(Exec)
    void ParallelForUpdateActiveTiles();
    
    UFUNCTION(Exec)
    void PalmiTargetEnemny();
    
    UFUNCTION(Exec)
    void OrderQuestForce(const FName QuestId);
    
    UFUNCTION(Exec)
    void OrderBaseCampWorker(const EPalMapBaseCampWorkerOrderType OrderType);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OpenTitleForBP();
    
public:
    UFUNCTION(Exec)
    void OpenTitle();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OpenPrivateServerForBP();
    
public:
    UFUNCTION(Exec)
    void OpenPrivateServer();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OpenMultiBattleMapForBP();
    
public:
    UFUNCTION(Exec)
    void OpenMultiBattleMap();
    
    UFUNCTION(Exec)
    void OpenDefaultMap();
    
    UFUNCTION()
    void OnPingComplete(UPingIP* PingIP, const FString& Address, int32 TimeMS);
    
    UFUNCTION(Exec)
    void NotDecreaseWeaponItem();
    
    UFUNCTION(Exec)
    void NotDecreaseDefenseBullet();
    
    UFUNCTION(Exec)
    void NotConsumeMaterialsInCraft();
    
    UFUNCTION(Exec)
    void NotConsumeMaterialsInBuild();
    
    UFUNCTION(Exec)
    void MuteListRemoveAll();
    
    UFUNCTION(Exec)
    void MuteListDump();
    
    UFUNCTION(Exec)
    void MuteListAllUser();
    
    UFUNCTION(Exec)
    void MutekiForPlayer();
    
    UFUNCTION(Exec)
    void MutekiForFriend();
    
    UFUNCTION(Exec)
    void MutekiALL();
    
    UFUNCTION(Exec)
    void ManyUNKO();
    
    UFUNCTION(Exec)
    void LoginNative();
    
    UFUNCTION(Exec)
    void LoginEOS();
    
    UFUNCTION(Exec)
    void LogBaseCampInfo();
    
    UFUNCTION(Exec)
    void KillPlayer();
    
    UFUNCTION(Exec)
    void KillGuildFriend();
    
    UFUNCTION(Exec)
    void KillBaseCampWorkerSingle();
    
    UFUNCTION(Exec)
    void KillBaseCampWorker();
    
    UFUNCTION(Exec)
    void KillAllFriend();
    
    UFUNCTION(Exec)
    void KillAllEnemy();
    
    UFUNCTION(Exec)
    void KickPlayer(const FString& UserId, FText KickReason);
    
    UFUNCTION(Exec)
    void JumpToClientStartLocation();
    
    UFUNCTION(Exec)
    void JoinInviteCode(const FString& InviteCode) const;
    
    UFUNCTION(Exec)
    void JoinClientPlayerToServerGuild();
    
    UFUNCTION()
    bool IsSkillCoolTime() const;
    
    UFUNCTION()
    bool IsShowCharacterStatus() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNotDecreaseWeaponItem() const;
    
    UFUNCTION()
    bool IsNotDecreaseDefenseBullet() const;
    
    UFUNCTION()
    bool IsNotConsumeMaterialsInBuild() const;
    
    UFUNCTION()
    bool IsMutekiForPlayer() const;
    
    UFUNCTION()
    bool IsMutekiForFriend() const;
    
    UFUNCTION()
    bool IsMutekiALL() const;
    
    UFUNCTION()
    bool IsIgnoreBuildRestrictionBaseCamp() const;
    
    UFUNCTION()
    bool IsFixedSP() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDisableEnemyEyeSight() const;
    
    UFUNCTION()
    bool IsCaptureSuccessAlways() const;
    
    UFUNCTION()
    bool IsCaptureFailAlways() const;
    
    UFUNCTION(Exec)
    void IsAllStreamingCompleted();
    
    UFUNCTION()
    bool IsActionName() const;
    
    UFUNCTION(Exec)
    void InvokePlayerAction(const EPalActionType ActionType);
    
    UFUNCTION(Exec)
    void InvaderMarchRandom();
    
    UFUNCTION(Exec)
    void InvaderMarch();
    
    UFUNCTION(Exec)
    void InstallVirtualBaseCamp();
    
    UFUNCTION(Exec)
    void InsightsTraceStopForServer();
    
    UFUNCTION(Exec)
    void InsightsTraceStopForLocal();
    
    UFUNCTION(Exec)
    void InsightsTraceStartForServer();
    
    UFUNCTION(Exec)
    void InsightsTraceStartForLocal();
    
    UFUNCTION(Exec)
    void InitInventory(const FName StaticItemId, const int32 Count);
    
    UFUNCTION(Exec)
    void IgnoreRestrictedByItemsForPartnerSkill();
    
    UFUNCTION(Exec)
    void IgnoreDamageCheckByServer();
    
    UFUNCTION(Exec)
    void IgnoreBuildRestrictionBaseCamp();
    
    UFUNCTION(Exec)
    void HPOneAllCharacter();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HideTutorialQuest_BP();
    
public:
    UFUNCTION(Exec)
    void HideTutorialQuest();
    
    UFUNCTION(Exec)
    void HideDebugInfo();
    
    UFUNCTION(Exec)
    void GivePlayerSkin(FName SkinName);
    
    UFUNCTION(Exec)
    void GivePlatformPromotionItem();
    
    UFUNCTION(Exec)
    void GivePlatformInventoryItem(int32 ItemId, int32 Num);
    
    UFUNCTION(Exec)
    void GetRelic(int32 Count);
    
    UFUNCTION(Exec)
    void GetPlanerPal();
    
    UFUNCTION(Exec)
    void GetPalEgg(const FName CharacterID);
    
    UFUNCTION(Exec)
    void GetItemWithPassiveSkill(FName StaticItemId, int32 Count, FName PassiveSkillId);
    
    UFUNCTION(Exec)
    void GetItemWithPassive(FName StaticItemId, int32 Count);
    
    UFUNCTION(Exec)
    void GetItemToLoadoutWithPassive(FName StaticItemId, int32 Count);
    
    UFUNCTION(Exec)
    void GetItemToLoadout(FName StaticItemId, int32 Count);
    
    UFUNCTION(Exec)
    void GetItem(FName StaticItemId, int32 Count);
    
    UFUNCTION(Exec)
    void GenerateCombiMonster();
    
    UFUNCTION(Exec)
    void FullPowerForPlayer();
    
    UFUNCTION(Exec)
    void ForceUpdateBaseCampWorkerEvent();
    
    UFUNCTION(Exec)
    void ForceSpawnRarePal();
    
    UFUNCTION(Exec)
    void ForceResetPropertiesPlayerBelongTo();
    
    UFUNCTION(Exec)
    void ForceReportCriminal();
    
    UFUNCTION(Exec)
    void ForceReloadPlayerParameter();
    
    UFUNCTION(Exec)
    void ForceReleaseWanted();
    
    UFUNCTION(Exec)
    void ForceLowerSpecSetting();
    
    UFUNCTION(Exec)
    void ForceItemContainerDirtyAll();
    
    UFUNCTION(Exec)
    void ForceFoundNearestTreasureMapPoint(const int32 Rarity);
    
    UFUNCTION(Exec)
    void ForceExitStageAllPlayer();
    
    UFUNCTION(Exec)
    void ForceExitStage();
    
    UFUNCTION(Exec)
    void ForceDisplayTermsOfService();
    
    UFUNCTION(Exec)
    void ForceDisableTimerLight();
    
    UFUNCTION(Exec)
    void ForceDisablePalMeshCollision();
    
    UFUNCTION(Exec)
    void ForceDetectAroundPlayer(const float Range);
    
    UFUNCTION(Exec)
    void ForceArenaExitAll();
    
    UFUNCTION(Exec)
    void FootIKEnable();
    
    UFUNCTION(Exec)
    void FootIKDisable();
    
    UFUNCTION(Exec)
    void FixedUseEagleForGlider();
    
    UFUNCTION(Exec)
    void FixedSP();
    
    UFUNCTION(Exec)
    void FixedCannonDebugPrint(bool IsShow);
    
    UFUNCTION(Exec)
    void FixedActionRandomSeed();
    
    UFUNCTION(Exec)
    void FetchMapObjectsTickIntervalInBackground();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExitGuildPlayer(const FString& GuildName, APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExitGuildLocalPlayer(const FString& GuildName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnterGuildPlayer(const FString& GuildName, APalPlayerCharacter* Player);
    
    UFUNCTION(Exec)
    void EnterGuildOtherPlayerBelongTo(const FGuid& TargetPlayerUId);
    
    UFUNCTION(Exec)
    void EnterGuildLocalPlayerToCurrentBaseCampBelongTo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnterGuildLocalPlayer(const FString& GuildName);
    
    UFUNCTION(BlueprintCallable)
    void EnterGroup(const FString& GroupName, FPalInstanceID IndividualId);
    
    UFUNCTION(Exec)
    void EnterDungeonByDataLayer(const FName DataLayerName);
    
    UFUNCTION(Exec)
    void EnableStatUnit();
    
    UFUNCTION(Exec)
    void EnableStatPlayerInfo();
    
    UFUNCTION(Exec)
    void EnableStatPalnet();
    
    UFUNCTION(Exec)
    void EnableStatPalNavigation();
    
    UFUNCTION(Exec)
    void EnableCommandToServer();
    
    UFUNCTION(Exec)
    void EnableCollectServerPalCount();
    
    UFUNCTION(Exec)
    void EasyGamePreset();
    
    UFUNCTION(Exec)
    void DumpSaveData();
    
    UFUNCTION(Exec)
    void DumpMapObjectOctreeStats();
    
    UFUNCTION(Exec)
    void DumpAkComponent();
    
    UFUNCTION(Exec)
    void DropSupply();
    
    UFUNCTION(Exec)
    void DropItems(const FName StaticItemId, const int32 Num, const int32 DropCount);
    
    UFUNCTION(Exec)
    void DropItemByTimer(const FName StaticItemId, const int32 Num, const float Interval);
    
    UFUNCTION(Exec)
    void DropItem(const FName StaticItemId, const int32 Num);
    
    UFUNCTION(Exec)
    void DropBaseCampWorkerAll(const bool bOnPlace);
    
    UFUNCTION(Exec)
    void DropBaseCampWorker(const FGuid& BaseCampId, const bool bOnPlace);
    
    UFUNCTION(Exec)
    void DrawDebugRangeBaseCamp(const float LifeTime);
    
    UFUNCTION(Exec)
    void DrawDebugLimitVolume(const EPalLimitVolumeFlag flag, const float Range, const float Duration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisposeGuild(const FString& GuildName);
    
    UFUNCTION(Exec)
    void DismantleMapObjectFocusAt(const float RaycastLength);
    
    UFUNCTION(Exec)
    void DismantleMapObject(const FGuid& InstanceId);
    
    UFUNCTION(Exec)
    void DismantleBaseCampFirst();
    
    UFUNCTION(Exec)
    void DismantleBaseCampByBaseCampId(const FGuid& BaseCampId);
    
    UFUNCTION(Exec)
    void DisableScreenMessage();
    
    UFUNCTION(Exec)
    void DisableEnemyEyeSight();
    
    UFUNCTION(Exec)
    void DestroyAllAntiAirMissileLaunchers();
    
    UFUNCTION(Exec)
    void DenyCommunicationAllUser();
    
    UFUNCTION(Exec)
    void DeleteWorldAndShutdownRemoteServer();
    
    UFUNCTION(Exec)
    void DeletePlayerSkin(FName SkinName);
    
    UFUNCTION(Exec)
    void DeletePlayerInHardcore();
    
    UFUNCTION(Exec)
    void DeletePlayerAndQuitGame();
    
    UFUNCTION(Exec)
    void DeleteAllMapObjectSpawner();
    
    UFUNCTION(Exec)
    void DeleteAllMapObject();
    
    UFUNCTION(Exec)
    void DelayCommand(const FString& Command, const float DelayTime);
    
    UFUNCTION(Exec)
    void DebugWindow();
    
    UFUNCTION(Exec)
    void DebugSwitchForceDisableAutoSave();
    
    UFUNCTION(Exec)
    void DebugSaveWorldOptionData(const FString& WorldName);
    
    UFUNCTION(Exec)
    void DebugSaveWorldData(const FString& saveName);
    
    UFUNCTION(Exec)
    void DebugSaveLocalWorldData(const FString& saveName);
    
    UFUNCTION(Exec)
    void DebugSaveFullWorldData(const FString& WorldName);
    
    UFUNCTION(Exec)
    void DebugDeleteEnemyCampSaveData();
    
    UFUNCTION(Exec)
    void DebugChangeAutoSaveTimespan(float saveSpan);
    
    UFUNCTION(Exec)
    void DebugAutoSave();
    
    UFUNCTION(Exec)
    void DebugAutoRun();
    
    UFUNCTION(Exec)
    void DamageToPlayer(int32 DamageValue);
    
    UFUNCTION(Exec)
    void DamageBaseCampWorkerToOne();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateGuildWithAdmin(const FString& GuildName, const FGuid& AdminPlayerUId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateGuildAndEnterLocalPlayer(const FString& GuildName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateGuild(const FString& GuildName);
    
    UFUNCTION(Exec)
    void CountPalCharacter();
    
    UFUNCTION(Exec)
    void CopyWorldDirectoryName();
    
    UFUNCTION(Exec)
    void CopyPlayerUId();
    
    UFUNCTION(Exec)
    void CopyPlayerLocation();
    
    UFUNCTION(Exec)
    void CopyLabResearchCompletedIds();
    
    UFUNCTION(Exec)
    void ConsumePlatformInventoryItem(int32 ItemId, int32 Num);
    
    UFUNCTION(Exec)
    void ConnectServer(const FString& Address, const FString& Port, const FString& ServerPassword);
    
    UFUNCTION(Exec)
    void CompleteQuestForce(const FName QuestId);
    
    UFUNCTION(Exec)
    void CompleteLabResearches(const TArray<FName> ResearchIds);
    
    UFUNCTION(Exec)
    void CompleteLabResearchAll();
    
    UFUNCTION(Exec)
    void CompleteLabResearch(const FName ResearchId);
    
    UFUNCTION(Exec)
    void CommandToServer(const FString& Command);
    
    UFUNCTION(Exec)
    void CleatDebugInfoText();
    
    UFUNCTION(Exec)
    void ClearVisitorName();
    
    UFUNCTION(Exec)
    void ClearSupply();
    
    UFUNCTION(Exec)
    void ClearPlatformInventoryItem();
    
    UFUNCTION(Exec)
    void CheckFoliageChunkStatus(const bool bShowInstanceDetail, const bool bShowGridDetail);
    
    UFUNCTION(Exec)
    void ChangePassive_PlayerWeapon(int32 Index, FName SkillName);
    
    UFUNCTION(Exec)
    void ChangeModeReplace(const bool bOn);
    
    UFUNCTION(Exec)
    void ChangeMaxPlayers(int32 Players);
    
    UFUNCTION(Exec)
    void ChangeMaxDrawDistanceStaticMeshImposter(const float Distance);
    
    UFUNCTION(Exec)
    void ChangeHUDScale(float Scale);
    
    UFUNCTION(Exec)
    void ChangeCrossplayPlatforms(const FString& Command, const FString& PlatformName);
    
    UFUNCTION(Exec)
    void ChangeAllowConnectPlatform(const FString& PlatformName);
    
    UFUNCTION(Exec)
    void CauseServerCrash();
    
    UFUNCTION(Exec)
    void CauseEnsure();
    
    UFUNCTION(Exec)
    void CauseCrash();
    
    UFUNCTION(Exec)
    void CaptureSuccessAlways();
    
    UFUNCTION(Exec)
    void CaptureNewMonster(const FName CharacterID);
    
    UFUNCTION(Exec)
    void CaptureFailAlways();
    
    UFUNCTION(Exec)
    void CaptureAllMonsters();
    
    UFUNCTION(Exec)
    void CaptureAllEnemy();
    
    UFUNCTION(Exec)
    void CancelPlayerAction(const EPalActionType ActionType);
    
    UFUNCTION(Exec)
    void CancelConvertItemWork();
    
    UFUNCTION(Exec)
    void BuildNotConsumeMaterials();
    
    UFUNCTION(Exec)
    void BuildDebugBaseCamp(FName Mode);
    
    UFUNCTION(Exec)
    void BotOn();
    
    UFUNCTION(Exec)
    void BotOff();
    
    UFUNCTION(Exec)
    void BlockListRemoveAll();
    
    UFUNCTION(Exec)
    void BlockListDump();
    
    UFUNCTION(Exec)
    void BlockListAllUser();
    
    UFUNCTION(Exec)
    void BeginSpectate(bool bAdminMode);
    
    UFUNCTION(Exec)
    void BanPlayerFromGuildLocalPlayerBelongTo(const FGuid& TargetPlayerUId);
    
    UFUNCTION(Exec)
    void ApplyDebugGameProgress(FName PresetName);
    
    UFUNCTION(Exec)
    void AddTechnologyPoints(int32 AddPoints);
    
    UFUNCTION(Exec)
    void AddRecord_TowerBossDefeat(const EPalBossType BossType, const EPalBossBattleDifficulty Difficulty);
    
    UFUNCTION(Exec)
    void AddRecord_NormalBossDefeatAll();
    
    UFUNCTION(Exec)
    void AddPlayerExp(int32 addExp);
    
    UFUNCTION(Exec)
    void AddPartyExp(int32 addExp);
    
    UFUNCTION(Exec)
    void AddOneStatusPlayer();
    
    UFUNCTION(Exec)
    void AddOneStatusOtomo();
    
    UFUNCTION(Exec)
    void AddOneStatusEnemy();
    
    UFUNCTION(Exec)
    void AddMoney(int64 addValue);
    
    UFUNCTION(Exec)
    void AddMapObjectEffectVisualAround_Burn(const float Range);
    
    UFUNCTION(Exec)
    void AddMapObjectEffectVisualAround(const float Range, const EPalMapObjectVisualEffectType EffectType);
    
    UFUNCTION(Exec)
    void AddGameTime_Minutes(const int32 Minutes);
    
    UFUNCTION(Exec)
    void AddGameTime_Hours(const int32 Hours);
    
    UFUNCTION(Exec)
    void AddExStatusPoint(int32 Point);
    
    UFUNCTION(Exec)
    void AddExpForALLPlayer(int32 addExp);
    
    UFUNCTION(Exec)
    void AddBossTechnologyPoints(int32 AddPoints);
    
    UFUNCTION(Exec)
    void AddBaseCampEnergyAmount(const EPalEnergyType EnergyType, const float Amount);
    
};

