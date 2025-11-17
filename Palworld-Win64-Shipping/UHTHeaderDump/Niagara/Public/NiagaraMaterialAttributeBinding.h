#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NiagaraMaterialAttributeBinding.generated.h"

USTRUCT()
struct FNiagaraMaterialAttributeBinding {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName MaterialParameterName;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableBase NiagaraVariable;
    
    UPROPERTY()
    FNiagaraVariableBase ResolvedNiagaraVariable;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableBase NiagaraChildVariable;
    
    NIAGARA_API FNiagaraMaterialAttributeBinding();
};

