#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalWorldObjectRecordData_MapObjectSpawner.h"
#include "PalWorldObjectRecordData_MapObjectSpawnerInStage.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldObjectRecordData_MapObjectSpawnerInStage {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalWorldObjectRecordData_MapObjectSpawner> RecordDataMapByLevelObjectInstanceId;
    
    PAL_API FPalWorldObjectRecordData_MapObjectSpawnerInStage();
};

