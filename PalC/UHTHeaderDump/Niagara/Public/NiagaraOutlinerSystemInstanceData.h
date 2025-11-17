#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETickingGroup -FallbackName=ETickingGroup
#include "ENCPoolMethod.h"
#include "ENiagaraExecutionState.h"
#include "ENiagaraGpuComputeTickStage.h"
#include "NiagaraOutlinerEmitterInstanceData.h"
#include "NiagaraOutlinerTimingData.h"
#include "NiagaraScalabilityState.h"
#include "NiagaraOutlinerSystemInstanceData.generated.h"

USTRUCT()
struct FNiagaraOutlinerSystemInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ComponentName;
    
    UPROPERTY(VisibleAnywhere)
    FVector3f LWCTile;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FNiagaraOutlinerEmitterInstanceData> Emitters;
    
    UPROPERTY(VisibleAnywhere)
    ENiagaraExecutionState ActualExecutionState;
    
    UPROPERTY(VisibleAnywhere)
    ENiagaraExecutionState RequestedExecutionState;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraScalabilityState ScalabilityState;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bPendingKill: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bUsingCullProxy: 1;
    
    UPROPERTY(VisibleAnywhere)
    ENCPoolMethod PoolMethod;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraOutlinerTimingData AverageTime;
    
    UPROPERTY(VisibleAnywhere)
    FNiagaraOutlinerTimingData MaxTime;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ETickingGroup> TickGroup;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ENiagaraGpuComputeTickStage> GpuTickStage;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bIsSolo: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bRequiresDistanceFieldData: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bRequiresDepthBuffer: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bRequiresEarlyViewData: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bRequiresViewUniformBuffer: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bRequiresRayTracingScene: 1;
    
    NIAGARA_API FNiagaraOutlinerSystemInstanceData();
};

