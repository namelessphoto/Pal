#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoExposureMethod -FallbackName=EAutoExposureMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentMobility -FallbackName=EComponentMobility
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESkyAtmosphereTransformMode -FallbackName=ESkyAtmosphereTransformMode
#include "CelestialPositionData.h"
#include "ESkyCreatorEditorWeatherType.h"
#include "ESkyCreatorMoonPositionType.h"
#include "ESkyCreatorStarMapRotationType.h"
#include "ESkyCreatorSunPositionType.h"
#include "EVolumetricCloudNoiseDetailResolution.h"
#include "EVolumetricCloudNoiseShapeResolution.h"
#include "EVolumetricCloudRenderTargetMode.h"
#include "OnLightningStrikeDelegate.h"
#include "SkyCreatorBackgroundCloudSettings.h"
#include "SkyCreatorExponentialHeightFogSettings.h"
#include "SkyCreatorLightningParameters.h"
#include "SkyCreatorMoonLightSettings.h"
#include "SkyCreatorPostProcessSettings.h"
#include "SkyCreatorSkyAtmosphereSettings.h"
#include "SkyCreatorSkyLightSettings.h"
#include "SkyCreatorStarMapSettings.h"
#include "SkyCreatorSunLightSettings.h"
#include "SkyCreatorVolumetricCloudSettings.h"
#include "SkyCreatorWeatherFXSettings.h"
#include "SkyCreatorWeatherMaterialFXSettings.h"
#include "SkyCreatorWeatherSettings.h"
#include "SkyCreatorWindSettings.h"
#include "SkyCreator.generated.h"

class UBillboardComponent;
class UCurveFloat;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UNiagaraComponent;
class UPostProcessComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class USkyAtmosphereComponent;
class USkyCreatorWeatherPreset;
class USkyLightComponent;
class UStaticMeshComponent;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;
class UVolumetricCloudComponent;

