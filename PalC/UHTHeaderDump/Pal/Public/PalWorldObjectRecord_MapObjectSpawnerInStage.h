#pragma once
#include "CoreMinimal.h"
#include "PalStageInstanceId.h"
#include "PalWorldObjectRecordData_MapObjectSpawnerInStage.h"
#include "PalWorldObjectRecorderBase.h"
#include "PalWorldObjectRecord_MapObjectSpawnerInStage.generated.h"

UCLASS()
class UPalWorldObjectRecord_MapObjectSpawnerInStage : public UPalWorldObjectRecorderBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalStageInstanceId, FPalWorldObjectRecordData_MapObjectSpawnerInStage> RecordDataMapByStageInstanceId;
    
public:
    UPalWorldObjectRecord_MapObjectSpawnerInStage();

};

