#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "ENDICollisionQuery_AsyncGpuTraceProvider.h"
#include "ENDISkelMesh_AdjacencyTriangleIndexFormat.h"
#include "ENDISkelMesh_GpuMaxInfluences.h"
#include "ENDISkelMesh_GpuUniformSamplingFormat.h"
#include "ENiagaraDefaultGpuTranslucentLatency.h"
#include "ENiagaraDefaultRendererMotionVectorSetting.h"
#include "ENiagaraDefaultRendererPixelCoverageMode.h"
#include "ENiagaraDefaultSortPrecision.h"
#include "ENiagaraGpuBufferFormat.h"
#include "NiagaraPlatformSetRedirect.h"
#include "NiagaraSettings.generated.h"

UCLASS(DefaultConfig, Config=Niagara)
class NIAGARA_API UNiagaraSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bSystemsSupportLargeWorldCoordinates;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnforceStrictStackTypes;
    
    UPROPERTY(Config, EditAnywhere)
    bool bExperimentalVMEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultEffectType;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor PositionPinTypeColor;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FText> QualityLevels;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FText> ComponentRendererWarningsPerClass;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraGpuBufferFormat DefaultGridFormat;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDefaultSortPrecision DefaultSortPrecision;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDefaultGpuTranslucentLatency DefaultGpuTranslucentLatency;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultLightInverseExposureBlend;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ENDISkelMesh_GpuMaxInfluences> NDISkelMesh_GpuMaxInfluences;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat> NDISkelMesh_GpuUniformSamplingFormat;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat> NDISkelMesh_AdjacencyTriangleIndexFormat;
    
    UPROPERTY(Config, EditAnywhere)
    bool NDIStaticMesh_AllowDistanceFields;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider>> NDICollisionQuery_AsyncGpuTraceProviderOrder;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FNiagaraPlatformSetRedirect> PlatformSetRedirects;
    
    UNiagaraSettings();

};

