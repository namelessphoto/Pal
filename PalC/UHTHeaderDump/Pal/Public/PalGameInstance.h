#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
//CROSS-MODULE INCLUDE V2: -ModuleName=PocketpairUser -ObjectName=JoinSessionResultType -FallbackName=JoinSessionResultType
#include "PalOptionWorldSettings.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "Templates/SubclassOf.h"
#include "PalGameInstance.generated.h"

class AController;
class APawn;
class IPalGameSystemNeedSync;
class UPalGameSystemNeedSync;
class UPalActionDummyTargetManager;
class UPalAssetStreamableManager;
class UPalAudioSettingSystem;
class UPalBaseCampManager;
class UPalBattleManager;
class UPalBossBattleManager;
class UPalBulletCreator;
class UPalCharacterContainerManager;
class UPalCharacterImportanceManager;
class UPalCharacterManager;
class UPalCharacterParameterStorageSubsystem;
class UPalCoopSkillSearchSystem;
class UPalDamagePopUpManager;
class UPalDataTableRowIdMapper;
class UPalDatabaseCharacterParameter;
class UPalDeadBodyManager;
class UPalDeathPenaltyManager;
class UPalDimensionLockerControlSubsystem;
class UPalDisplaySafeAreaDebugger;
class UPalDistributeTickManager;
class UPalEventNotifySystem;
class UPalExpDatabase;
class UPalFishingSystem;
class UPalGameSetting;
class UPalGamepadButtonImageDatabase;
class UPalGdkManager;
class UPalGroupManager;
class UPalHUDService;
class UPalItemContainerManager;
class UPalItemIDManager;
class UPalLocationManager;
class UPalLogManager;
class UPalLoginManager;
class UPalMapObjectManager;
class UPalMasterDataTables;
class UPalNPCManager;
class UPalObjectCollector;
class UPalObjectPoolManager;
class UPalOilrigManager;
class UPalOnlineManager;
class UPalPassiveSkillManager;
class UPalPersistentSoundPlayer;
class UPalPlayerDataStorage;
class UPalPlayerManager;
class UPalPsnManager;
class UPalRaidBossManager;
class UPalSaveGameManager;
class UPalShopManager;
class UPalSkinManager;
class UPalSupplyManager;
class UPalTreasureMapWorldSubsystem;
class UPalTutorialManager;
class UPalVisualEffectDataBase;
class UPalWazaDatabase;
class UPalWorkProgressManager;
class UPalWorldSecuritySystem;
class UWorld;

UCLASS(NonTransient)
class PAL_API UPalGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnLocalPlayerControllerChanged, APawn*, Pawn, AController*, Controller);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMemoryWarning, bool, bIsOver);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompletedCharacterMake);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFxiedCharacterName, const FString&, Name);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFxiedCharacterMakeData, const FPalPlayerDataCharacterMakeInfo&, MakeInfo);
    
    UPROPERTY(BlueprintAssignable)
    FOnCompletedCharacterMake OnCompletedCharacterMakeDelegate;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnPawnLocalPlayerControllerChanged OnPawnLocalPlayerControllerChangedDelegates;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnMemoryWarning OnMemoryWarning;
    
    UPROPERTY(BlueprintReadOnly)
    bool bNetworkError;
    
    UPROPERTY(BlueprintReadOnly)
    bool bSaveError;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisplayVersion;
    
    UPROPERTY(BlueprintReadOnly)
    FString ErrorString;
    
    UPROPERTY(BlueprintReadOnly)
    FString InputPassword;
    
    UPROPERTY()
    TArray<FString> BanList;
    
    UPROPERTY(Transient)
    UPalLoginManager* LoginManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalGameSetting> GameSettingClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalGameSetting* GameSetting;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalOnlineManager* OnlineManager;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalGdkManager* GdkManager;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalPsnManager* PsnManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalMasterDataTables> MasterDataTablesClass;
    
    UPROPERTY(Transient)
    UPalMasterDataTables* MasterDataTables;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalMapObjectManager> MapObjectManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalGroupManager> GroupManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalCharacterManager> CharacterManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalCharacterContainerManager> CharacterContainerManagerClass;
    
    UPROPERTY(Transient)
    UPalCharacterContainerManager* CharacterContainerManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalBaseCampManager> BaseCampManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalWorkProgressManager> WorkProgressManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalDamagePopUpManager> DamagePopUpManagerClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalDamagePopUpManager* DamagePopUpManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalItemContainerManager> ItemContainerManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalItemIDManager> ItemIDManagerClass;
    
    UPROPERTY(BlueprintReadOnly)
    UPalItemIDManager* ItemIDManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalWazaDatabase> WazaDatabaseClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalWazaDatabase* WazaDatabase;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPalGamepadButtonImageDatabase* GamepadButtonImageDatabase;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalBattleManager> BattleManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalBossBattleManager> BossBattleManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalRaidBossManager> RaidBossManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalOilrigManager> OilrigManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPlayerDataStorage> PlayerDataStorageClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalPlayerDataStorage* PlayerDataStorage;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalHUDService> HUDServiceClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalHUDService* HUDService;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalExpDatabase> ExpDatabaseClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalExpDatabase* ExpDatabase;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalDatabaseCharacterParameter> DatabaseCharacterParameterClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalDatabaseCharacterParameter* DatabaseCharacterParameter;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalAssetStreamableManager> AssetStreamableManagerClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalAssetStreamableManager* AssetStreamableManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalDistributeTickManager> DistributeTickManagerClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalDistributeTickManager* DistributeTickManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPassiveSkillManager> PassiveSkillManagerClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalPassiveSkillManager* PassiveSkillManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalDataTableRowIdMapper> DataTableRowIdMapperClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalDataTableRowIdMapper* DataTableRowIdMapper;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalDeadBodyManager> DeadBodyManagerClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalDeadBodyManager* DeadBodyManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalBulletCreator> BulletCreatorClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalBulletCreator* BulletCreator;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPlayerManager> PlayerManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalSaveGameManager> SaveGameManagerClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalSaveGameManager* SaveGameManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalVisualEffectDataBase> VisualEffectDataBaseClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalVisualEffectDataBase* VisualEffectDataBase;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalEventNotifySystem> EventNotifySystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalWorldSecuritySystem> WorldSecuritySystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalLocationManager> LocationManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalNPCManager> NPCManagerClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalNPCManager* NPCManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalDeathPenaltyManager> DeathPenaltyManagerClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalDeathPenaltyManager* DeathPenaltyManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalCoopSkillSearchSystem> CoopSkillSearchSystemClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalCoopSkillSearchSystem* CoopSkillSearchSystem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalCharacterImportanceManager> CharacterImportanceManagerClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalCharacterImportanceManager* CharacterImportanceManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalAudioSettingSystem> AudioSettingClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalAudioSettingSystem* AudioSettingSystem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalCharacterParameterStorageSubsystem> CharacterParameterStorageSubsystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalTutorialManager> TutorialManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalObjectCollector> ObjectCollectorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalActionDummyTargetManager> ActionDummyTargetManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalLogManager> LogManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalSkinManager> SkinManagerClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalSkinManager* SkinManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalSupplyManager> SupplyManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalTreasureMapWorldSubsystem> TreasureMapWorldSubsystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalShopManager> ShopManagerSubsystemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalObjectPoolManager> ObjectPoolClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalFishingSystem> FishingSystemClass;
    
    UPROPERTY(BlueprintReadOnly, Config)
    int32 revisionNum;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bUseAsyncMovement;
    
    UPROPERTY(BlueprintReadOnly, Config)
    int32 MemoryWarningThresholdMB;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalDimensionLockerControlSubsystem> DimensionLockerControlSubsystemClass;
    
    UPROPERTY(BlueprintAssignable)
    FFxiedCharacterMakeData FxiedCharacterMakeDataDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FFxiedCharacterName FxiedCharacterNameDelegate;
    
    UPROPERTY()
    UPalDisplaySafeAreaDebugger* DisplaySafeAreaDebugger;
    
