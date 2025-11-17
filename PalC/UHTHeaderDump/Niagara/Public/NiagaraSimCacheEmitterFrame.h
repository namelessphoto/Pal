#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "NiagaraSimCacheDataBuffers.h"
#include "NiagaraSimCacheEmitterFrame.generated.h"

USTRUCT()
struct FNiagaraSimCacheEmitterFrame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBox LocalBounds;
    
    UPROPERTY()
    int32 TotalSpawnedParticles;
    
    UPROPERTY()
    FNiagaraSimCacheDataBuffers ParticleDataBuffers;
    
    NIAGARA_API FNiagaraSimCacheEmitterFrame();
};

