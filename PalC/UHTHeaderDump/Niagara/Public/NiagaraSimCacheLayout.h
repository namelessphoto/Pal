#pragma once
#include "CoreMinimal.h"
#include "NiagaraSimCacheDataBuffersLayout.h"
#include "NiagaraSimCacheLayout.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheLayout {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraSimCacheDataBuffersLayout SystemLayout;
    
    UPROPERTY()
    TArray<FNiagaraSimCacheDataBuffersLayout> EmitterLayouts;
    
    NIAGARA_API FNiagaraSimCacheLayout();
};

