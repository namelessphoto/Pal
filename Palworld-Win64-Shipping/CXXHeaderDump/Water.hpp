#ifndef UE4SS_SDK_Water_HPP
#define UE4SS_SDK_Water_HPP

#include "Water_enums.hpp"

struct FBuoyancyData
{
    TArray<FSphericalPontoon> Pontoons;
    bool bCenterPontoonsOnCOM;
    float BuoyancyCoefficient;
    float BuoyancyDamp;
    float BuoyancyDamp2;
    float BuoyancyRampMinVelocity;
    float BuoyancyRampMaxVelocity;
    float BuoyancyRampMax;
    float MaxBuoyantForce;
    bool bApplyDragForcesInWater;
    float DragCoefficient;
    float DragCoefficient2;
    float AngularDragCoefficient;
    float MaxDragSpeed;
    bool bApplyRiverForces;
    int32 RiverPontoonIndex;
    float WaterShorePushFactor;
    float RiverTraversalPathWidth;
    float MaxShorePushForce;
    float WaterVelocityStrength;
    float MaxWaterForce;
    bool bAlwaysAllowLateralPush;
    bool bAllowCurrentWhenMovingFastUpstream;
    bool bApplyDownstreamAngularRotation;
    FVector DownstreamAxisOfRotation;
    float DownstreamRotationStrength;
    float DownstreamRotationStiffness;
    float DownstreamRotationAngularDamping;
    float DownstreamMaxAcceleration;

};

struct FGerstnerWave
{
    float WaveLength;
    float Amplitude;
    float Steepness;
    FVector Direction;
    FVector2D WaveVector;
    float WaveSpeed;
    float WKA;
    float Q;
    float PhaseOffset;

};

struct FGerstnerWaveOctave
{
    int32 NumWaves;
    float AmplitudeScale;
    float MainDirection;
    float SpreadAngle;
    bool bUniformSpread;

};

struct FSphericalPontoon
{
    FName CenterSocket;
    FVector RelativeLocation;
    float Radius;
    bool bFXEnabled;
    FVector LocalForce;
    FVector CenterLocation;
    FQuat SocketRotation;
    FVector Offset;
    float WaterHeight;
    float WaterDepth;
    float ImmersionDepth;
    FVector WaterPlaneLocation;
    FVector WaterPlaneNormal;
    FVector WaterSurfacePosition;
    FVector WaterVelocity;
    int32 WaterBodyIndex;
    bool bIsInWater;
    class UWaterBodyComponent* CurrentWaterBodyComponent;

};

struct FUnderwaterPostProcessSettings
{
    bool bEnabled;
    float Priority;
    float BlendRadius;
    float BlendWeight;
    FPostProcessSettings PostProcessSettings;
    class UMaterialInterface* UnderwaterPostProcessMaterial;

};

struct FWaterBodyHeightmapSettings
{
    EWaterBrushBlendType BlendMode;
    bool bInvertShape;
    FWaterFalloffSettings FalloffSettings;
    FWaterBrushEffects Effects;
    int32 Priority;

};

struct FWaterBodyWeightmapSettings
{
    float FalloffWidth;
    float EdgeOffset;
    class UTexture2D* ModulationTexture;
    float TextureTiling;
    float TextureInfluence;
    float Midpoint;
    float FinalOpacity;

};

struct FWaterBrushEffectBlurring
{
    bool bBlurShape;
    int32 Radius;

};

struct FWaterBrushEffectCurlNoise
{
    float Curl1Amount;
    float Curl2Amount;
    float Curl1Tiling;
    float Curl2Tiling;

};

struct FWaterBrushEffectCurves
{
    bool bUseCurveChannel;
    class UCurveFloat* ElevationCurveAsset;
    float ChannelEdgeOffset;
    float ChannelDepth;
    float CurveRampWidth;

};

struct FWaterBrushEffectDisplacement
{
    float DisplacementHeight;
    float DisplacementTiling;
    class UTexture2D* Texture;
    float Midpoint;
    FLinearColor Channel;
    float WeightmapInfluence;

};

struct FWaterBrushEffectSmoothBlending
{
    float InnerSmoothDistance;
    float OuterSmoothDistance;

};

struct FWaterBrushEffectTerracing
{
    float TerraceAlpha;
    float TerraceSpacing;
    float TerraceSmoothness;
    float MaskLength;
    float MaskStartOffset;

};

struct FWaterBrushEffects
{
    FWaterBrushEffectBlurring Blurring;
    FWaterBrushEffectCurlNoise CurlNoise;
    FWaterBrushEffectDisplacement Displacement;
    FWaterBrushEffectSmoothBlending SmoothBlending;
    FWaterBrushEffectTerracing Terracing;

};

