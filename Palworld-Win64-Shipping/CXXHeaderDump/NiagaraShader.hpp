#ifndef UE4SS_SDK_NiagaraShader_HPP
#define UE4SS_SDK_NiagaraShader_HPP

#include "NiagaraShader_enums.hpp"

struct FNiagaraCompileEvent
{
    FNiagaraCompileEventSeverity Severity;
    FString Message;
    FString ShortDescription;
    bool bDismissable;
    FGuid NodeGuid;
    FGuid PinGuid;
    TArray<FGuid> StackGuids;
    FNiagaraCompileEventSource Source;

};

struct FNiagaraDataInterfaceGPUParamInfo
{
    FString DataInterfaceHLSLSymbol;
    FString DIClassName;
    uint32 ShaderParametersOffset;
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;

};

struct FNiagaraDataInterfaceGeneratedFunction
{
};

struct FNiagaraShaderScriptExternalConstant
{
    FName Type;
    FString Name;

};

struct FNiagaraShaderScriptParametersMetadata
{
    TArray<FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;
    TArray<FString> LooseMetadataNames;
    bool bExternalConstantsInterpolated;
    TArray<FNiagaraShaderScriptExternalConstant> ExternalConstants;

};

struct FSimulationStageMetaData
{
    FName SimulationStageName;
    FName EnabledBinding;
    FName ElementCountXBinding;
    FName ElementCountYBinding;
    FName ElementCountZBinding;
    FName IterationSource;
    ENiagaraSimStageExecuteBehavior ExecuteBehavior;
    uint8 bWritesParticles;
    uint8 bPartialParticleUpdate;
    uint8 bParticleIterationStateEnabled;
    uint8 bOverrideElementCount;
    FName ParticleIterationStateBinding;
    FIntPoint ParticleIterationStateRange;
    TArray<FName> OutputDestinations;
    TArray<FName> InputDataInterfaces;
    int32 NumIterations;
    FName NumIterationsBinding;
    ENiagaraGpuDispatchType GpuDispatchType;
    FIntVector GpuDispatchNumThreads;

};

class UNiagaraScriptBase : public UObject
{
};

#endif
