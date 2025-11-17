#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ENiagaraDebugHUDOverviewMode.h"
#include "ENiagaraDebugHUDPerfGraphMode.h"
#include "ENiagaraDebugHUDPerfSampleMode.h"
#include "ENiagaraDebugHudFont.h"
#include "ENiagaraDebugHudVerbosity.h"
#include "ENiagaraDebugPlaybackMode.h"
#include "NiagaraDebugHUDVariable.h"
#include "NiagaraDebugHudTextOptions.h"
#include "NiagaraDebugHUDSettingsData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraDebugHUDSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bHudEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bHudRenderingEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bValidateSystemSimulationDataBuffers;
    
    UPROPERTY(EditAnywhere)
    bool bValidateParticleDataBuffers;
    
    UPROPERTY(EditAnywhere)
    bool bOverviewEnabled;
    
    UPROPERTY(EditAnywhere)
    ENiagaraDebugHUDOverviewMode OverviewMode;
    
    UPROPERTY(EditAnywhere)
    ENiagaraDebugHudFont OverviewFont;
    
    UPROPERTY(EditAnywhere)
    FVector2D OverviewLocation;
    
    UPROPERTY(EditAnywhere)
    bool bShowRegisteredComponents;
    
    UPROPERTY(EditAnywhere)
    bool bOverviewShowFilteredSystemOnly;
    
    UPROPERTY(Config, EditAnywhere)
    FString ActorFilter;
    
    UPROPERTY(Config, EditAnywhere)
    bool bComponentFilterEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    FString ComponentFilter;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSystemFilterEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    FString SystemFilter;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEmitterFilterEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    FString EmitterFilter;
    
    UPROPERTY(Config, EditAnywhere)
    bool bActorFilterEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDebugHudVerbosity SystemDebugVerbosity;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDebugHudVerbosity SystemEmitterVerbosity;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDebugHudVerbosity DataInterfaceVerbosity;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSystemShowBounds;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSystemShowActiveOnlyInWorld;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowSystemVariables;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FNiagaraDebugHUDVariable> SystemVariables;
    
    UPROPERTY(Config, EditAnywhere)
    FNiagaraDebugHudTextOptions SystemTextOptions;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowParticleVariables;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableGpuParticleReadback;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowParticleIndex;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FNiagaraDebugHUDVariable> ParticlesVariables;
    
    UPROPERTY(Config, EditAnywhere)
    FNiagaraDebugHudTextOptions ParticleTextOptions;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowParticlesVariablesWithSystem;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowParticleVariablesVertical;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseMaxParticlesToDisplay;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseParticleDisplayClip;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D ParticleDisplayClip;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseParticleDisplayCenterRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float ParticleDisplayCenterRadius;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxParticlesToDisplay;
    
    UPROPERTY(Config, EditAnywhere)
    int32 PerfReportFrames;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDebugHUDPerfSampleMode PerfSampleMode;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDebugHUDPerfGraphMode PerfGraphMode;
    
    UPROPERTY(Config, EditAnywhere)
    int32 PerfHistoryFrames;
    
    UPROPERTY(Config, EditAnywhere)
    float PerfGraphTimeRange;
    
    UPROPERTY(Config, EditAnywhere)
    FVector2D PerfGraphSize;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor PerfGraphAxisColor;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableSmoothing;
    
    UPROPERTY(Config, EditAnywhere)
    int32 SmoothingWidth;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DefaultBackgroundColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor OverviewHeadingColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor OverviewDetailColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor OverviewDetailHighlightColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor InWorldErrorTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor InWorldTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor MessageInfoTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor MessageWarningTextColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor MessageErrorTextColor;
    
    UPROPERTY(Config, EditAnywhere)
    float SystemColorTableOpacity;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 SystemColorSeed;
    
    UPROPERTY(Config, EditAnywhere)
    FVector SystemColorHSVMin;
    
    UPROPERTY(Config, EditAnywhere)
    FVector SystemColorHSVMax;
    
    UPROPERTY()
    ENiagaraDebugPlaybackMode PlaybackMode;
    
    UPROPERTY()
    bool bPlaybackRateEnabled;
    
    UPROPERTY(Config)
    float PlaybackRate;
    
    UPROPERTY(Config)
    bool bLoopTimeEnabled;
    
    UPROPERTY(Config)
    float LoopTime;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowGlobalBudgetInfo;
    
    FNiagaraDebugHUDSettingsData();
};

