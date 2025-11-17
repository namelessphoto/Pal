#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "NiagaraSimCacheEmitterFrame.h"
#include "NiagaraSimCacheSystemFrame.h"
#include "NiagaraSimCacheFrame.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheFrame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform LocalToWorld;
    
    UPROPERTY()
    FVector3f LWCTile;
    
    UPROPERTY()
    FNiagaraSimCacheSystemFrame SystemData;
    
    UPROPERTY()
    TArray<FNiagaraSimCacheEmitterFrame> EmitterData;
    
    NIAGARA_API FNiagaraSimCacheFrame();
};

