#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalChatCategory.h"
#include "EPalMapObjectOperationResult.h"
#include "EPalPlayerJoinResult.h"
#include "EPalStageType.h"
#include "PalBaseCampWorkerMovementLogDisplayData.h"
#include "PalBuildResultParameter.h"
#include "PalBuildingCountRepInfo.h"
#include "PalChatMessage.h"
#include "PalDebugOtomoPalInfo.h"
#include "PalGuildLabCompleteLogDisplayData.h"
#include "PalGuildPlayerInfo.h"
#include "PalInstanceID.h"
#include "PalLogInfo_DropPal.h"
#include "PalMealLogDisplayData.h"
#include "PalOptionCommonSettings.h"
#include "PalPlayerAccountInitData.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalPlayerInfoForMap.h"
#include "PalPlayerInitializeParameter.h"
#include "PalPlayerReplicationEntity.h"
#include "PalPlayerSettingsForServer.h"
#include "PalRandomizerReplicateData.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUIBossDefeatRewardDisplayData.h"
#include "PalUIPalCaptureInfo.h"
#include "PalPlayerState.generated.h"

class APalCharacter;
class APalPlayerState;
class UPalGroupGuildBase;
class UPalIndividualCharacterHandle;
class UPalPlayerDataCharacterMake;
class UPalPlayerDataPalStorage;
class UPalPlayerInventoryData;
class UPalPlayerLocalRecordData;
class UPalPlayerOtomoData;
class UPalPlayerRecordData;
class UPalPlayerSkinData;
class UPalPlayerTreasureMapPointData;
class UPalQuestManager;
class UPalSyncTeleportComponent;
class UPalTechnologyData;
class UPalUserAchievementChecker;
class UPalWorldMapUIData;

UCLASS(MinimalAPI)
class APalPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartCrimeDelegate, FGuid, CrimeInstanceId);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FReturnSelfSingleDelegate, APalPlayerState*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, APalPlayerState*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReportCrimeIdsDelegate, UPalIndividualCharacterHandle*, CriminalHandle, const TArray<FName>&, CrimeIds);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReleaseWantedDelegate, UPalIndividualCharacterHandle*, CriminalHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOperatingResultNotifiedDelegate, const bool, IsSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMultiHatchCompleteDelegate, const TArray<FPalInstanceID>&, HatchedIDs);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoadingProgressUpdate, int32, AddStep, int32, MaxStep);
    DECLARE_DYNAMIC_DELEGATE(FOnCompleteLoadWorldPartitionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompleteLoadInitWorldPartitionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedPlayerUId, APalPlayerState*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKillPalDelegate, UPalIndividualCharacterHandle*, DeadEnemyHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndCrimeDelegate, FGuid, CrimeInstanceId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapturePalInServerDelegate, UPalIndividualCharacterHandle*, CaptureCharacterHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapturePalDelegate, const FPalUIPalCaptureInfo&, CaptureInfo);
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadingProgressUpdate OnLoadingProgressUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnBoothTradeCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMultiHatchCompleteDelegate OnMultiHatchComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnOperatingResultNotifiedDelegate OnOperatingPassiveComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnOperatingResultNotifiedDelegate OnOperatingGenderComplete;
    
    UPROPERTY(BlueprintAssignable)
    FReportCrimeIdsDelegate OnReportCrimeIdsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReleaseWantedDelegate OnReleaseWantedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FStartCrimeDelegate OnStartCrimeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEndCrimeDelegate OnEndCrimeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCompleteLoadInitWorldPartitionDelegate OnCompleteLoadInitWorldPartitionDelegate_InClient;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_PlayerUId)
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FGuid OverridePlayerUIdFromClient;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    FPalInstanceID IndividualHandleId;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    FVector CachedPlayerLocation;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    FQuat CachedPlayerRotation;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    bool CachedIsPlayerDead;
    
    UPROPERTY(Replicated, VisibleAnywhere)
    bool CachedIsPlayerDying;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalPlayerOtomoData* OtomoData;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalPlayerDataCharacterMake* CharacterMakeData;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    UPalPlayerInventoryData* InventoryData;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    UPalPlayerDataPalStorage* PalStorage;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    UPalTechnologyData* TechnologyData;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    UPalPlayerRecordData* RecordData;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    UPalPlayerSkinData* PlayerSkinData;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    UPalPlayerTreasureMapPointData* TreasureMapPointData;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    bool bIsSelectedInitMapPoint;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    TArray<FPalBuildingCountRepInfo> BaseCampBuildingNum;
    
    UPROPERTY(VisibleInstanceOnly)
    bool bDetectedInValidPlayer;
    
    UPROPERTY(VisibleInstanceOnly)
    UPalPlayerLocalRecordData* LocalRecordData;
    
    UPROPERTY(VisibleInstanceOnly)
    UPalWorldMapUIData* WorldMapData;
    
    UPROPERTY(Replicated, VisibleInstanceOnly)
    UPalQuestManager* QuestManager;
    
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRep_GuildBelongTo)
    UPalGroupGuildBase* GuildBelongTo;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPalSyncTeleportComponent* SyncTeleportComp;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FDateTime StartPlayTime;
    
    UPROPERTY(Transient)
    UPalUserAchievementChecker* UserAchievementChecker;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsNewCharacter;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalIndividualCharacterHandle* TryCreateIndividualHandleTemporarily;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid LoginTryingPlayerUId_InServer;
    
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<FGuid, bool> CompleteLoadWorldPartitionMap_InServer;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool bIsCompleteLoadInitWorldPartition_InServer;
    
