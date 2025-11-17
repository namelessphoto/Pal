#ifndef UE4SS_SDK_Landmass_HPP
#define UE4SS_SDK_Landmass_HPP

#include "Landmass_enums.hpp"

struct FBrushEffectBlurring
{
    bool bBlurShape;
    int32 Radius;

};

struct FBrushEffectCurlNoise
{
    float Curl1Amount;
    float Curl2Amount;
    float Curl1Tiling;
    float Curl2Tiling;

};

struct FBrushEffectCurves
{
    bool bUseCurveChannel;
    class UCurveFloat* ElevationCurveAsset;
    float ChannelEdgeOffset;
    float ChannelDepth;
    float CurveRampWidth;

};

struct FBrushEffectDisplacement
{
    float DisplacementHeight;
    float DisplacementTiling;
    class UTexture2D* Texture;
    float Midpoint;
    FLinearColor Channel;
    float WeightmapInfluence;

};

struct FBrushEffectSmoothBlending
{
    float InnerSmoothDistance;
    float OuterSmoothDistance;

};

struct FBrushEffectTerracing
{
    float TerraceAlpha;
    float TerraceSpacing;
    float TerraceSmoothness;
    float MaskLength;
    float MaskStartOffset;

};

struct FLandmassBrushEffectsList
{
    FBrushEffectBlurring Blurring;
    FBrushEffectCurlNoise CurlNoise;
    FBrushEffectDisplacement Displacement;
    FBrushEffectSmoothBlending SmoothBlending;
    FBrushEffectTerracing Terracing;

};

struct FLandmassFalloffSettings
{
    EBrushFalloffMode FalloffMode;
    float FalloffAngle;
    float FalloffWidth;
    float EdgeOffset;
    float ZOffset;

};

struct FLandmassTerrainCarvingSettings
{
    EBrushBlendType BlendMode;
    bool bInvertShape;
    FLandmassFalloffSettings FalloffSettings;
    FLandmassBrushEffectsList Effects;
    int32 Priority;

};

#endif
