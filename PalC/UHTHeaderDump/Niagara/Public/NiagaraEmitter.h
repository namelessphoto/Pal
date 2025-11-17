#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraEventScriptProperties.h"
#include "VersionedNiagaraEmitterData.h"
#include "NiagaraEmitter.generated.h"

class UNiagaraRendererProperties;
class UNiagaraScript;
class UNiagaraSimulationStageBase;

UCLASS(MinimalAPI)
class UNiagaraEmitter : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid ExposedVersion;
    
    UPROPERTY()
    bool bVersioningEnabled;
    
    UPROPERTY()
    TArray<FVersionedNiagaraEmitterData> VersionData;
    
    UPROPERTY()
    FString UniqueEmitterName;
    
    UPROPERTY()
    TArray<UNiagaraRendererProperties*> RendererProperties;
    
    UPROPERTY()
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;
    
    UPROPERTY()
    TArray<UNiagaraSimulationStageBase*> SimulationStages;
    
    UPROPERTY()
    UNiagaraScript* GPUComputeScript;
    
    UPROPERTY()
    TArray<FName> SharedEventGeneratorIds;
    
public:
    UNiagaraEmitter();

};

