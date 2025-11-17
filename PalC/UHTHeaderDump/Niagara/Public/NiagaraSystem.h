#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERendererStencilMask -FallbackName=ERendererStencilMask
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FXSystemAsset -FallbackName=FXSystemAsset
#include "NiagaraEmitterHandle.h"
#include "NiagaraSystemCompiledData.h"
#include "NiagaraSystemScalabilityOverride.h"
#include "NiagaraSystemScalabilityOverrides.h"
#include "NiagaraUserRedirectionParameterStore.h"
#include "NiagaraSystem.generated.h"

class UNiagaraEffectType;
class UNiagaraParameterCollectionInstance;
class UNiagaraScript;

UCLASS(BlueprintType)
class NIAGARA_API UNiagaraSystem : public UFXSystemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bSupportLargeWorldCoordinates: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideCastShadow: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideReceivesDecals: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideRenderCustomDepth: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideCustomDepthStencilValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideCustomDepthStencilWriteMask: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideTranslucencySortPriority: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideTranslucencySortDistanceOffset: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCastShadow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bReceivesDecals: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bRenderCustomDepth: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bDisableExperimentalVM: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ERendererStencilMask CustomDepthStencilWriteMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 CustomDepthStencilValue;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 TranslucencySortPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float TranslucencySortDistanceOffset;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDumpDebugSystemInfo;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDumpDebugEmitterInfo;
    
    UPROPERTY(EditAnywhere)
    bool bRequireCurrentFrameData;
    
    UPROPERTY(EditAnywhere)
    uint8 bFixedBounds: 1;
    
protected:
    UPROPERTY(EditAnywhere)
    UNiagaraEffectType* EffectType;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideScalabilitySettings;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideAllowCullingForLocalPlayers: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowCullingForLocalPlayersOverride: 1;
    
    UPROPERTY()
    TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides;
    
    UPROPERTY(EditAnywhere)
    FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;
    
    UPROPERTY()
    TArray<FNiagaraEmitterHandle> EmitterHandles;
    
    UPROPERTY(EditAnywhere)
    TArray<UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;
    
    UPROPERTY()
    UNiagaraScript* SystemSpawnScript;
    
    UPROPERTY()
    UNiagaraScript* SystemUpdateScript;
    
    UPROPERTY()
    FNiagaraSystemCompiledData SystemCompiledData;
    
    UPROPERTY()
    FNiagaraUserRedirectionParameterStore ExposedParameters;
    
    UPROPERTY(EditAnywhere)
    FBox FixedBounds;
    
    UPROPERTY(EditAnywhere)
    bool bAutoDeactivate;
    
    UPROPERTY(EditAnywhere)
    bool bDeterminism;
    
    UPROPERTY(EditAnywhere)
    int32 RandomSeed;
    
    UPROPERTY(EditAnywhere)
    float WarmupTime;
    
    UPROPERTY(EditAnywhere)
    int32 WarmupTickCount;
    
    UPROPERTY(EditAnywhere)
    float WarmupTickDelta;
    
    UPROPERTY(EditAnywhere)
    bool bFixedTickDelta;
    
    UPROPERTY(EditAnywhere)
    float FixedTickDeltaTime;
    
    UPROPERTY()
    bool bHasSystemScriptDIsWithPerInstanceData;
    
    UPROPERTY()
    bool bNeedsGPUContextInitForDataInterfaces;
    
    UPROPERTY()
    TArray<FName> UserDINamesReadInSystemScripts;
    
public:
    UNiagaraSystem();

};

