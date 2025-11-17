#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "ENiagaraEmitterCalculateBoundMode.h"
#include "ENiagaraPythonUpdateScriptReference.h"
#include "ENiagaraSimTarget.h"
#include "EParticleAllocationMode.h"
#include "NiagaraAssetVersion.h"
#include "NiagaraEmitterScalabilityOverrides.h"
#include "NiagaraEmitterScalabilitySettings.h"
#include "NiagaraEmitterScriptProperties.h"
#include "NiagaraEventScriptProperties.h"
#include "NiagaraParameterStore.h"
#include "NiagaraPlatformSet.h"
#include "VersionedNiagaraEmitterData.generated.h"

class UNiagaraRendererProperties;
class UNiagaraScript;
class UNiagaraSimulationStageBase;

USTRUCT(BlueprintType)
struct NIAGARA_API FVersionedNiagaraEmitterData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraAssetVersion Version;
    
    UPROPERTY()
    FText VersionChangeDescription;
    
    UPROPERTY()
    ENiagaraPythonUpdateScriptReference UpdateScriptExecution;
    
    UPROPERTY()
    FString PythonUpdateScript;
    
    UPROPERTY()
    FFilePath ScriptAsset;
    
    UPROPERTY()
    bool bDeprecated;
    
    UPROPERTY()
    FText DeprecationMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLocalSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeterminism;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bInterpolatedSpawning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ENiagaraSimTarget SimTarget;
    
    UPROPERTY(EditAnywhere)
    ENiagaraEmitterCalculateBoundMode CalculateBoundsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBox FixedBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRequiresPersistentIDs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCombineEventSpawn: 1;
    
    UPROPERTY()
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;
    
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(EditAnywhere)
    FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bLimitDeltaTime: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 MaxGPUParticlesSpawnPerFrame;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MaxDeltaTimePerTick;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    EParticleAllocationMode AllocationMode;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 PreAllocationCount;
    
    UPROPERTY()
    FNiagaraEmitterScriptProperties UpdateScriptProps;
    
    UPROPERTY()
    FNiagaraEmitterScriptProperties SpawnScriptProps;
    
    UPROPERTY()
    FNiagaraParameterStore RendererBindings;
    
private:
    UPROPERTY()
    TArray<UNiagaraRendererProperties*> RendererProperties;
    
    UPROPERTY()
    TArray<UNiagaraSimulationStageBase*> SimulationStages;
    
    UPROPERTY()
    UNiagaraScript* GPUComputeScript;
    
    UPROPERTY()
    TArray<FName> SharedEventGeneratorIds;
    
    UPROPERTY(Transient)
    FNiagaraEmitterScalabilitySettings CurrentScalabilitySettings;
    
public:
    FVersionedNiagaraEmitterData();
};

