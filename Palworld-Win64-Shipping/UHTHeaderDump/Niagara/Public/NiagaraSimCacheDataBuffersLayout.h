#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimTarget.h"
#include "NiagaraSimCacheVariable.h"
#include "NiagaraSimCacheDataBuffersLayout.generated.h"

USTRUCT()
struct FNiagaraSimCacheDataBuffersLayout {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName LayoutName;
    
    UPROPERTY()
    ENiagaraSimTarget SimTarget;
    
    UPROPERTY()
    TArray<FNiagaraSimCacheVariable> Variables;
    
    UPROPERTY()
    uint16 FloatCount;
    
    UPROPERTY()
    uint16 HalfCount;
    
    UPROPERTY()
    uint16 Int32Count;
    
    UPROPERTY()
    bool bLocalSpace;
    
    UPROPERTY()
    TArray<FName> RebaseVariableNames;
    
    NIAGARA_API FNiagaraSimCacheDataBuffersLayout();
};

