#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EWorldPartitionRuntimeCellState -FallbackName=EWorldPartitionRuntimeCellState
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldPartitionStreamingQuerySource -FallbackName=WorldPartitionStreamingQuerySource
#include "PalWaitLoadingWorldPartitionParameter.generated.h"

USTRUCT()
struct FPalWaitLoadingWorldPartitionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FWorldPartitionStreamingQuerySource QuerySource;
    
    UPROPERTY(Transient)
    EWorldPartitionRuntimeCellState CellState;
    
    UPROPERTY(Transient)
    float IntervalTime;
    
    UPROPERTY(Transient)
    float InFirstDelayTime;
    
    PAL_API FPalWaitLoadingWorldPartitionParameter();
};

