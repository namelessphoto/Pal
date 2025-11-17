#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CRFourPointBezier.h"
#include "EControlRigAnimEasingType.h"
#include "EControlRigCurveAlignment.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_FitChainToCurve_DebugSettings.h"
#include "RigUnit_FitChainToCurve_Rotation.h"
#include "RigUnit_FitChainToCurve_WorkData.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_FitChainToCurvePerItem.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCRFourPointBezier Bezier;
    
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
    
    FRigUnit_FitChainToCurvePerItem();
};