private:
    UPROPERTY(Transient)
    TArray<TScriptInterface<IPalGameSystemNeedSync>> NeedWorldSyncSystems;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalPersistentSoundPlayer> TitleBGMPlayerClass;
    
    UPROPERTY(Transient)
    UPalPersistentSoundPlayer* TitleBGMPlayer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FString SelectedWorldName;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FString SelectedWorldSaveDirectoryName;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bIsNewGame;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalOptionWorldSettings NewGameWorldSetting;
    
public:
    UPalGameInstance();

    UFUNCTION(BlueprintCallable)
    void ShowUIMultiplayRestriction(bool bOverrideChecking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCharacterMakeScreen();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupGameInit();
    
    UFUNCTION(BlueprintCallable)
    void SetNewWorldName(const FString& WorldName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNewGame();
    
    UFUNCTION(BlueprintCallable)
    bool SelectWorldSaveDirectoryName(const FString& WorldSaveDirectoryName);
    
    UFUNCTION(BlueprintCallable)
    bool SelectWorld(const FString& WorldName);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OverrideLoadMap(const TSoftObjectPtr<UWorld>& World);
    
private:
    UFUNCTION()
    void OnInitializeCompleteSystem();
    
public:
    UFUNCTION()
    void OnCompleteShowMultiplayRestrictionMessageDialog(bool bSuccess);
    
    UFUNCTION()
    void OnCompleteMuyltiplayRestrictedDialog(bool bResult);
    
    UFUNCTION()
    void OnCompletedJoinSession(bool IsSuccess, JoinSessionResultType Type);
    
    UFUNCTION()
    void OnCompletedFindSessions(bool bIsSuccess, const TArray<FBlueprintSessionResult>& Results, const FString& ErrorStr);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadingFinished();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayFromTitle();
    
    UFUNCTION(BlueprintPure)
    bool IsNewGame() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLoggedin();
    
    UFUNCTION(BlueprintCallable)
    void GoToDefaultMap();
    
    UFUNCTION(BlueprintPure)
    FString GetSelectedWorldSaveDirectoryName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetSelectedWorldName() const;
    
    UFUNCTION(BlueprintPure)
    UPalPsnManager* GetPsnManager() const;
    
    UFUNCTION(BlueprintPure)
    UPalOnlineManager* GetOnlineManager() const;
    
    UFUNCTION(BlueprintPure)
    UPalGdkManager* GetGdkManager() const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteInitCharacterMakeData();
    
    UFUNCTION(BlueprintCallable)
    void ClearSaveError();
    
    UFUNCTION(BlueprintCallable)
    void ClearNetworkError();
    
    UFUNCTION()
    void CheckInvite();
    
    UFUNCTION()
    void ApplicationHasReactivated();
    
    UFUNCTION()
    void ApplicationHasEnteredForeground();
    
};