private:
    UPROPERTY()
    bool bIsCompleteSyncPlayerFromServer_InClient;
    
    UPROPERTY(Transient)
    FPalPlayerAccountInitData AcountInitData;
    
    UPROPERTY()
    FPalPlayerSettingsForServer PlayerSettingsForServer;
    
    UPROPERTY(Transient)
    TArray<FPalLogInfo_DropPal> DropPalInfo;
    
    UPROPERTY(Transient)
    TMap<FGuid, FTimerHandle> WaitLoadingWorldPartitionTimerMap;
    
    UPROPERTY()
    FString AccountName;
    
    UPROPERTY(Transient)
    FPalPlayerReplicationEntity ReplicationEntity;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_AllowSkipNight)
    bool bAllowSkipNight;
    
public:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    int32 ChatCounter;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    bool DisableGuildJoin;
    
    APalPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void WaitWorldPartitionDelegateFromAction(FGuid InGuid, FTimerHandle& OutTimerHandle, APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void WaitWorldPartitionDelegate(FTimerHandle& OutTimerHandle, APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate);
    
    UFUNCTION()
    void ShowUnlockHardModeUI();
    
    UFUNCTION()
    void ShowTowerBossDefeatRewardUI();
    
    UFUNCTION()
    void ShowOilRigCrateOpenUI();
    
    UFUNCTION()
    void ShowBossDefeatRewardUI(const FPalUIBossDefeatRewardDisplayData& BossDefeatDisplayData);
    
    UFUNCTION(Client, Reliable)
    void SendRandomizerReplicateData(FPalRandomizerReplicateData InRandomizerReplicateData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendCompleteLoadWorldPartition_InServer(FGuid InGuid, bool bIsComplete);
    
private:
    UFUNCTION(Reliable, Server)
    void SendAccountInitData_ForServer(const FPalPlayerAccountInitData& accountInitData);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestSpawnMonsterForPlayer(const FName& CharacterID, int32 Num, int32 Level);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRespawn();
    
    UFUNCTION(Reliable, Server)
    void RequestRandomizerReplicateData();
    
    UFUNCTION(Reliable, Server)
    void RequestPalBoxSyncPage_ToServer(int32 pageIndex);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestJoinPlayer_ToServer(const FGuid& JoinPlayerUId, const FPalPlayerInitializeParameter& InitPlayerParam);
    
public:
    UFUNCTION(Reliable, Server)
    void RequestForceSyncPalBoxSlot_ToServer(bool isForceSync);
    
    UFUNCTION(Reliable, Server)
    void RequestDeletePlayerSelf_ToServer();
    
    UFUNCTION(BlueprintCallable)
    bool RequestDeletePlayerSelf();
    
private:
    UFUNCTION(Reliable, Server)
    void RequestBotLocation();
    
public:
    UFUNCTION(Reliable, Server)
    void RequestAllowSkipNight_ToServer();
    
    UFUNCTION(BlueprintCallable)
    void RequestAllowSkipNight();
    
private:
    UFUNCTION(Client, Reliable)
    void RequestAccountInitData_ForClient();
    
public:
    UFUNCTION(Client, Reliable)
    void RegisterForPalDex_ToClient(const FPalUIPalCaptureInfo& CaptureInfo, bool bDisplayHUD);
    
    UFUNCTION()
    void RegisterForPalDex_ServerInternal(FPalInstanceID IndividualId, bool bDisplayHUD);
    
    UFUNCTION(Client, Reliable)
    void ReceiveNotifyLoginComplete();
    
    UFUNCTION(Client, Reliable)
    void ReceiveDeletePlayerSelf_ToRequestClient(bool bIsSuccess);
    
private:
    UFUNCTION(Client, Reliable)
    void ReceiveBuildResult_ToRequestClient(const EPalMapObjectOperationResult Result, FPalBuildResultParameter BuildResultParameter);
    
    UFUNCTION(Reliable, Server)
    void OverridePsnAccountId(const uint64& InPsnAccountId);
    
    UFUNCTION()
    void OnUpdatePlayerInfoInGuildBelongTo(const UPalGroupGuildBase* Guild, const FGuid& InPlayerUId, const FPalGuildPlayerInfo& InPlayerInfo);
    
    UFUNCTION()
    void OnRep_PlayerUId();
    
    UFUNCTION()
    void OnRep_GuildBelongTo(UPalGroupGuildBase* OldValue);
    
    UFUNCTION()
    void OnRep_AllowSkipNight();
    
public:
    UFUNCTION()
    void OnRelicNumAdded(int32 AddNum);
    
    UFUNCTION(Client, Reliable)
    void OnNotifiedReturnToFieldFromStage_ToClient();
    
    UFUNCTION(Client, Reliable)
    void OnNotifiedEnteredStage_ToClient();
    
    UFUNCTION()
    void OnNotifiedClientInitializedEssentialInServer();
    
private:
    UFUNCTION()
    void OnMultiHatchedIndividualHandle_ServerInternal(FPalInstanceID IndividualId);
    
    UFUNCTION()
    void OnFinishInitSelectMapTeleport(const FGuid TeleportPlayerUId);
    
public:
    UFUNCTION()
    void OnEndLocalWorldAutoSave(bool bIsSuccess);
    
private:
    UFUNCTION()
    void OnCreatePlayerIndividualHandle_InServer(FPalInstanceID ID);
    
    UFUNCTION()
    void OnCreatedGrantedIndividualHandle_ServerInternal(FPalInstanceID IndividualId);
    
    UFUNCTION()
    void OnCompleteSyncWorld_InClient(APalPlayerState* PlayerState);
    
    UFUNCTION()
    void OnCompleteSyncPlayer_InClient(APalPlayerState* PlayerState);
    
    UFUNCTION()
    void OnCompleteSyncAll_InClient(APalPlayerState* PlayerState);
    
    UFUNCTION()
    void OnCompleteLoadInitWorldPartition_InClient(APalPlayerState* PlayerState);
    
public:
    UFUNCTION()
    void OnClosedDeletePlayerSelfNotifyDialog(bool bYes);
    
private:
    UFUNCTION()
    void OnChangeOptionCommonSettings(const FPalOptionCommonSettings& PrevSettings, const FPalOptionCommonSettings& NewSettings);
    
public:
    UFUNCTION(Client, Reliable)
    void NotifyTradeComplete_ToClient();
    
    UFUNCTION()
    void NotifyRunInitialize_ToClient();
    
    UFUNCTION(Reliable, Server)
    void NotifyPalBoxOpenInHardcore_ToServer();
    
    UFUNCTION(Client, Reliable)
    void NotifyOperatingPassiveComplete_ToClient(bool IsSuccess);
    
    UFUNCTION(Client, Reliable)
    void NotifyOperatingGenderComplete_ToClient(bool IsSuccess);
    
    UFUNCTION(Client, Reliable)
    void NotifyMultiHatchComplete_ToClient(const TArray<FPalInstanceID>& HatchedIDs) const;
    
private:
    UFUNCTION(Client, Reliable)
    void NotifyInvalidPlayer_ToClient();
    
public:
    UFUNCTION(Reliable, Server)
    void NotifyForceUpdateInventory_ToServer(bool IsOpen);
    
private:
    UFUNCTION(Client, Reliable)
    void NotifyFailedJoin_ToClient(const EPalPlayerJoinResult Result);
    
public:
    UFUNCTION(Client, Reliable)
    void NotifyDropOtomoInfo(const TArray<FPalLogInfo_DropPal>& InDropPalInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadTitleLevel(bool bIsSaveSuccess);
    
    UFUNCTION(BlueprintPure)
    bool IsSelectedInitMapPoint();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerDying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerCompletelyDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInStateByStageType(EPalStageType StageType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInStage() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCompleteLoadWorldPartition_InServer(FGuid InGuid) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCompleteLoadInitWorldPartition();
    
    UFUNCTION(BlueprintPure)
    bool IsAllowSkipNight() const;
    
    UFUNCTION(BlueprintPure)
    UPalWorldMapUIData* GetWorldMapData() const;
    
    UFUNCTION(BlueprintPure)
    UPalPlayerTreasureMapPointData* GetTreasureMapPointData() const;
    
    UFUNCTION(BlueprintPure)
    UPalTechnologyData* GetTechnologyData() const;
    
    UFUNCTION(BlueprintPure)
    UPalSyncTeleportComponent* GetSyncTeleportComp() const;
    
    UFUNCTION(BlueprintPure)
    UPalPlayerRecordData* GetRecordData() const;
    
    UFUNCTION(BlueprintPure)
    UPalQuestManager* GetQuestManager() const;
    
    UFUNCTION(BlueprintPure)
    UPalPlayerSkinData* GetPlayerSkinData() const;
    
    UFUNCTION(BlueprintPure)
    FPalPlayerInfoForMap GetPlayerInfoForMap();
    
    UFUNCTION(BlueprintPure)
    UPalPlayerDataPalStorage* GetPalStorage() const;
    
    UFUNCTION(BlueprintPure)
    UPalPlayerOtomoData* GetPalPlayerOtomoData() const;
    
    UFUNCTION(BlueprintPure)
    UPalPlayerDataCharacterMake* GetPalPlayerCharacterMakeData() const;
    
    UFUNCTION(BlueprintPure)
    UPalPlayerLocalRecordData* GetLocalRecordData() const;
    
    UFUNCTION(BlueprintPure)
    UPalPlayerInventoryData* GetInventoryData() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FPalLogInfo_DropPal> GetAndClearLastDropPalInfo();
    
private:
    UFUNCTION()
    void FixedCharacterName(const FString& CharacterName);
    
    UFUNCTION()
    void FixedCharacterMakeData(const FPalPlayerDataCharacterMakeInfo& MakeInfo);
    
public:
    UFUNCTION(Reliable, Server)
    void EnterChat_Receive(const FPalChatMessage& ChatMessage);
    
    UFUNCTION(BlueprintCallable)
    bool EnterChat(FText Msg, EPalChatCategory Category);
    
private:
    UFUNCTION(Client, Reliable)
    void Debug_ShutdownToClient();
    
public:
    UFUNCTION()
    void Debug_SetOverridePlayerUID(FGuid NewPlayerUId);
    
private:
    UFUNCTION(Client, Reliable)
    void Debug_SetIsOverridePlayerUIDToClient(bool bIsOverride);
    
public:
    UFUNCTION(Reliable, Server)
    void Debug_SetDestructionByCompleteBuiltFlag_ToServer();
    
private:
    UFUNCTION(Reliable, Server)
    void Debug_RequestStopAICheckOfCharacter_ToServer(APalCharacter* TargetCharacter);
    
    UFUNCTION(Reliable, Server)
    void Debug_RequestStartAICheckOfCharacter_ToServer(APalCharacter* TargetCharacter);
    
    UFUNCTION(Reliable, Server)
    void Debug_RequestShutdownRemoteServer_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_RequestShutdownRemoteServer();
    
private:
    UFUNCTION(Reliable, Server)
    void Debug_RequestDeletePlayerSelf_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_RequestDeletePlayerSelf();
    
private:
    UFUNCTION(Reliable, Server)
    void Debug_RequestCauseServerCrash_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_RequestCauseServerCrash();
    
private:
    UFUNCTION(Reliable, Server)
    void Debug_RequestAllowBroadcastAIInfoOfCharacter_ToServer(APalCharacter* TargetCharacter);
    
public:
    UFUNCTION(Reliable, Server)
    void Debug_RepairEquipment_ToServer();
    
private:
    UFUNCTION(Client, Reliable)
    void Debug_ReceiveDeletePlayerSelf_ToRequestClient(const bool bResult);
    
    UFUNCTION()
    void Debug_OnCreatedIndividual(FPalInstanceID ID);
    
    UFUNCTION(Reliable, Server)
    void Debug_DeleteWorldAndShutdownRemoteServer_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_DeleteWorldAndShutdownRemoteServer();
    
    UFUNCTION(Reliable, Server)
    void Debug_CaptureNewMonsterByDebugOtomoInfo_ToServer(const FPalDebugOtomoPalInfo& Info, bool bRandomPassiveSkill);
    
    UFUNCTION(Reliable, Server)
    void Debug_CaptureNewMonster_ToServer(FName CharacterID);
    
    UFUNCTION(Reliable, Server)
    void Debug_BuildDebugBaseCamp_ToServer(FName CampMode, int32 workerCount);
    
    UFUNCTION(Reliable, Server)
    void Debug_BotEnterDungeon_ToServer();
    
    UFUNCTION(BlueprintCallable)
    void ClearCompleteLoadWorldPartition_InServer(FGuid InGuid);
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnCompleteSyncPlayerFromServer_InClient(APalPlayerState::FReturnSelfSingleDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnCompleteLoadInitWorldPartition_InClient(APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate);
    
    UFUNCTION(Client, Reliable)
    void AddMealLog(const TArray<FPalMealLogDisplayData>& DisplayDataArray);
    
    UFUNCTION(Client, Reliable)
    void AddItemGetLog_ToClient(const FPalStaticItemIdAndNum& ItemAndNum, const float DelayTime) const;
    
    UFUNCTION(Client, Reliable)
    void AddGuildLabCompleteLog(const TArray<FPalGuildLabCompleteLogDisplayData>& DisplayDataArray);
    
    UFUNCTION(Client, Reliable)
    void AddFullPalBoxLog_ToClient() const;
    
    UFUNCTION(Client, Reliable)
    void AddFullInventoryLog_ToClient() const;
    
    UFUNCTION(Client, Reliable)
    void AddBaseCampWorkerMovementLog(const TArray<FPalBaseCampWorkerMovementLogDisplayData>& DisplayDataArray);
    
private:
    UFUNCTION()
    void AchivementUnlockCheck();
    
};