struct FWaterCurveSettings
{
    bool bUseCurveChannel;
    class UCurveFloat* ElevationCurveAsset;
    float ChannelEdgeOffset;
    float ChannelDepth;
    float CurveRampWidth;

};

struct FWaterFalloffSettings
{
    EWaterBrushFalloffMode FalloffMode;
    float FalloffAngle;
    float FalloffWidth;
    float EdgeOffset;
    float ZOffset;

};

struct FWaterSplineCurveDefaults
{
    float DefaultDepth;
    float DefaultWidth;
    float DefaultVelocity;
    float DefaultAudioIntensity;

};

class ABuoyancyManager : public AActor
{
    TArray<class UBuoyancyComponent*> BuoyancyComponents;

    bool GetBuoyancyComponentManager(const class UObject* WorldContextObject, class ABuoyancyManager*& Manager);
};

class AWaterBody : public AActor
{
    class UWaterSplineComponent* SplineComp;
    class UWaterSplineMetadata* WaterSplineMetadata;
    class UWaterBodyComponent* WaterBodyComponent;
    int32 WaterBodyIndex;
    EWaterBodyType WaterBodyType;
    class UWaterWavesBase* WaterWaves;

    void SetWaterWaves(class UWaterWavesBase* InWaterWaves);
    void SetWaterMaterial(class UMaterialInterface* InMaterial);
    void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
    FVector GetWaterVelocityVectorAtSplineInputKey(float InKey);
    float GetWaterVelocityAtSplineInputKey(float InKey);
    class UWaterSplineComponent* GetWaterSpline();
    class UMaterialInstanceDynamic* GetWaterMaterialInstance();
    EWaterBodyType GetWaterBodyType();
    class UWaterBodyComponent* GetWaterBodyComponent();
    class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
    class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
    TArray<class AWaterBodyIsland*> GetIslands();
    TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
    float GetAudioIntensityAtSplineInputKey(float InKey);
};

class AWaterBodyCustom : public AWaterBody
{
};

class AWaterBodyExclusionVolume : public APhysicsVolume
{
    bool bExcludeAllOverlappingWaterBodies;
    TArray<class AWaterBody*> WaterBodiesToExclude;

};

class AWaterBodyIsland : public AActor
{
    class UWaterSplineComponent* SplineComp;

    class UWaterSplineComponent* GetWaterSpline();
};

class AWaterBodyLake : public AWaterBody
{
};

class AWaterBodyOcean : public AWaterBody
{
};

class AWaterBodyRiver : public AWaterBody
{
};

class AWaterZone : public AActor
{
    class UTextureRenderTarget2D* WaterInfoTexture;
    TArray<TWeakObjectPtr<UWaterBodyComponent>> OwnedWaterBodies;
    FIntPoint RenderTargetResolution;
    class UWaterMeshComponent* WaterMesh;
    FVector2D ZoneExtent;
    float CaptureZOffset;
    bool bHalfPrecisionTexture;
    int32 VelocityBlurRadius;
    FVector TessellatedWaterMeshExtent;
    uint32 NonTessellatedLODSectionScale;
    int32 OverlapPriority;
    bool bEnableNonTessellatedLODMesh;

};

class IWaterBrushActorInterface : public IInterface
{
};

class UBuoyancyComponent : public UActorComponent
{
    TArray<FSphericalPontoon> Pontoons;
    FBuoyancyComponentOnEnteredWaterDelegate OnEnteredWaterDelegate;
    void OnPontoonEnteredWater(const FSphericalPontoon& Pontoon);
    FBuoyancyComponentOnExitedWaterDelegate OnExitedWaterDelegate;
    void OnPontoonExitedWater(const FSphericalPontoon& Pontoon);
    FBuoyancyData BuoyancyData;
    TArray<class UWaterBodyComponent*> CurrentWaterBodyComponents;
    class UPrimitiveComponent* SimulatingComponent;

    void OnPontoonExitedWater(const FSphericalPontoon& Pontoon);
    void OnPontoonEnteredWater(const FSphericalPontoon& Pontoon);
    bool IsOverlappingWaterBody();
    bool IsInWaterBody();
    void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32& OutWaterBodyIdx, FVector& OutWaterVelocity);
    TArray<class UWaterBodyComponent*> GetCurrentWaterBodyComponents();
};

class UDEPRECATED_CustomMeshGenerator : public UDEPRECATED_WaterBodyGenerator
{
    class UStaticMeshComponent* MeshComp;

};

class UDEPRECATED_LakeGenerator : public UDEPRECATED_WaterBodyGenerator
{
    class UStaticMeshComponent* LakeMeshComp;
    class UBoxComponent* LakeCollisionComp;
    class ULakeCollisionComponent* LakeCollision;

};

class UDEPRECATED_OceanGenerator : public UDEPRECATED_WaterBodyGenerator
{
    TArray<class UOceanBoxCollisionComponent*> CollisionBoxes;
    TArray<class UOceanCollisionComponent*> CollisionHullSets;

};

