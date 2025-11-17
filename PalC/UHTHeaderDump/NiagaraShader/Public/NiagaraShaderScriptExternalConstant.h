#pragma once
#include "CoreMinimal.h"
#include "NiagaraShaderScriptExternalConstant.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraShaderScriptExternalConstant {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Type;
    
    UPROPERTY()
    FString Name;
    
    NIAGARASHADER_API FNiagaraShaderScriptExternalConstant();
};

