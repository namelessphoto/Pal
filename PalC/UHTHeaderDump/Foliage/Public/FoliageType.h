#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BodyInstance -FallbackName=BodyInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentMobility -FallbackName=EComponentMobility
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EHasCustomNavigableGeometry -FallbackName=EHasCustomNavigableGeometry
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightmapType -FallbackName=ELightmapType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERendererStencilMask -FallbackName=ERendererStencilMask
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERuntimeVirtualTextureMainPassType -FallbackName=ERuntimeVirtualTextureMainPassType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LightingChannels -FallbackName=LightingChannels
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "EFoliageScaling.h"
#include "FoliageDensityFalloff.h"
#include "FoliageVertexColorChannelMask.h"
#include "FoliageVertexColorMask.h"
#include "FoliageType.generated.h"

class URuntimeVirtualTexture;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class FOLIAGE_API UFoliageType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid UpdateGuid;
    
    UPROPERTY(EditAnywhere)
    float Density;
    
    UPROPERTY(EditAnywhere)
    float DensityAdjustmentFactor;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    bool bSingleInstanceModeOverrideRadius;
    
    UPROPERTY(EditAnywhere)
    float SingleInstanceModeRadius;
    
    UPROPERTY(EditAnywhere)
    EFoliageScaling Scaling;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleX;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleY;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleZ;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FFoliageVertexColorChannelMask VertexColorMaskByChannel[4];
    
    UPROPERTY()
    TEnumAsByte<FoliageVertexColorMask> VertexColorMask;
    
    UPROPERTY()
    float VertexColorMaskThreshold;
    
    UPROPERTY()
    uint8 VertexColorMaskInvert: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatInterval ZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 AlignToNormal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 AverageNormal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 AverageNormalSingleComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AlignMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 RandomYaw: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatInterval GroundSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatInterval Height;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<FName> LandscapeLayers;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MinimumLayerWeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<FName> ExclusionLandscapeLayers;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MinimumExclusionLayerWeight;
    
    UPROPERTY()
    FName LandscapeLayer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 CollisionWithWorld: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector CollisionScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 AverageNormalSampleCount;
    
    UPROPERTY()
    FBoxSphereBounds MeshBounds;
    
    UPROPERTY()
    FVector LowBoundOriginRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility> Mobility;
    
    UPROPERTY(EditAnywhere)
    FInt32Interval CullDistance;
    
    UPROPERTY()
    uint8 bEnableStaticLighting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 CastShadow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAffectDynamicIndirectLighting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAffectDistanceFieldLighting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCastDynamicShadow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCastStaticShadow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCastContactShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastShadowAsTwoSided: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bReceivesDecals: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bOverrideLightMapRes: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 OverriddenLightMapRes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ELightmapType LightmapType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bUseAsOccluder: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bVisibleInRayTracing: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bEvaluateWorldPositionOffset: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 WorldPositionOffsetDisableDistance;
    
    UPROPERTY(EditAnywhere)
    FBodyInstance BodyInstance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHasCustomNavigableGeometry> CustomNavigableGeometry;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bRenderCustomDepth: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ERendererStencilMask CustomDepthStencilWriteMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 CustomDepthStencilValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TranslucencySortPriority;
    
    UPROPERTY(EditAnywhere)
    float CollisionRadius;
    
    UPROPERTY(EditAnywhere)
    float ShadeRadius;
    
    UPROPERTY(EditAnywhere)
    int32 NumSteps;
    
    UPROPERTY(EditAnywhere)
    float InitialSeedDensity;
    
    UPROPERTY(EditAnywhere)
    float AverageSpreadDistance;
    
    UPROPERTY(EditAnywhere)
    float SpreadVariance;
    
    UPROPERTY(EditAnywhere)
    int32 SeedsPerStep;
    
    UPROPERTY(EditAnywhere)
    int32 DistributionSeed;
    
    UPROPERTY(EditAnywhere)
    float MaxInitialSeedOffset;
    
    UPROPERTY(EditAnywhere)
    bool bCanGrowInShade;
    
    UPROPERTY(EditAnywhere)
    bool bSpawnsInShade;
    
    UPROPERTY(EditAnywhere)
    float MaxInitialAge;
    
    UPROPERTY(EditAnywhere)
    float MaxAge;
    
    UPROPERTY(EditAnywhere)
    float OverlapPriority;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ProceduralScale;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScaleCurve;
    
    UPROPERTY(EditAnywhere)
    FFoliageDensityFalloff DensityFalloff;
    
    UPROPERTY(Transient)
    int32 ChangeCount;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyDensity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyRadius: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyAlignToNormal: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyRandomYaw: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyScaling: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyScaleX: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyScaleY: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyScaleZ: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyRandomPitchAngle: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyGroundSlope: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyHeight: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyLandscapeLayers: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyZOffset: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyCollisionWithWorld: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyVertexColorMask: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableDensityScaling: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableDiscardOnLoad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 VirtualTextureCullMips;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;
    
    UFoliageType();

};