class UDEPRECATED_RiverGenerator : public UDEPRECATED_WaterBodyGenerator
{
    TArray<class USplineMeshComponent*> SplineMeshComponents;

};

class UDEPRECATED_WaterBodyGenerator : public UObject
{
};

class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{
    bool bIncludeWaves;
    bool bSimpleWaves;
    bool bIgnoreExclusionVolumes;

};

class UGerstnerWaterWaveGeneratorBase : public UObject
{

    void GenerateGerstnerWaves(TArray<FGerstnerWave>& OutWaves);
};

class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{
    int32 NumWaves;
    int32 Seed;
    float Randomness;
    float MinWavelength;
    float MaxWavelength;
    float WavelengthFalloff;
    float MinAmplitude;
    float MaxAmplitude;
    float AmplitudeFalloff;
    float WindAngleDeg;
    float DirectionAngularSpreadDeg;
    float SmallWaveSteepness;
    float LargeWaveSteepness;
    float SteepnessFalloff;

};

class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{
    EWaveSpectrumType SpectrumType;
    TArray<FGerstnerWaveOctave> Octaves;

};

class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{
};

class UGerstnerWaterWaves : public UWaterWaves
{
    class UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator;
    TArray<FGerstnerWave> GerstnerWaves;
    float MaxWaveHeight;

};

class ULakeCollisionComponent : public UPrimitiveComponent
{
    class UBodySetup* CachedBodySetup;
    FVector BoxExtent;

};

class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{
    class UWaterBodyComponent* SourceBodyComponent;

};

class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UWaterBodyComponent* WaterBodyComponent);
    void SetWaterBody(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class AWaterBody* WaterBody);
};

class UOceanBoxCollisionComponent : public UBoxComponent
{
};

class UOceanCollisionComponent : public UPrimitiveComponent
{
    class UBodySetup* CachedBodySetup;

};

class UWaterBodyComponent : public UPrimitiveComponent
{
    class UPhysicalMaterial* PhysicalMaterial;
    float TargetWaveMaskDepth;
    float MaxWaveHeightOffset;
    FUnderwaterPostProcessSettings UnderwaterPostProcessSettings;
    FWaterCurveSettings CurveSettings;
    class UMaterialInterface* WaterMaterial;
    class UMaterialInterface* WaterHLODMaterial;
    class UMaterialInterface* WaterLODMaterial;
    class UMaterialInterface* UnderwaterPostProcessMaterial;
    class UMaterialInterface* WaterInfoMaterial;
    FWaterBodyHeightmapSettings WaterHeightmapSettings;
    float ShapeDilation;
    float CollisionHeightOffset;
    bool bAffectsLandscape;
    int32 WaterBodyIndex;
    class UStaticMesh* WaterMeshOverride;
    bool bAlwaysGenerateWaterMeshTiles;
    int32 OverlapMaterialPriority;
    class UWaterSplineMetadata* WaterSplineMetadata;
    class UMaterialInstanceDynamic* WaterMID;
    class UMaterialInstanceDynamic* WaterLODMID;
    class UMaterialInstanceDynamic* UnderwaterPostProcessMID;
    class UMaterialInstanceDynamic* WaterInfoMID;
    TArray<TSoftObjectPtr<AWaterBodyIsland>> WaterBodyIslands;
    TArray<TSoftObjectPtr<AWaterBodyExclusionVolume>> WaterBodyExclusionVolumes;
    TWeakObjectPtr<class ALandscapeProxy> Landscape;
    TSoftObjectPtr<AWaterZone> OwningWaterZone;
    TSoftObjectPtr<AWaterZone> WaterZoneOverride;
    FPostProcessSettings CurrentPostProcessSettings;
    TSubclassOf<class UNavAreaBase> WaterNavAreaClass;
    double FixedWaterDepth;

    void SetWaterAndUnderWaterPostProcessMaterial(class UMaterialInterface* InWaterMaterial, class UMaterialInterface* InUnderWaterPostProcessMaterial);
    void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
    class UWaterWavesBase* GetWaterWaves();
    float GetWaterVelocityAtSplineInputKey(float InKey);
    void GetWaterSurfaceInfoAtLocation(const FVector& InLocation, FVector& OutWaterSurfaceLocation, FVector& OutWaterSurfaceNormal, FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth);
    class UWaterSplineComponent* GetWaterSpline();
    class UMaterialInstanceDynamic* GetWaterMaterialInstance();
    class UMaterialInterface* GetWaterMaterial();
    class UMaterialInstanceDynamic* GetWaterLODMaterialInstance();
    class UMaterialInstanceDynamic* GetWaterInfoMaterialInstance();
    class AWaterBody* GetWaterBodyActor();
    class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
    TArray<class UPrimitiveComponent*> GetStandardRenderableComponents();
    class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
    class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
    float GetMaxWaveHeight();
    TArray<class AWaterBodyIsland*> GetIslands();
    TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
    TArray<class UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents);
};

