#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectDestroyFXType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectDropItemData.h"
#include "PalFoliagePresetData.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliagePresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_MapObjectData FoliageMapObjectId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Hp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNotDropItemIfDamagedOverMaxHp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalMapObjectDropItemData> DamagedDropItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_ItemData DropItemId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DropItemNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DropEXP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalMapObjectDestroyFXType DestroyFXType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DistanceFromPlayerNotRespawn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RespawnIntervalRealMinutes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RetryRespawnIntervalRealMinutes;
    
    PAL_API FPalFoliagePresetData();
};

