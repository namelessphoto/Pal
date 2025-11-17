#ifndef UE4SS_SDK_PPSkyCreatorPlugin_HPP
#define UE4SS_SDK_PPSkyCreatorPlugin_HPP

#include "PPSkyCreatorPlugin_enums.hpp"

struct FPPCelestialPositionData
{
    float Elevation;
    float Azimuth;

};

struct FPPSkyCreatorBackgroundCloudSettings
{
    float BackgroundCloudsIntensity;
    FLinearColor BackgroundCloudsColorTint;
    float BackgroundCloudsLayerA;
    float BackgroundCloudsLayerB;
    float BackgroundCloudsLayerC;
    float BackgroundCloudsLightningPhase;

};

struct FPPSkyCreatorExponentialHeightFogSettings
{
    float FogDensity;
    float FogHeightFalloff;
    FLinearColor FogInscatteringColor;
    float FogStartDistance;
    float SecondFogDensity;
    float SecondFogHeightFalloff;
    float DirectionalInscatteringExponent;
    float DirectionalInscatteringStartDistance;
    FLinearColor DirectionalInscatteringColor;
    float VolumetricFogScatteringDistribution;
    FLinearColor VolumetricFogAlbedo;
    FLinearColor VolumetricFogEmissive;
    float VolumetricFogExtinctionScale;

};

struct FPPSkyCreatorLightningParameters
{
    FLinearColor Position;
    FLinearColor Color;

};

struct FPPSkyCreatorMoonLightSettings
{
    float Intensity;
    FLinearColor LightColor;
    float Temperature;
    float VolumetricScatteringIntensity;
    FLinearColor AtmosphereDiskColorScale;
    FLinearColor CloudScatteredLuminanceScale;
    float CloudShadowStrength;
    float CloudShadowOnAtmosphereStrength;
    float CloudShadowOnSurfaceStrength;

};

struct FPPSkyCreatorPostProcessSettings
{
    float BloomIntensity;
    float BloomThreshold;
    float ExposureCompensation;

};

struct FPPSkyCreatorSkyAtmosphereSettings
{
    float RayleighScatteringScale;
    FLinearColor RayleighScattering;
    float RayleighExponentialDistribution;
    float MieScatteringScale;
    FLinearColor MieScattering;
    float MieAbsorptionScale;
    FLinearColor MieAbsorption;
    float MieAnisotropy;
    float MieExponentialDistribution;
    float AbsorptionScale;
    FLinearColor Absorption;
    FLinearColor SkyLuminanceFactor;
    FLinearColor GroundAlbedo;
    float HeightFogContribution;

};

struct FPPSkyCreatorSkyLightSettings
{
    float Intensity;
    float NightIntensity;
    FLinearColor LightColor;
    FLinearColor LowerHemisphereColor;
    float CloudAmbientOcclusionStrength;

};

struct FPPSkyCreatorStarMapSettings
{
    float StarMapIntensity;
    FLinearColor StarMapColorTint;
    float StarMapTwinkleIntensity;
    float StarMapTwinkleSaturation;
    float StarMapTwinkleSpeed;
    float StarMapHorizonThreshold;
    float StarMapAtmosphereThreshold;
    FLinearColor NightHorizonColor;
    FLinearColor NightZenithColor;

};

struct FPPSkyCreatorSunLightSettings
{
    float Intensity;
    FLinearColor LightColor;
    float Temperature;
    float VolumetricScatteringIntensity;
    FLinearColor AtmosphereDiskColorScale;
    FLinearColor CloudScatteredLuminanceScale;
    float CloudShadowStrength;
    float CloudShadowOnAtmosphereStrength;
    float CloudShadowOnSurfaceStrength;

};

struct FPPSkyCreatorVolumetricCloudSettings
{
    float StratusCoverage;
    float StratusCoverageVariation;
    float StratusHeightVariation;
    float StratocumulusCoverage;
    float StratocumulusCoverageVariation;
    float StratocumulusHeightVariation;
    float CumulusCoverage;
    float CumulusCoverageVariation;
    float CumulusHeightVariation;
    float CumulonimbusCoverage;
    float CumulonimbusAnvil;
    float CumulonimbusHeightVariation;
    float DensityBottom;
    float DensityMiddle;
    float DensityTop;
    FLinearColor albedo;
    FLinearColor GroundAlbedo;
    float BeersPowderIntensity;
    float BeersPowderDepth;
    float BottomOcclusion;
    float BottomOcclusionHeight;
    FLinearColor NightEmissive;
    float PhaseG;
    float PhaseG2;
    float PhaseBlend;
    float MultiScatteringContribution;
    float MultiScatteringOcclusion;
    float MultiScatteringEccentricity;
    float NoiseShapeIntensityA;
    float NoiseShapeIntensityB;
    float NoiseShapeIntensityC;
    float NoiseShapeIntensityD;
    float TurbulenceIntensity;

};

