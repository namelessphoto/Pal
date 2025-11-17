#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterScalabilityOverride.h"
#include "NiagaraEmitterScalabilityOverrides.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraEmitterScalabilityOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraEmitterScalabilityOverride> Overrides;
    
    FNiagaraEmitterScalabilityOverrides();
};

