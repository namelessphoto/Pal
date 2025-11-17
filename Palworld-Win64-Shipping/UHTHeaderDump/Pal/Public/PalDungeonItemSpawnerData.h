#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalDungeonItemSpawnerType.h"
#include "PalDungeonItemSpawnerData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDungeonItemSpawnerData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SpawnAreaId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalDungeonItemSpawnerType Type;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemFieldLotteryName;
    
    FPalDungeonItemSpawnerData();
};

