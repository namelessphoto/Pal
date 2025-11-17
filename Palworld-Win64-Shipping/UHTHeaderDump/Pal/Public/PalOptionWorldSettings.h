#pragma once
#include "CoreMinimal.h"
#include "EPalAllowConnectPlatform.h"
#include "EPalLogFormatType.h"
#include "EPalOptionWorldDeathPenalty.h"
#include "EPalOptionWorldDifficulty.h"
#include "EPalRandomizerType.h"
#include "PalOptionWorldSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    EPalOptionWorldDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalRandomizerType RandomizerType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString RandomizerSeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsRandomizerPalLevelRandom;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float DayTimeSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float NightTimeSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float ExpRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PalCaptureRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PalSpawnNumRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PalDamageRateAttack;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PalDamageRateDefense;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PlayerDamageRateAttack;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PlayerDamageRateDefense;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PlayerStomachDecreaceRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PlayerStaminaDecreaceRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PlayerAutoHPRegeneRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PlayerAutoHpRegeneRateInSleep;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PalStomachDecreaceRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PalStaminaDecreaceRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PalAutoHPRegeneRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PalAutoHpRegeneRateInSleep;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float BuildObjectHpRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float BuildObjectDamageRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float BuildObjectDeteriorationDamageRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float CollectionDropRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float CollectionObjectHpRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float CollectionObjectRespawnSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float EnemyDropItemRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    EPalOptionWorldDeathPenalty DeathPenalty;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bEnablePlayerToPlayerDamage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bEnableFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bEnableInvaderEnemy;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bActiveUNKO;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bEnableAimAssistPad;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bEnableAimAssistKeyboard;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 DropItemMaxNum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 DropItemMaxNum_UNKO;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 BaseCampMaxNum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 BaseCampWorkerMaxNum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float DropItemAliveMaxHours;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bAutoResetGuildNoOnlinePlayers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float AutoResetGuildTimeNoOnlinePlayers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 GuildPlayerMaxNum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 BaseCampMaxNumInGuild;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float PalEggDefaultHatchingTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float WorkSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float autoSaveSpan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bIsMultiplay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bIsPvP;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bHardcore;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bPalLost;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bCharacterRecreateInHardcore;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bCanPickupOtherGuildDeathPenaltyDrop;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bEnableNonLoginPenalty;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bEnableFastTravel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bIsStartLocationSelectByMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bExistPlayerAfterLogout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bEnableDefenseOtherGuildPlayer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bInvisibleOtherGuildBaseCampAreaFX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bBuildAreaLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float ItemWeightRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 CoopPlayerMaxNum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 ServerPlayerMaxNum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FString ServerName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FString ServerDescription;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, NotReplicated)
    FString AdminPassword;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, NotReplicated)
    FString ServerPassword;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 PublicPort;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FString PublicIP;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool RCONEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, NotReplicated)
    int32 RCONPort;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bUseAuth;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    FString BanListURL;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool RESTAPIEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, NotReplicated)
    int32 RESTAPIPort;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bShowPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ChatPostLimitPerMinute;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    TArray<EPalAllowConnectPlatform> CrossplayPlatforms;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsUseBackupSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalLogFormatType LogFormatType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsShowJoinLeftMessage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 SupplyDropSpan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool EnablePredatorBossPal;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 MaxBuildingLimitNum;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float ServerReplicatePawnCullDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bAllowGlobalPalboxExport;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bAllowGlobalPalboxImport;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float EquipmentDurabilityDamageRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float ItemContainerForceMarkDirtyInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    float ItemCorruptionMultiplier;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsForceEnableRandomizerPalLevelRandom_ForUI;
    
    PAL_API FPalOptionWorldSettings();
};

