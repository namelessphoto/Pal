#ifndef UE4SS_SDK_ModelingOperators_HPP
#define UE4SS_SDK_ModelingOperators_HPP

#include "ModelingOperators_enums.hpp"

class URecomputeUVsOpFactory : public UObject
{
    class URecomputeUVsToolProperties* Settings;

};

class URecomputeUVsToolProperties : public UInteractiveToolPropertySet
{
    bool bEnablePolygroupSupport;
    ERecomputeUVsPropertiesIslandMode IslandGeneration;
    ERecomputeUVsPropertiesUnwrapType UnwrapType;
    ERecomputeUVsToolOrientationMode AutoRotation;
    bool bPreserveIrregularity;
    int32 SmoothingSteps;
    float SmoothingAlpha;
    float MergingDistortionThreshold;
    float MergingAngleThreshold;
    ERecomputeUVsPropertiesLayoutType LayoutType;
    int32 TextureResolution;
    float NormalizeScale;

};

class UUVLayoutOperatorFactory : public UObject
{
    class UUVLayoutProperties* Settings;

};

class UUVLayoutProperties : public UInteractiveToolPropertySet
{
    EUVLayoutType LayoutType;
    int32 TextureResolution;
    float Scale;
    FVector2D Translation;
    bool bAllowFlips;

};

#endif
