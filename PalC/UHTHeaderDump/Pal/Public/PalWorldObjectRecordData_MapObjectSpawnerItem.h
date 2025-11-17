#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GameDateTime.h"
#include "PalWorldObjectRecordData_MapObjectSpawnerItem.generated.h"

USTRUCT()
struct FPalWorldObjectRecordData_MapObjectSpawnerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGameDateTime NextSpawnLotteryGameTime;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid MapObjectInstanceId;
    
    PAL_API FPalWorldObjectRecordData_MapObjectSpawnerItem();
};

