#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=EControlRigAnimEasingType -FallbackName=EControlRigAnimEasingType
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=EControlRigCurveAlignment -FallbackName=EControlRigCurveAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigElementKeyCollection -FallbackName=RigElementKeyCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_FitChainToCurve_DebugSettings -FallbackName=RigUnit_FitChainToCurve_DebugSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_FitChainToCurve_Rotation -FallbackName=RigUnit_FitChainToCurve_Rotation
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_FitChainToCurve_WorkData -FallbackName=RigUnit_FitChainToCurve_WorkData
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_HighlevelBaseMutable -FallbackName=RigUnit_HighlevelBaseMutable
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ControlRigSpline.h"
#include "RigUnit_FitChainToSplineCurve.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIGSPLINE_API FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FControlRigSpline Spline;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EControlRigCurveAlignment Alignment;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Minimum;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Maximum;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 SamplingPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PrimaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SecondaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PoleVectorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EControlRigAnimEasingType RotationEaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
    
    UPROPERTY(Transient)
    FRigUnit_FitChainToCurve_WorkData WorkData;
    
    FRigUnit_FitChainToSplineCurve();
};

