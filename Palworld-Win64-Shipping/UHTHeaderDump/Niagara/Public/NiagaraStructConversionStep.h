#pragma once
#include "CoreMinimal.h"
#include "ENiagaraStructConversionType.h"
#include "NiagaraStructConversionStep.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStructConversionStep {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SourceBytes;
    
    UPROPERTY()
    int32 SourceOffset;
    
    UPROPERTY()
    int32 SimulationBytes;
    
    UPROPERTY()
    int32 SimulationOffset;
    
    UPROPERTY()
    ENiagaraStructConversionType ConversionType;
    
    NIAGARA_API FNiagaraStructConversionStep();
};

