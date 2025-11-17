#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectSpawnerItemSaveData.generated.h"

USTRUCT()
struct FPalMapObjectSpawnerItemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int64 NextLotteryGameTime;
    
    UPROPERTY()
    FGuid MapObjectInstanceId;
    
    PAL_API FPalMapObjectSpawnerItemSaveData();
};