struct FPPSkyCreatorWeatherFXSettings
{
    float RainAmount;
    FLinearColor RainColor;
    float RainGravity;
    float RainLifetimeMin;
    float RainLifetimeMax;
    float RainSizeMin;
    float RainSizeMax;
    float RainSplashLifetimeMin;
    float RainSplashLifetimeMax;
    FVector2D RainSplashSizeMin;
    FVector2D RainSplashSizeMax;
    float SnowAmount;
    FLinearColor SnowColor;
    float SnowGravity;
    float SnowTurbulence;
    float SnowLifetimeMin;
    float SnowLifetimeMax;
    float SnowSizeMin;
    float SnowSizeMax;
    bool EnableLightnings;
    float LightningSpawnIntervalMin;
    float LightningSpawnIntervalMax;
    FLinearColor LightningColorMin;
    FLinearColor LightningColorMax;
    float LightningLifetime;
    float LightningBoltSpawnChance;
    float LightningBoltWidthMin;
    float LightningBoltWidthMax;
    float LightningBoltLengthMin;
    float LightningBoltLengthMax;
    float LightningBoltCurveFrequency;
    float LightningBoltCurveStrengthMin;
    float LightningBoltCurveStrengthMax;
    float LightningBoltJitterStrength;
    float LightningBranchSpawnChance;
    float LightningBranchScaleMin;
    float LightningBranchScaleMax;
    float RainbowAmount;
    FLinearColor RainbowColor;
    float RainbowRadius;
    float RainbowThickness;
    FLinearColor SecondaryRainbowColor;
    float SecondaryRainbowRadius;
    float SecondaryRainbowThickness;

};

struct FPPSkyCreatorWeatherMaterialFXSettings
{
    float WetnessAmount;
    FLinearColor WetnessColor;
    float PuddlesAmount;
    FLinearColor PuddlesColor;
    float RainRipplesAmount;
    float RainRipplesIntensity;
    float RainRipplesForceMinRadius;
    float RainRipplesForceMaxRadius;
    float RainRipplesRingsNumber;
    float RainRipplesRingsDelay;
    float RainRipplesDamping;
    float WindRipplesIntensity;
    float WindRipplesSpeed;
    float SnowAmount;
    FLinearColor SnowColor;
    float SnowIntensity;
    float SnowSparklesThreshold;

};

struct FPPSkyCreatorWeatherSettings
{
    FPPSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings;
    FPPSkyCreatorVolumetricCloudSettings VolumetricCloudSettings;
    FPPSkyCreatorBackgroundCloudSettings BackgroundCloudSettings;
    FPPSkyCreatorSkyLightSettings SkyLightSettings;
    FPPSkyCreatorSunLightSettings SunLightSettings;
    FPPSkyCreatorMoonLightSettings MoonLightSettings;
    FPPSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;
    FPPSkyCreatorStarMapSettings StarMapSettings;
    FPPSkyCreatorWeatherFXSettings WeatherFXSettings;
    FPPSkyCreatorWeatherMaterialFXSettings WeatherMaterialFXSettings;
    FPPSkyCreatorWindSettings WindSettings;
    FPPSkyCreatorPostProcessSettings PostProcessSettings;

};

struct FPPSkyCreatorWindSettings
{
    float CloudWindDirection;
    float CloudWindSpeed;
    float CloudNoiseShapeWindDirection;
    float CloudNoiseShapeWindSpeedHorizontal;
    float CloudNoiseDetailWindSpeedVertical;
    float PrecipitationWindDirection;
    float PrecipitationWindSpeed;

};

