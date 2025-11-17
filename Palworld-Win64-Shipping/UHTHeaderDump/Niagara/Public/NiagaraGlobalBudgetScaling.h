#pragma once
#include "CoreMinimal.h"
#include "NiagaraLinearRamp.h"
#include "NiagaraGlobalBudgetScaling.generated.h"

USTRUCT()
struct FNiagaraGlobalBudgetScaling {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bCullByGlobalBudget: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleMaxDistanceByGlobalBudgetUse: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleMaxInstanceCountByGlobalBudgetUse: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleSystemInstanceCountByGlobalBudgetUse: 1;
    
    UPROPERTY(EditAnywhere)
    float MaxGlobalBudgetUsage;
    
    UPROPERTY(EditAnywhere)
    FNiagaraLinearRamp MaxDistanceScaleByGlobalBudgetUse;
    
    UPROPERTY(EditAnywhere)
    FNiagaraLinearRamp MaxInstanceCountScaleByGlobalBudgetUse;
    
    UPROPERTY(EditAnywhere)
    FNiagaraLinearRamp MaxSystemInstanceCountScaleByGlobalBudgetUse;
    
    NIAGARA_API FNiagaraGlobalBudgetScaling();
};

