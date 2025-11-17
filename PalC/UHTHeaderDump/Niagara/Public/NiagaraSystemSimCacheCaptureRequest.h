#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemSimCacheCaptureRequest.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraSystemSimCacheCaptureRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ComponentName;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 CaptureDelayFrames;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 CaptureFrames;
    
    FNiagaraSystemSimCacheCaptureRequest();
};

