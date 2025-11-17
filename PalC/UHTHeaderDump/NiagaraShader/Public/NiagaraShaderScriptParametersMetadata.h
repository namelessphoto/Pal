#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGPUParamInfo.h"
#include "NiagaraShaderScriptExternalConstant.h"
#include "NiagaraShaderScriptParametersMetadata.generated.h"

USTRUCT(BlueprintType)
struct NIAGARASHADER_API FNiagaraShaderScriptParametersMetadata {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;
    
    UPROPERTY()
    TArray<FString> LooseMetadataNames;
    
    UPROPERTY()
    bool bExternalConstantsInterpolated;
    
    UPROPERTY()
    TArray<FNiagaraShaderScriptExternalConstant> ExternalConstants;
    
    FNiagaraShaderScriptParametersMetadata();
};

