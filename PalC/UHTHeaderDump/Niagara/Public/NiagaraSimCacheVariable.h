#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NiagaraSimCacheVariable.generated.h"

USTRUCT()
struct FNiagaraSimCacheVariable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraVariableBase Variable;
    
    UPROPERTY()
    uint16 FloatOffset;
    
    UPROPERTY()
    uint16 FloatCount;
    
    UPROPERTY()
    uint16 HalfOffset;
    
    UPROPERTY()
    uint16 HalfCount;
    
    UPROPERTY()
    uint16 Int32Offset;
    
    UPROPERTY()
    uint16 Int32Count;
    
    NIAGARA_API FNiagaraSimCacheVariable();
};

