#pragma once
#include "CoreMinimal.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_PoseGetCurve.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigPose Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Curve;
    
    UPROPERTY(BlueprintReadOnly)
    bool Valid;
    
    UPROPERTY(BlueprintReadOnly)
    float CurveValue;
    
    UPROPERTY()
    int32 CachedPoseElementIndex;
    
    UPROPERTY()
    int32 CachedPoseHash;
    
    FRigUnit_PoseGetCurve();
};

