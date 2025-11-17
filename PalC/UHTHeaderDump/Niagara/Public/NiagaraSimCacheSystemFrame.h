#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "NiagaraSimCacheDataBuffers.h"
#include "NiagaraSimCacheSystemFrame.generated.h"

USTRUCT()
struct FNiagaraSimCacheSystemFrame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBox LocalBounds;
    
    UPROPERTY()
    FNiagaraSimCacheDataBuffers SystemDataBuffers;
    
    NIAGARA_API FNiagaraSimCacheSystemFrame();
};

