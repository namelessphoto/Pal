#pragma once
#include "CoreMinimal.h"
#include "NiagaraSimCacheDataBuffers.generated.h"

USTRUCT()
struct FNiagaraSimCacheDataBuffers {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 NumInstances;
    
    UPROPERTY()
    TArray<uint8> FloatData;
    
    UPROPERTY()
    TArray<uint8> HalfData;
    
    UPROPERTY()
    TArray<uint8> Int32Data;
    
    UPROPERTY()
    TArray<int32> IDToIndexTable;
    
    UPROPERTY()
    uint32 IDAcquireTag;
    
    NIAGARA_API FNiagaraSimCacheDataBuffers();
};