class APPSkyCreator : public AActor
{
    class USceneComponent* Root;
    class UBillboardComponent* Billboard;
    class UStaticMeshComponent* Compass;
    class USkyAtmosphereComponent* SkyAtmosphere;
    class UVolumetricCloudComponent* VolumetricCloud;
    class USkyLightComponent* SkyLight;
    class UDirectionalLightComponent* Sunlight;
    class UDirectionalLightComponent* MoonLight;
    class UExponentialHeightFogComponent* ExponentialHeightFog;
    class UPostProcessComponent* PostProcess;
    class UStaticMeshComponent* StarMap;
    class UStaticMeshComponent* SunSphere;
    class UStaticMeshComponent* MoonSphere;
    class USceneCaptureComponent2D* OcclusionCapture;
    class UNiagaraComponent* WeatherFX;
    class UStaticMeshComponent* SkySphere;
    class UMaterialInterface* SkySphereMaterial;
    class UMaterialInstanceDynamic* SkySphereMID;
    bool bUseEditorTimeOfDay;
    float EditorTimeOfDay;
    bool bUseEditorWeatherSettings;
    TEnumAsByte<EPPSkyCreatorEditorWeatherType> EditorWeatherType;
    class UPPSkyCreatorWeatherPreset* EditorWeatherPreset;
    FPPSkyCreatorWeatherSettings EditorWeatherSettings;
    bool bIsUsedWithSequencer;
    bool bIsEditorTickEnabled;
    float TimeOfDay;
    FPPSkyCreatorWeatherSettings WeatherSettings;
    class UMaterialParameterCollection* CommonMPC;
    float SkySphereRadius;
    bool bShowDebugVariables;
    TEnumAsByte<EPPSkyCreatorSunPositionType> SunPositionType;
    FPPCelestialPositionData SunPositionData;
    TEnumAsByte<EPPSkyCreatorMoonPositionType> MoonPositionType;
    FPPCelestialPositionData MoonPositionData;
    float SunriseTime;
    float SunsetTime;
    float SunDawnOffsetTime;
    float SunDuskOffsetTime;
    float SunDawnTime;
    float SunDuskTime;
    float SunElevation;
    float SunAzimuth;
    float SunMinAngleAtDawnDusk;
    float SunFadeInOutTime;
    float MoonriseTime;
    float MoonsetTime;
    float MoonElevation;
    float MoonAzimuth;
    float MoonFadeInOutTime;
    float Latitude;
    float Longitude;
    float TimeZone;
    bool bDaylightSavingTime;
    int32 Year;
    int32 Month;
    int32 Day;
    FDateTime Date;
    bool bLightTransition;
    float SunSurfaceBrightness;
    float MoonSurfaceBrightness;
    float SunCurrentElevation;
    float TransitionStartSunAngle;
    float TransitionMiddleSunAngle;
    float TransitionEndSunAngle;
    float NightIntensityTransitionStartSunAngle;
    float NightIntensityTransitionEndSunAngle;
    TEnumAsByte<EComponentMobility> SkyAtmosphereMobility;
    ESkyAtmosphereTransformMode TransformMode;
    float PlanetRadius;
    float AtmosphereHeight;
    float AerialPespectiveViewDistanceScale;
    FVector PlanetTopPosition;
    float TraceSampleCountScale;
    float GodRaysResolution;
    float LayerBottomAltitude;
    float LayerHeight;
    float TracingStartMaxDistance;
    float TracingMaxDistance;
    bool bPerSampleAtmosphericLightTransmittance;
    class UMaterialParameterCollection* VolumetricCloudsMPC;
    FVector LayerBottomAltitudePosition;
    FVector LayerTopAltitudePosition;
    class UMaterialInterface* CurrentVolumetricCloudMaterial;
    class UMaterialInstanceDynamic* VolumetricCloudMID;
    class UMaterialInterface* VolumetricCloudDensitySampleMaterial;
    class UMaterialInstanceDynamic* VolumetricCloudDensitySampleMID;
    class UTextureRenderTarget2D* VolumetricCloudDensitySampleRT;
    bool bCinematicQuality;
    TEnumAsByte<EPPVolumetricCloudRenderTargetMode> RenderMode;
    bool bHighQualityAerialPerspective;
    int32 MultiScatteringApproximationOctaveCount;
    bool bGroundContribution;
    bool bRayMarchVolumeShadow;
    float ViewSampleCountScale;
    float ReflectionSampleCountScale;
    float ShadowViewSampleCountScale;
    float ShadowReflectionSampleCountScale;
    float ShadowTracingDistance;
    float CloudMapScale;
    FVector2D CloudMapOffset;
    float CoverageVariationMapScale;
    TEnumAsByte<EPPVolumetricCloudNoiseShapeResolution> NoiseShapeResolution;
    TEnumAsByte<EPPVolumetricCloudNoiseDetailResolution> NoiseDetailResolution;
    float NoiseShapeScale;
    float NoiseDetailScale;
    float TurbulenceScale;
    float BackgroundCloudsContrast;
    float BackgroundCloudsReflectionScale;
    TEnumAsByte<EComponentMobility> SkyLightMobility;
    bool bRealTimeCapture;
    bool bSkyLightCaptureTimeSlice;
    bool bLowerHemisphereIsSolidColor;
    bool bCloudAmbientOcclusion;
    float CloudAmbientOcclusionExtent;
    float CloudAmbientOcclusionMapResolutionScale;
    float CloudAmbientOcclusionApertureScale;
    TEnumAsByte<EComponentMobility> SunLightMobility;
    bool bControlSunDirection;
    bool bSunConstantIntensity;
    float SunIntensity;
    float SunCurrentIntensity;
    bool bSunUseTemperature;
    float SunDiskSize;
    bool bSunConstantAtmosphereDiskColorScale;
    FLinearColor SunAtmosphereDiskColorScale;
    bool bSunPerPixelAtmosphereTransmittance;
    float SunCloudShadowExtent;
    float SunCloudShadowMapResolutionScale;
    float SunCloudShadowRaySampleCountScale;
    TEnumAsByte<EComponentMobility> MoonLightMobility;
    bool bControlMoonDirection;
    bool bMoonConstantIntensity;
    float MoonIntensity;
    float MoonCurrentIntensity;
    bool bMoonUseTemperature;
    float MoonDiskSize;
    float MoonRotation;
    float MoonPhase;
    bool bMoonPhaseLightIntensityScale;
    float MoonPhaseLightIntensityMinScale;
    float MoonPhaseLightIntensityMaxScale;
    bool bMoonConstantAtmosphereDiskColorScale;
    FLinearColor MoonAtmosphereDiskColorScale;
    bool bMoonPerPixelAtmosphereTransmittance;
    float MoonCloudShadowExtent;
    float MoonCloudShadowMapResolutionScale;
    float MoonCloudShadowRaySampleCountScale;
    TEnumAsByte<EComponentMobility> ExponentialHeightFogMobility;
    bool bEnableExponentialHeightFog;
    bool bVolumetricFog;
    float FogHeightOffset;
    float SecondFogHeightOffset;
    class UTexture2D* StarMapTexture;
    TEnumAsByte<EPPSkyCreatorStarMapRotationType> StarMapRotationType;
    FVector StarMapAdditionalRotation;
    bool bEnableOcclusionCapture;
    class UTextureRenderTarget2D* OcclusionRenderTarget;
    float OcclusionCaptureWidth;
    float OcclusionCaptureHeight;
    bool bOcclusionCaptureRealtimeUpdate;
    float OcclusionCaptureStepDistance;
    float OcclusionCaptureStepSize;
    float OcclusionBias;
    int32 OcclusionBlurSamples;
    float OcclusionBlurDistance;
    float OcclusionMaskFadeHardness;
    FVector CameraLocation;
    FVector CameraLocationSnapped;
    FVector OcclusionCurrentLocation;
    float WeatherFXCutoffWorldHeight;
    float WeatherFXCutoffSoftness;
    float PrecipitationSpawnRadius;
    bool bEnableGPUPrecipitation;
    float PrecipitationSpawnRadiusGPU;
    float PrecipitationMaxViewDistance;
    float PrecipitationVerticalCheckDistance;
    TEnumAsByte<ECollisionChannel> PrecipitationCollisionChannel;
    float PrecipitationDepthFadeDistance;
    float PrecipitationCameraFadeDistance;
    float PrecipitationCameraFadeOffset;
    float RainSpawnRateMaxCPU;
    float RainSpawnRateMaxGPU;
    float RainDistanceScaleFactor;
    float RainCameraMotionAlignmentScale;
    float RainVelocityElongationScale;
    float RainMaskHardness;
    float RainSplashSpawnRateMax;
    float RainSplashSpawnRateMaxGPU;
    float SnowSpawnRateMaxCPU;
    float SnowSpawnRateMaxGPU;
    float SnowDistanceScaleFactor;
    float SnowCameraMotionAlignmentScale;
    float SnowVelocityElongationScale;
    float SnowMaskHardness;
    class UTextureRenderTarget2D* LightningsParametersRT;
    TArray<FPPSkyCreatorLightningParameters> LightningParameters;
    float CurrentLightningInterval;
    FVector LastLightningPosition;
    TArray<FVector> LightningAvailablePositions;
    int32 LightningCurrentIndex;
    bool bSampleCloudDensity;
    int32 LightningMaxSamples;
    float LightningSpawnInnerRadius;
    float LightningSpawnOuterRadius;
    float LightningRandomDegreeInConeMax;
    float LightningBoltEmissiveScale;
    float LightningFlashFadeUpdateRate;
    float LightningFlashFadeDelta;
    float LightningFlashEmissiveScale;
    float LightningFlashEmissiveReflectionScale;
    float LightningFlashRadiusScale;
    float LightningFlashFadeSpeed;
    float RainbowDistance;
    float RainbowDepthFadeDistance;
    float MaterialFXCutoffWorldHeight;
    float MaterialFXCutoffSoftness;
    float WetnessSlopeAngle;
    float WetnessSlopeSmoothness;
    float PuddlesMaskScale;
    float PuddlesRoughness;
    float PuddlesSlopeAngle;
    float PuddlesSlopeSmoothness;
    bool bEnableRainRipplesSolver;
    bool bPauseRainRipplesSolver;
    float RainRipplesUpdateRate;
    float RainRipplesScale;
    float RainRipplesMaxDensity;
    float WindRipplesScale;
    float RainRipplesSolverDelta;
    int32 RainRipplesSolverHeightState;
    class UMaterialInterface* RainRipplesPropagation;
    class UMaterialInstanceDynamic* RainRipplesPropagationMID;
    class UMaterialInterface* RainRipplesForce;
    class UMaterialInterface* RainRipplesNormal;
    class UMaterialInstanceDynamic* RainRipplesNormalMID;
    class UTextureRenderTarget2D* RainRipplesPropagationFrame0;
    class UTextureRenderTarget2D* RainRipplesPropagationFrame1;
    class UTextureRenderTarget2D* RainRipplesPropagationFrame2;
    class UTextureRenderTarget2D* RainRipplesNormalRT;
    float SnowMaskScale;
    float SnowScale;
    float SnowRoughness;
    float SnowSparklesScale;
    float SnowSparklesRoughness;
    float SnowSlopeAngle;
    float SnowSlopeSmoothness;
    bool bEnableWind;
    bool bIndependentWindControl;
    FPPSkyCreatorWindSettings EditorIndependentWindSettings;
    float CloudWindSkewAmount;
    FVector CloudWindOffset;
    FVector CloudWindSkewDirection;
    float CloudWindSkewForce;
    FVector CloudNoiseShapeWindOffset;
    FVector CloudNoiseDetailWindOffset;
    bool bUseExposureSettings;
    bool bExtendDefaultLuminanceRange;
    float PostProcessPriority;
    TEnumAsByte<EAutoExposureMethod> ExposureMethod;
    class UCurveFloat* ExposureBiasCurve;
    class UTexture* ExposureMeterMask;
    float ExposureMinBrightness;
    float ExposureMaxBrightness;
    float ExposureMinEV100;
    float ExposureMaxEV100;
    float ExposureSpeedUp;
    float ExposureSpeedDown;
    float ExposureLowPercent;
    float ExposureHighPercent;
    float ExposureHistogramLogMin;
    float ExposureHistogramLogMax;
    float ExposureHistogramMinEV100;
    float ExposureHistogramMaxEV100;
    FPPSkyCreatorOnLightningStrike OnLightningStrike;
    void OnLightningStrike(FVector LightningPosition);

