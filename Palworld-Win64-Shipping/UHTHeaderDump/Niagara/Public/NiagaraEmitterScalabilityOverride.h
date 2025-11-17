#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterScalabilitySettings.h"
#include "NiagaraEmitterScalabilityOverride.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverrideSpawnCountScale: 1;
    
    FNiagaraEmitterScalabilityOverride();
};