UCLASS()
class SKYCREATORPLUGIN_API ASkyCreator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* Compass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkyAtmosphereComponent* SkyAtmosphere;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UVolumetricCloudComponent* VolumetricCloud;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkyLightComponent* SkyLight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UDirectionalLightComponent* Sunlight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UDirectionalLightComponent* MoonLight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UExponentialHeightFogComponent* ExponentialHeightFog;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UPostProcessComponent* PostProcess;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* StarMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* SunSphere;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* MoonSphere;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneCaptureComponent2D* OcclusionCapture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UNiagaraComponent* WeatherFX;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* SkySphere;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* SkySphereMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInstanceDynamic* SkySphereMID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseEditorTimeOfDay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float EditorTimeOfDay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseEditorWeatherSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESkyCreatorEditorWeatherType> EditorWeatherType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    USkyCreatorWeatherPreset* EditorWeatherPreset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorWeatherSettings EditorWeatherSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    bool bIsUsedWithSequencer;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsEditorTickEnabled;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_UpdateTime)
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_UpdateWeather)
    FSkyCreatorWeatherSettings WeatherSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    UMaterialParameterCollection* CommonMPC;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float SkySphereRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bShowDebugVariables;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESkyCreatorSunPositionType> SunPositionType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FCelestialPositionData SunPositionData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESkyCreatorMoonPositionType> MoonPositionType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FCelestialPositionData MoonPositionData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float SunriseTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float SunsetTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float SunDawnOffsetTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float SunDuskOffsetTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SunDawnTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SunDuskTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float SunElevation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float SunAzimuth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float SunMinAngleAtDawnDusk;
    
    UPROPERTY(BlueprintReadOnly)
    float SunFadeInOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MoonriseTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MoonsetTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MoonElevation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MoonAzimuth;
    
    UPROPERTY(BlueprintReadOnly)
    float MoonFadeInOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float Latitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float Longitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float TimeZone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    bool bDaylightSavingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    int32 Year;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    int32 Month;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    int32 Day;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDateTime Date;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLightTransition;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SunSurfaceBrightness;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MoonSurfaceBrightness;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SunCurrentElevation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TransitionStartSunAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TransitionMiddleSunAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TransitionEndSunAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NightIntensityTransitionStartSunAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NightIntensityTransitionEndSunAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility> SkyAtmosphereMobility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESkyAtmosphereTransformMode TransformMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlanetRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AtmosphereHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AerialPespectiveViewDistanceScale;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector PlanetTopPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceSampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GodRaysResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float LayerBottomAltitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float LayerHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TracingStartMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TracingMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPerSampleAtmosphericLightTransmittance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    UMaterialParameterCollection* VolumetricCloudsMPC;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LayerBottomAltitudePosition;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LayerTopAltitudePosition;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInterface* CurrentVolumetricCloudMaterial;
    
    UPROPERTY(VisibleAnywhere)
    UMaterialInstanceDynamic* VolumetricCloudMID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInterface* VolumetricCloudDensitySampleMaterial;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInstanceDynamic* VolumetricCloudDensitySampleMID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTextureRenderTarget2D* VolumetricCloudDensitySampleRT;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCinematicQuality;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVolumetricCloudRenderTargetMode> RenderMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHighQualityAerialPerspective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MultiScatteringApproximationOctaveCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bGroundContribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRayMarchVolumeShadow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ViewSampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReflectionSampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShadowViewSampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShadowReflectionSampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShadowTracingDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloudMapScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FVector2D CloudMapOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CoverageVariationMapScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVolumetricCloudNoiseShapeResolution> NoiseShapeResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVolumetricCloudNoiseDetailResolution> NoiseDetailResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NoiseShapeScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NoiseDetailScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurbulenceScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BackgroundCloudsContrast;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BackgroundCloudsReflectionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility> SkyLightMobility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRealTimeCapture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSkyLightCaptureTimeSlice;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLowerHemisphereIsSolidColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCloudAmbientOcclusion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloudAmbientOcclusionExtent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloudAmbientOcclusionMapResolutionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloudAmbientOcclusionApertureScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility> SunLightMobility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bControlSunDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSunConstantIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float SunIntensity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SunCurrentIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSunUseTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float SunDiskSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSunConstantAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor SunAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSunPerPixelAtmosphereTransmittance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunCloudShadowExtent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunCloudShadowMapResolutionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SunCloudShadowRaySampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility> MoonLightMobility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bControlMoonDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMoonConstantIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MoonIntensity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MoonCurrentIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMoonUseTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MoonDiskSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MoonRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MoonPhase;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMoonPhaseLightIntensityScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonPhaseLightIntensityMinScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonPhaseLightIntensityMaxScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMoonConstantAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor MoonAtmosphereDiskColorScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMoonPerPixelAtmosphereTransmittance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonCloudShadowExtent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonCloudShadowMapResolutionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoonCloudShadowRaySampleCountScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility> ExponentialHeightFogMobility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableExponentialHeightFog;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bVolumetricFog;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FogHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SecondFogHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* StarMapTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESkyCreatorStarMapRotationType> StarMapRotationType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FVector StarMapAdditionalRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableOcclusionCapture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTextureRenderTarget2D* OcclusionRenderTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OcclusionCaptureWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OcclusionCaptureHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOcclusionCaptureRealtimeUpdate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OcclusionCaptureStepDistance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float OcclusionCaptureStepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OcclusionBias;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 OcclusionBlurSamples;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OcclusionBlurDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OcclusionMaskFadeHardness;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector CameraLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector CameraLocationSnapped;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FVector OcclusionCurrentLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeatherFXCutoffWorldHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeatherFXCutoffSoftness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationSpawnRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableGPUPrecipitation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationSpawnRadiusGPU;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationMaxViewDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationVerticalCheckDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> PrecipitationCollisionChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationDepthFadeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationCameraFadeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PrecipitationCameraFadeOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainSpawnRateMaxCPU;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainSpawnRateMaxGPU;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainDistanceScaleFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainCameraMotionAlignmentScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainVelocityElongationScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainMaskHardness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainSplashSpawnRateMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainSplashSpawnRateMaxGPU;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowSpawnRateMaxCPU;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowSpawnRateMaxGPU;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowDistanceScaleFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowCameraMotionAlignmentScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowVelocityElongationScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowMaskHardness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTextureRenderTarget2D* LightningsParametersRT;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TArray<FSkyCreatorLightningParameters> LightningParameters;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentLightningInterval;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FVector LastLightningPosition;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FVector> LightningAvailablePositions;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 LightningCurrentIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSampleCloudDensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LightningMaxSamples;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightningSpawnInnerRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightningSpawnOuterRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightningRandomDegreeInConeMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightningBoltEmissiveScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightningFlashFadeUpdateRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LightningFlashFadeDelta;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightningFlashEmissiveScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightningFlashEmissiveReflectionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightningFlashRadiusScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LightningFlashFadeSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainbowDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainbowDepthFadeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaterialFXCutoffWorldHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaterialFXCutoffSoftness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WetnessSlopeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WetnessSlopeSmoothness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PuddlesMaskScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PuddlesRoughness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PuddlesSlopeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PuddlesSlopeSmoothness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableRainRipplesSolver;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPauseRainRipplesSolver;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainRipplesUpdateRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainRipplesScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RainRipplesMaxDensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindRipplesScale;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float RainRipplesSolverDelta;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 RainRipplesSolverHeightState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* RainRipplesPropagation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInstanceDynamic* RainRipplesPropagationMID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* RainRipplesForce;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* RainRipplesNormal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialInstanceDynamic* RainRipplesNormalMID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTextureRenderTarget2D* RainRipplesPropagationFrame0;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTextureRenderTarget2D* RainRipplesPropagationFrame1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTextureRenderTarget2D* RainRipplesPropagationFrame2;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UTextureRenderTarget2D* RainRipplesNormalRT;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowMaskScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowRoughness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowSparklesScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowSparklesRoughness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowSlopeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnowSlopeSmoothness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableWind;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIndependentWindControl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSkyCreatorWindSettings EditorIndependentWindSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CloudWindSkewAmount;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FVector CloudWindOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FVector CloudWindSkewDirection;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float CloudWindSkewForce;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FVector CloudNoiseShapeWindOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FVector CloudNoiseDetailWindOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseExposureSettings;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bExtendDefaultLuminanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PostProcessPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAutoExposureMethod> ExposureMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ExposureBiasCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* ExposureMeterMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureMinBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureMinEV100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureMaxEV100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExposureSpeedDown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureLowPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureHighPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureHistogramLogMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureHistogramLogMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureHistogramMinEV100;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ExposureHistogramMaxEV100;
    
    UPROPERTY(BlueprintAssignable)
    FOnLightningStrike OnLightningStrike;
    
    ASkyCreator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void UpdateSettingsSequencer();
    
    UFUNCTION(BlueprintCallable)
    void SpawnLightningStrike(FVector LightningPosition);
    
    UFUNCTION()
    void SetYear(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetWindSettings(FSkyCreatorWindSettings InWindSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWindIndependentSettings(FSkyCreatorWindSettings InWindSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherMaterialFXSettings(FSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings);
    
    UFUNCTION()
    void SetTimeZone(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSunSimplePositionSettings(const float InSunriseTime, const float InSunsetTime, const float InSunElevation, const float InSunAzimuth);
    
    UFUNCTION()
    void SetSunsetTime(float NewValue);
    
    UFUNCTION()
    void SetSunriseTime(float NewValue);
    
    UFUNCTION()
    void SetSunMinAngleAtDawnDusk(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettings);
    
    UFUNCTION()
    void SetSunIntensity(float NewValue);
    
    UFUNCTION()
    void SetSunElevation(float NewValue);
    
    UFUNCTION()
    void SetSunDuskOffsetTime(float NewValue);
    
    UFUNCTION()
    void SetSunDiskSize(float NewValue);
    
    UFUNCTION()
    void SetSunDawnOffsetTime(float NewValue);
    
    UFUNCTION()
    void SetSunAzimuth(float NewValue);
    
    UFUNCTION()
    void SetSunAtmosphereDiskColorScale(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettings);
    
    UFUNCTION()
    void SetStarMapAdditionalRotation(FVector NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetRealPositionSettings(const float InLatitude, const float InLongitude, const float InTimeZone, const bool InbDaylightSavingTime, const int32 InYear, const int32 InMonth, const int32 InDay);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonSimplePositionSettings(const float InMoonriseTime, const float InMoonsetTime, const float InMoonElevation, const float InMoonAzimuth);
    
    UFUNCTION()
    void SetMoonsetTime(float NewValue);
    
    UFUNCTION()
    void SetMoonRotation(float NewValue);
    
    UFUNCTION()
    void SetMoonriseTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonPhase(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettings);
    
    UFUNCTION()
    void SetMoonIntensity(float NewValue);
    
    UFUNCTION()
    void SetMoonElevation(float NewValue);
    
    UFUNCTION()
    void SetMoonDiskSize(float NewValue);
    
    UFUNCTION()
    void SetMoonAzimuth(float NewValue);
    
    UFUNCTION()
    void SetMoonAtmosphereDiskColorScale(FLinearColor NewValue);
    
    UFUNCTION()
    void SetMonth(int32 NewValue);
    
    UFUNCTION()
    void SetLongitude(float NewValue);
    
    UFUNCTION()
    void SetLayerHeight(float NewValue);
    
    UFUNCTION()
    void SetLayerBottomAltitude(float NewValue);
    
    UFUNCTION()
    void SetLatitude(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings);
    
    UFUNCTION()
    void SetEditorWeatherSettings(FSkyCreatorWeatherSettings NewValue);
    
    UFUNCTION()
    void SetEditorWeatherPreset(USkyCreatorWeatherPreset* NewValue);
    
    UFUNCTION()
    void SetEditorTimeOfDay(float NewValue);
    
    UFUNCTION()
    void SetDay(int32 NewValue);
    
    UFUNCTION()
    void SetCloudMapOffset(FVector2D NewValue);
    
    UFUNCTION()
    void SetbDaylightSavingTime(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettings);
    
    UFUNCTION(BlueprintCallable)
    void RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration);
    
private:
    UFUNCTION()
    void OnRep_UpdateWeather();
    
    UFUNCTION()
    void OnRep_UpdateTime();
    
public:
    UFUNCTION(BlueprintCallable)
    void LerpWindSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWindIndependentSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettingsA, FSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWeatherMaterialFXSettings(FSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsA, FSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettingsA, FSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettingsA, FSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettingsA, FSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettingsA, FSkyCreatorPostProcessSettings InPostProcessSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettingsA, FSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void LerpBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsA, FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsB, float Alpha);
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorWindSettings GetWindSettings() const;
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorWeatherSettings GetWeatherSettings() const;
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorWeatherMaterialFXSettings GetWeatherMaterialFXSettings() const;
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorWeatherFXSettings GetWeatherFXSettings() const;
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorVolumetricCloudSettings GetVolumetricCloudSettings() const;
    
    UFUNCTION(BlueprintPure)
    float GetTime() const;
    
    UFUNCTION()
    FRotator GetSunPosition(float Time);
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorSunLightSettings GetSunLightSettings() const;
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorStarMapSettings GetStarMapSettings() const;
    
    UFUNCTION()
    FRotator GetStarMapRotation() const;
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorSkyLightSettings GetSkyLightSettings() const;
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorSkyAtmosphereSettings GetSkyAtmosphereSettings() const;
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorPostProcessSettings GetPostProcessSettings() const;
    
    UFUNCTION()
    FRotator GetMoonPosition(float Time);
    
    UFUNCTION(BlueprintPure)
    float GetMoonPhase() const;
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorMoonLightSettings GetMoonLightSettings() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastLightningPosition();
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorExponentialHeightFogSettings GetExponentialHeightFogSettings() const;
    
    UFUNCTION(BlueprintPure)
    float GetCloudDensityAtPosition(FVector Position);
    
    UFUNCTION(BlueprintPure)
    FSkyCreatorBackgroundCloudSettings GetBackgroundCloudSettings() const;
    
    UFUNCTION(BlueprintPure)
    bool FindLightningPosition(FVector Position, FVector& OutPosition);
    
};

