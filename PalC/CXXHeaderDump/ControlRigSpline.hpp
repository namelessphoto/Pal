#ifndef UE4SS_SDK_ControlRigSpline_HPP
#define UE4SS_SDK_ControlRigSpline_HPP

#include "ControlRigSpline_enums.hpp"

struct FControlRigSpline
{
};

struct FControlRigSplineImpl
{
};

struct FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;
    FVector Position;
    float U;

};

struct FRigUnit_ControlRigSplineBase : public FRigUnit
{
};

struct FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase
{
    TArray<FVector> Points;
    ESplineType SplineMode;
    int32 SamplesPerSegment;
    float Compression;
    float Stretch;
    FControlRigSpline Spline;

};

struct FRigUnit_DrawControlRigSpline : public FRigUnitMutable
{
    FControlRigSpline Spline;
    FLinearColor Color;
    float Thickness;
    int32 Detail;

};

struct FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    FControlRigSpline Spline;
    EControlRigCurveAlignment Alignment;
    float Minimum;
    float Maximum;
    int32 SamplingPrecision;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    FVector PoleVectorPosition;
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
    FRigUnit_FitChainToCurve_WorkData WorkData;

};

struct FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;
    FControlRigSpline Spline;
    EControlRigCurveAlignment Alignment;
    float Minimum;
    float Maximum;
    int32 SamplingPrecision;
    FVector PrimaryAxis;
    FVector SecondaryAxis;
    FVector PoleVectorPosition;
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;
    EControlRigAnimEasingType RotationEaseType;
    float Weight;
    bool bPropagateToChildren;
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
    FRigUnit_FitChainToCurve_WorkData WorkData;

};

struct FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;
    FControlRigSpline Spline;

};

struct FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;
    FControlRigSpline Spline;

};

struct FRigUnit_GetLengthControlRigSpline : public FRigUnit
{
    FControlRigSpline Spline;
    float Length;

};

struct FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;
    float Percentage;
    float U;

};

struct FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;
    float U;
    FVector Position;

};

struct FRigUnit_SetSplinePoints : public FRigUnitMutable
{
    TArray<FVector> Points;
    FControlRigSpline Spline;

};

struct FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;
    float U;
    FVector Tangent;

};

struct FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;
    FVector UpVector;
    float Roll;
    float U;
    FTransform Transform;

};

#endif
