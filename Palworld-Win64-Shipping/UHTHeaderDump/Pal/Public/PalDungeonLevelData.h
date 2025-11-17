#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalDungeonLevelData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDungeonLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SpawnAreaId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WeightInSpawnArea;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LevelName;
    
    FPalDungeonLevelData();
};

