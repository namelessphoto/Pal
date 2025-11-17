#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerTimingData.generated.h"

USTRUCT()
struct FNiagaraOutlinerTimingData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float GameThread;
    
    UPROPERTY(VisibleAnywhere)
    float RenderThread;
    
    NIAGARA_API FNiagaraOutlinerTimingData();
};

