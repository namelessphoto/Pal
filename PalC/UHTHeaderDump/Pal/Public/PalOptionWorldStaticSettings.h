#pragma once
#include "CoreMinimal.h"
#include "EPalBuildingLimitType.h"
#include "PalOptionValueFloat.h"
#include "PalOptionValueInt.h"
#include "PalOptionWorldStaticSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionWorldStaticSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat DayTimeSpeedRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat NightTimeSpeedRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat ExpRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PalCaptureRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PalSpawnNumRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PalDamageRateAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PalDamageRateDefense;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PlayerDamageRateAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PlayerDamageRateDefense;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PlayerStomachDecreaceRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PlayerStaminaDecreaceRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PlayerAutoHPRegeneRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PlayerAutoHpRegeneRateInSleep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PalStomachDecreaceRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PalStaminaDecreaceRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PalAutoHPRegeneRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat PalAutoHpRegeneRateInSleep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat BuildObjectHpRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat BuildObjectDamageRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat BuildObjectDeteriorationDamageRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat CollectionDropRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat CollectionObjectHpRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat CollectionObjectRespawnSpeedRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat EnemyDropItemRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueInt DropItemMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueInt DropItemMaxNum_UNKO;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat WorkSpeedRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueInt AutoResetGuildTimeNoOnlinePlayers;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueInt GuildPlayerMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueInt BaseCampMaxNumInGuild;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueInt PalEggDefaultHatchingTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueInt BaseCampWorkerMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueInt autoSaveSpan;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueInt SupplyDropSpan;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat ItemWeightRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalBuildingLimitType, int32> BuildingLimitType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat ServerReplicatePawnCullDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat EquipmentDurabilityDamageRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalOptionValueFloat ItemCorruptionMultiplier;
    
    PAL_API FPalOptionWorldStaticSettings();
};

