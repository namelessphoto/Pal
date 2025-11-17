#pragma once
#include "CoreMinimal.h"
#include "PalWorldObjectRecordData_MapObjectSpawnerItem.h"
#include "PalWorldObjectRecordData_MapObjectSpawner.generated.h"

USTRUCT()
struct FPalWorldObjectRecordData_MapObjectSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<int32, FPalWorldObjectRecordData_MapObjectSpawnerItem> ItemMap;
    
    PAL_API FPalWorldObjectRecordData_MapObjectSpawner();
};

