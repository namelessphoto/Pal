#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "ENiagaraGpuDispatchType.h"
#include "ENiagaraSimStageExecuteBehavior.h"
#include "SimulationStageMetaData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARASHADER_API FSimulationStageMetaData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SimulationStageName;
    
    UPROPERTY()
    FName EnabledBinding;
    
    UPROPERTY()
    FName ElementCountXBinding;
    
    UPROPERTY()
    FName ElementCountYBinding;
    
    UPROPERTY()
    FName ElementCountZBinding;
    
    UPROPERTY()
    FName IterationSource;
    
    UPROPERTY()
    ENiagaraSimStageExecuteBehavior ExecuteBehavior;
    
    UPROPERTY()
    uint8 bWritesParticles: 1;
    
    UPROPERTY()
    uint8 bPartialParticleUpdate: 1;
    
    UPROPERTY()
    uint8 bParticleIterationStateEnabled: 1;
    
    UPROPERTY()
    uint8 bOverrideElementCount: 1;
    
    UPROPERTY()
    FName ParticleIterationStateBinding;
    
    UPROPERTY()
    FIntPoint ParticleIterationStateRange;
    
    UPROPERTY()
    TArray<FName> OutputDestinations;
    
    UPROPERTY()
    TArray<FName> InputDataInterfaces;
    
    UPROPERTY()
    int32 NumIterations;
    
    UPROPERTY()
    FName NumIterationsBinding;
    
    UPROPERTY()
    ENiagaraGpuDispatchType GpuDispatchType;
    
    UPROPERTY()
    FIntVector GpuDispatchNumThreads;
    
    FSimulationStageMetaData();
};