class UWaterBodyCustomComponent : public UWaterBodyComponent
{
    class UStaticMeshComponent* MeshComp;

};

class UWaterBodyHLODBuilder : public UHLODBuilder
{
};

class UWaterBodyLakeComponent : public UWaterBodyComponent
{
    class UStaticMeshComponent* LakeMeshComp;
    class ULakeCollisionComponent* LakeCollision;

};

class UWaterBodyOceanComponent : public UWaterBodyComponent
{
    TArray<class UOceanBoxCollisionComponent*> CollisionBoxes;
    TArray<class UOceanCollisionComponent*> CollisionHullSets;
    FVector2D VisualExtents;
    FVector CollisionExtents;
    float HeightOffset;

};

class UWaterBodyRiverComponent : public UWaterBodyComponent
{
    TArray<class USplineMeshComponent*> SplineMeshComponents;
    class UMaterialInterface* LakeTransitionMaterial;
    class UMaterialInstanceDynamic* LakeTransitionMID;
    class UMaterialInterface* OceanTransitionMaterial;
    class UMaterialInstanceDynamic* OceanTransitionMID;

};

class UWaterMeshComponent : public UMeshComponent
{
    int32 ForceCollapseDensityLevel;
    class UMaterialInterface* FarDistanceMaterial;
    float FarDistanceMeshExtent;
    float TileSize;
    FIntPoint ExtentInTiles;
    TSet<UMaterialInterface*> UsedMaterials;
    int32 TessellationFactor;
    float LODScale;

    bool IsEnabled();
};

class UWaterRuntimeSettings : public UDeveloperSettings
{
    TEnumAsByte<ECollisionChannel> CollisionChannelForWaterTraces;
    TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection;
    float WaterBodyIconWorldZOffset;
    FName DefaultWaterCollisionProfileName;
    TSoftObjectPtr<UMaterialInterface> DefaultWaterInfoMaterial;
    TSubclassOf<class UWaterBodyRiverComponent> WaterBodyRiverComponentClass;
    TSubclassOf<class UWaterBodyLakeComponent> WaterBodyLakeComponentClass;
    TSubclassOf<class UWaterBodyOceanComponent> WaterBodyOceanComponentClass;
    TSubclassOf<class UWaterBodyCustomComponent> WaterBodyCustomComponentClass;

};

class UWaterSplineComponent : public USplineComponent
{
    FWaterSplineCurveDefaults WaterSplineDefaults;
    FWaterSplineCurveDefaults PreviousWaterSplineDefaults;

};

class UWaterSplineMetadata : public USplineMetadata
{
    FInterpCurveFloat Depth;
    FInterpCurveFloat WaterVelocityScalar;
    FInterpCurveFloat RiverWidth;
    FInterpCurveFloat AudioIntensity;
    FInterpCurveVector WaterVelocity;

};

class UWaterSubsystem : public UTickableWorldSubsystem
{
    class ABuoyancyManager* BuoyancyManager;
    FWaterSubsystemOnCameraUnderwaterStateChanged OnCameraUnderwaterStateChanged;
    void OnCameraUnderwaterStateChanged(bool bIsUnderWater, float DepthUnderwater);
    FWaterSubsystemOnWaterScalabilityChanged OnWaterScalabilityChanged;
    void OnWaterScalabilityChanged();
    class UStaticMesh* DefaultRiverMesh;
    class UStaticMesh* DefaultLakeMesh;
    class UMaterialParameterCollection* MaterialParameterCollection;

    void SetOceanFloodHeight(float InFloodHeight);
    void PrintToWaterLog(FString Message, bool bWarning);
    bool IsWaterRenderingEnabled();
    bool IsUnderwaterPostProcessEnabled();
    bool IsShallowWaterSimulationEnabled();
    float GetWaterTimeSeconds();
    float GetSmoothedWorldTimeSeconds();
    int32 GetShallowWaterSimulationRenderTargetSize();
    int32 GetShallowWaterMaxImpulseForces();
    int32 GetShallowWaterMaxDynamicForces();
    float GetOceanTotalHeight();
    float GetOceanFloodHeight();
    float GetOceanBaseHeight();
    float GetCameraUnderwaterDepth();
};

class UWaterWaves : public UWaterWavesBase
{
};

class UWaterWavesAsset : public UObject
{
    class UWaterWaves* WaterWaves;

};

class UWaterWavesAssetReference : public UWaterWavesBase
{
    class UWaterWavesAsset* WaterWavesAsset;

};

class UWaterWavesBase : public UObject
{
};

#endif
