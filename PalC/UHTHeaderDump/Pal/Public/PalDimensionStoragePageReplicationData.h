#pragma once
#include "CoreMinimal.h"
#include "EPalDimensionStorageReplicationTriggerType.h"
#include "PalDimensionPalStorageSaveParameter.h"
#include "PalDimensionStoragePageReplicationData.generated.h"

USTRUCT(BlueprintType)
struct FPalDimensionStoragePageReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalDimensionPalStorageSaveParameter> PageData;
    
    UPROPERTY()
    int32 pageIndex;
    
    UPROPERTY()
    bool bDirtyToggle;
    
    UPROPERTY()
    EPalDimensionStorageReplicationTriggerType TriggerType;
    
    PAL_API FPalDimensionStoragePageReplicationData();
};

