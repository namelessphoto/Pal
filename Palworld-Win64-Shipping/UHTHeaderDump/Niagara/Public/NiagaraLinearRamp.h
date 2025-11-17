#pragma once
#include "CoreMinimal.h"
#include "NiagaraLinearRamp.generated.h"

USTRUCT()
struct FNiagaraLinearRamp {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartX;
    
    UPROPERTY(EditAnywhere)
    float StartY;
    
    UPROPERTY(EditAnywhere)
    float EndX;
    
    UPROPERTY(EditAnywhere)
    float EndY;
    
    NIAGARA_API FNiagaraLinearRamp();
};

