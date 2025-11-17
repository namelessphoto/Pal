#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalOptionWorldDeathPenalty.h"
#include "EPalOptionWorldDifficulty.h"
#include "EPalRandomizerType.h"
#include "PalOptionWorldPresetRow.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionWorldPresetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalOptionWorldDifficulty Diffculty;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalRandomizerType RandomizerType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DayTimeSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float NightTimeSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ExpRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalCaptureRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalSpawnNumRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalDamageRateAttack;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalDamageRateDefense;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PlayerDamageRateAttack;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PlayerDamageRateDefense;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PlayerStomachDecreaceRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PlayerStaminaDecreaceRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PlayerAutoHPRegeneRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PlayerAutoHpRegeneRateInSleep;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalStomachDecreaceRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalStaminaDecreaceRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalAutoHPRegeneRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalAutoHpRegeneRateInSleep;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float BuildObjectHpRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float BuildObjectDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float BuildObjectDeteriorationDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CollectionDropRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CollectionObjectHpRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CollectionObjectRespawnSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float EnemyDropItemRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EPalOptionWorldDeathPenalty DeathPenalty;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bActiveUNKO;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DropItemMaxNum_UNKO;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bEnableInvaderEnemy;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    int32 DropItemMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAutoResetGuildNoOnlinePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float AutoResetGuildTimeNoOnlinePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 GuildPlayerMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalEggDefaultHatchingTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 BaseCampWorkerMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 SupplyDropSpan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bHardcore;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bPalLost;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bAllowGlobalPalboxExport;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly)
    bool bAllowGlobalPalboxImport;
    
    PAL_API FPalOptionWorldPresetRow();
};