    void UpdateSettingsSequencer();
    void SpawnLightningStrike(FVector LightningPosition);
    void SetYear(int32 NewValue);
    void SetWindSettings(FPPSkyCreatorWindSettings InWindSettings);
    void SetWindIndependentSettings(FPPSkyCreatorWindSettings InWindSettings);
    void SetWeatherSettings(FPPSkyCreatorWeatherSettings InWeatherSettings);
    void SetWeatherMaterialFXSettings(FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettings);
    void SetWeatherFXSettings(FPPSkyCreatorWeatherFXSettings InWeatherFXSettings);
    void SetVolumetricCloudSettings(FPPSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings);
    void SetTimeZone(float NewValue);
    void SetTime(float InTime);
    void SetSunSimplePositionSettings(const float InSunriseTime, const float InSunsetTime, const float InSunElevation, const float InSunAzimuth);
    void SetSunsetTime(float NewValue);
    void SetSunriseTime(float NewValue);
    void SetSunMinAngleAtDawnDusk(float NewValue);
    void SetSunLightSettings(FPPSkyCreatorSunLightSettings InSunLightSettings);
    void SetSunIntensity(float NewValue);
    void SetSunElevation(float NewValue);
    void SetSunDuskOffsetTime(float NewValue);
    void SetSunDiskSize(float NewValue);
    void SetSunDawnOffsetTime(float NewValue);
    void SetSunAzimuth(float NewValue);
    void SetSunAtmosphereDiskColorScale(FLinearColor NewValue);
    void SetStarMapSettings(FPPSkyCreatorStarMapSettings InStarMapSettings);
    void SetStarMapAdditionalRotation(FVector NewValue);
    void SetSkyLightSettings(FPPSkyCreatorSkyLightSettings InSkyLightSettings);
    void SetSkyAtmosphereSettings(FPPSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings);
    void SetRealPositionSettings(const float InLatitude, const float InLongitude, const float InTimeZone, const bool InbDaylightSavingTime, const int32 InYear, const int32 InMonth, const int32 InDay);
    void SetPostProcessSettings(FPPSkyCreatorPostProcessSettings InPostProcessSettings);
    void SetMoonSimplePositionSettings(const float InMoonriseTime, const float InMoonsetTime, const float InMoonElevation, const float InMoonAzimuth);
    void SetMoonsetTime(float NewValue);
    void SetMoonRotation(float NewValue);
    void SetMoonriseTime(float NewValue);
    void SetMoonPhase(float NewValue);
    void SetMoonLightSettings(FPPSkyCreatorMoonLightSettings InMoonLightSettings);
    void SetMoonIntensity(float NewValue);
    void SetMoonElevation(float NewValue);
    void SetMoonDiskSize(float NewValue);
    void SetMoonAzimuth(float NewValue);
    void SetMoonAtmosphereDiskColorScale(FLinearColor NewValue);
    void SetMonth(int32 NewValue);
    void SetLongitude(float NewValue);
    void SetLayerHeight(float NewValue);
    void SetLayerBottomAltitude(float NewValue);
    void SetLatitude(float NewValue);
    void SetExponentialHeightFogSettings(FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings);
    void SetEditorWeatherSettings(FPPSkyCreatorWeatherSettings NewValue);
    void SetEditorWeatherPreset(class UPPSkyCreatorWeatherPreset* NewValue);
    void SetEditorTimeOfDay(float NewValue);
    void SetDay(int32 NewValue);
    void SetCloudMapOffset(FVector2D NewValue);
    void SetbDaylightSavingTime(bool NewValue);
    void SetBackgroundCloudSettings(FPPSkyCreatorBackgroundCloudSettings InBackgroundCloudSettings);
    void RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration);
    void OnRep_UpdateWeather();
    void OnRep_UpdateTime();
    void LerpWindSettings(FPPSkyCreatorWindSettings InWindSettingsA, FPPSkyCreatorWindSettings InWindSettingsB, float Alpha);
    void LerpWindIndependentSettings(FPPSkyCreatorWindSettings InWindSettingsA, FPPSkyCreatorWindSettings InWindSettingsB, float Alpha);
    void LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha);
    void LerpWeatherSettings(FPPSkyCreatorWeatherSettings InWeatherSettingsA, FPPSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha);
    void LerpWeatherMaterialFXSettings(FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsA, FPPSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsB, float Alpha);
    void LerpWeatherFXSettings(FPPSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FPPSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha);
    void LerpVolumetricCloudSettings(FPPSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FPPSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha);
    void LerpSunLightSettings(FPPSkyCreatorSunLightSettings InSunLightSettingsA, FPPSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha);
    void LerpStarMapSettings(FPPSkyCreatorStarMapSettings InStarMapSettingsA, FPPSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha);
    void LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha);
    void LerpSkyLightSettings(FPPSkyCreatorSkyLightSettings InSkyLightSettingsA, FPPSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha);
    void LerpSkyAtmosphereSettings(FPPSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FPPSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha);
    void LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha);
    void LerpPostProcessSettings(FPPSkyCreatorPostProcessSettings InPostProcessSettingsA, FPPSkyCreatorPostProcessSettings InPostProcessSettingsB, float Alpha);
    void LerpMoonLightSettings(FPPSkyCreatorMoonLightSettings InMoonLightSettingsA, FPPSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha);
    void LerpExponentialHeightFogSettings(FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FPPSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha);
    void LerpBackgroundCloudSettings(FPPSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsA, FPPSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsB, float Alpha);
    FPPSkyCreatorWindSettings GetWindSettings();
    FPPSkyCreatorWeatherSettings GetWeatherSettings();
    FPPSkyCreatorWeatherMaterialFXSettings GetWeatherMaterialFXSettings();
    FPPSkyCreatorWeatherFXSettings GetWeatherFXSettings();
    FPPSkyCreatorVolumetricCloudSettings GetVolumetricCloudSettings();
    float GetTime();
    FRotator GetSunPosition(float Time);
    FPPSkyCreatorSunLightSettings GetSunLightSettings();
    FPPSkyCreatorStarMapSettings GetStarMapSettings();
    FRotator GetStarMapRotation();
    FPPSkyCreatorSkyLightSettings GetSkyLightSettings();
    FPPSkyCreatorSkyAtmosphereSettings GetSkyAtmosphereSettings();
    FPPSkyCreatorPostProcessSettings GetPostProcessSettings();
    FRotator GetMoonPosition(float Time);
    float GetMoonPhase();
    FPPSkyCreatorMoonLightSettings GetMoonLightSettings();
    FVector GetLastLightningPosition();
    FPPSkyCreatorExponentialHeightFogSettings GetExponentialHeightFogSettings();
    float GetCloudDensityAtPosition(FVector Position);
    FPPSkyCreatorBackgroundCloudSettings GetBackgroundCloudSettings();
    bool FindLightningPosition(FVector Position, FVector& OutPosition);
};

