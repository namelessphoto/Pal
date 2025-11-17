#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=NiagaraShaderScriptParametersMetadata -FallbackName=NiagaraShaderScriptParametersMetadata
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=SimulationStageMetaData -FallbackName=SimulationStageMetaData
#include "ENiagaraScriptCompileStatus.h"
#include "NiagaraCompilerTag.h"
#include "NiagaraDataSetID.h"
#include "NiagaraDataSetProperties.h"
#include "NiagaraScriptDataInterfaceCompileInfo.h"
#include "NiagaraScriptDataUsageInfo.h"
#include "NiagaraStatScope.h"
#include "NiagaraVMExecutableByteCode.h"
#include "NiagaraVariable.h"
#include "VMExternalFunctionBindingInfo.h"
#include "NiagaraVMExecutableData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraVMExecutableData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraVMExecutableByteCode ByteCode;
    
    UPROPERTY(Transient)
    FNiagaraVMExecutableByteCode OptimizedByteCode;
    
    UPROPERTY()
    int32 NumTempRegisters;
    
    UPROPERTY()
    int32 NumUserPtrs;
    
    UPROPERTY()
    TArray<FNiagaraCompilerTag> CompileTags;
    
    UPROPERTY()
    TArray<uint8> ScriptLiterals;
    
    UPROPERTY()
    TArray<FNiagaraVariable> Attributes;
    
    UPROPERTY()
    FNiagaraScriptDataUsageInfo DataUsage;
    
    UPROPERTY()
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;
    
    UPROPERTY()
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;
    
    UPROPERTY()
    TArray<FNiagaraDataSetID> ReadDataSets;
    
    UPROPERTY()
    TArray<FNiagaraDataSetProperties> WriteDataSets;
    
    UPROPERTY()
    TArray<FNiagaraStatScope> StatScopes;
    
    UPROPERTY()
    FNiagaraShaderScriptParametersMetadata ShaderScriptParametersMetadata;
    
    UPROPERTY()
    ENiagaraScriptCompileStatus LastCompileStatus;
    
    UPROPERTY()
    TArray<FSimulationStageMetaData> SimulationStageMetaData;
    
    UPROPERTY()
    TArray<uint8> ExperimentalContextData;
    
    UPROPERTY()
    uint8 bReadsSignificanceIndex: 1;
    
    UPROPERTY()
    uint8 bNeedsGPUContextInit: 1;
    
    FNiagaraVMExecutableData();
};

