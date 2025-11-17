#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemScalabilityOverride.h"
#include "NiagaraSystemScalabilityOverrides.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraSystemScalabilityOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraSystemScalabilityOverride> Overrides;
    
    FNiagaraSystemScalabilityOverrides();
};

