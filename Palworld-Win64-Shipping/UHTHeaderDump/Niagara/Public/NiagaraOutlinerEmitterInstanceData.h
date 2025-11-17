#pragma once
#include "CoreMinimal.h"
#include "ENiagaraExecutionState.h"
#include "ENiagaraSimTarget.h"
#include "NiagaraOutlinerEmitterInstanceData.generated.h"

USTRUCT()
struct FNiagaraOutlinerEmitterInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString EmitterName;
    
    UPROPERTY(VisibleAnywhere)
    ENiagaraSimTarget SimTarget;
    
    UPROPERTY(VisibleAnywhere)
    ENiagaraExecutionState ExecState;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumParticles;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bRequiresPersistentIDs: 1;
    
    NIAGARA_API FNiagaraOutlinerEmitterInstanceData();
};

