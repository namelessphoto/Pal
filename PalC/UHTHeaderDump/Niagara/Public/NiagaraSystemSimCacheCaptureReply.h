#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemSimCacheCaptureReply.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraSystemSimCacheCaptureReply {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ComponentName;
    
    UPROPERTY()
    TArray<uint8> SimCacheData;
    
    FNiagaraSystemSimCacheCaptureReply();
};

