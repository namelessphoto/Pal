#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererMaterialScalarParameter.generated.h"

USTRUCT()
struct FNiagaraRendererMaterialScalarParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName MaterialParameterName;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    NIAGARA_API FNiagaraRendererMaterialScalarParameter();
};