class UPPSkyCreatorFunctionLibrary : public UBlueprintFunctionLibrary
{

    float KilometersToCentimeters(const float Value);
    bool IsApplicationForegroundNow();
    FPPCelestialPositionData GetRealSunPosition(const float Latitude, const float Longitude, const float TimeZone, const bool bIsDaylightSavingTime, const FDateTime DateTime);
    FPPCelestialPositionData GetRealMoonPosition(const float Latitude, const float Longitude, const float TimeZone, const bool bIsDaylightSavingTime, const FDateTime DateTime);
    float GetCloudDensityAtPosition(class UObject* WorldContextObject, FVector Position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget);
    bool FindLightningPosition(class UObject* WorldContextObject, bool bSampleCloudDensity, int32 Samples, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget, FVector Position, float InnerRadius, float OuterRadius, float minHeight, float maxHeight, float DensityThreshold, FVector& OutPosition);
    double ElevationRefraction(double F);
    class UTexture2D* DynamicConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget);
    void CreateAndAssignMID(class UObject* WorldContextObject, class UMaterialInterface* InMaterial, class UMaterialInstanceDynamic*& InMID);
    void ConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget, class UTexture2D*& Texture);
    bool CheckCloudDensityAtPosition(class UObject* WorldContextObject, FVector Position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget);
    float CentimetersToKilometers(const float Value);
};

class UPPSkyCreatorWeatherPreset : public UDataAsset
{
    FText Description;
    FPPSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings;
    FPPSkyCreatorVolumetricCloudSettings VolumetricCloudSettings;
    FPPSkyCreatorBackgroundCloudSettings BackgroundCloudSettings;
    FPPSkyCreatorSkyLightSettings SkyLightSettings;
    FPPSkyCreatorSunLightSettings SunLightSettings;
    FPPSkyCreatorMoonLightSettings MoonLightSettings;
    FPPSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;
    FPPSkyCreatorStarMapSettings StarMapSettings;
    FPPSkyCreatorWeatherFXSettings WeatherFXSettings;
    FPPSkyCreatorWeatherMaterialFXSettings WeatherMaterialFXSettings;
    FPPSkyCreatorWindSettings WindSettings;
    FPPSkyCreatorPostProcessSettings PostProcessSettings;

    FPPSkyCreatorWeatherSettings GetWeatherPresetSettings();
};

#endif
