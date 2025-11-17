#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=ENiagaraGpuDispatchType -FallbackName=ENiagaraGpuDispatchType
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=ENiagaraSimStageExecuteBehavior -FallbackName=ENiagaraSimStageExecuteBehavior
#include "ENiagaraIterationSource.h"
#include "NiagaraSimulationStageBase.h"
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraVariableDataInterfaceBinding.h"
#include "NiagaraSimulationStageGeneric.generated.h"

UCLASS()
class NIAGARA_API UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding EnabledBinding;
    
    UPROPERTY()
    FNiagaraVariableAttributeBinding ElementCountBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ElementCountXBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ElementCountYBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ElementCountZBinding;
    
    UPROPERTY(EditAnywhere)
    ENiagaraIterationSource IterationSource;
    
    UPROPERTY(EditAnywhere)
    int32 Iterations;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding NumIterationsBinding;
    
    UPROPERTY()
    uint8 bSpawnOnly: 1;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSimStageExecuteBehavior ExecuteBehavior;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bDisablePartialParticleUpdate: 1;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableDataInterfaceBinding DataInterface;
    
    UPROPERTY(EditAnywhere)
    uint8 bParticleIterationStateEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ParticleIterationStateBinding;
    
    UPROPERTY(EditAnywhere)
    FIntPoint ParticleIterationStateRange;
    
    UPROPERTY(EditAnywhere)
    uint8 bGpuDispatchForceLinear: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideGpuDispatchType: 1;
    
    UPROPERTY(EditAnywhere)
    ENiagaraGpuDispatchType OverrideGpuDispatchType;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideGpuDispatchNumThreads: 1;
    
    UPROPERTY(EditAnywhere)
    FIntVector OverrideGpuDispatchNumThreads;
    
    UNiagaraSimulationStageGeneric();

};

