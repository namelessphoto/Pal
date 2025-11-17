#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalDungeonSpawnAreaData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDungeonSpawnAreaData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName DungeonNameTextId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PostfixTextId;
    
    FPalDungeonSpawnAreaData();
};

