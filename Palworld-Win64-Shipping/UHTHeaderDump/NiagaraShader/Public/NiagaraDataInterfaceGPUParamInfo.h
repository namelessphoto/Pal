#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGeneratedFunction.h"
#include "NiagaraDataInterfaceGPUParamInfo.generated.h"

USTRUCT(BlueprintType)
struct NIAGARASHADER_API FNiagaraDataInterfaceGPUParamInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString DataInterfaceHLSLSymbol;
    
    UPROPERTY()
    FString DIClassName;
    
    UPROPERTY()
    uint32 ShaderParametersOffset;
    
    UPROPERTY()
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;
    
    FNiagaraDataInterfaceGPUParamInfo();
};

