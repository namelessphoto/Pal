#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ControlRigSpline.h"
#include "ESplineType.h"
#include "RigUnit_ControlRigSplineBase.h"
#include "RigUnit_ControlRigSplineFromPoints.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIGSPLINE_API FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESplineType SplineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SamplesPerSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Compression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stretch;
    
    UPROPERTY(BlueprintReadOnly)
    FControlRigSpline Spline;
    
    FRigUnit_ControlRigSplineFromPoints();
};

