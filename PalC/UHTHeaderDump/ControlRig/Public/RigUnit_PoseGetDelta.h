#pragma once
#include "CoreMinimal.h"
#include "EBoneGetterSetterMode.h"
#include "ERigElementType.h"
#include "RigElementKeyCollection.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_PoseGetDelta.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigPose PoseA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigPose PoseB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PositionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigElementType ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneGetterSetterMode space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection ItemsToCompare;
    
    UPROPERTY(BlueprintReadOnly)
    bool PosesAreEqual;
    
    UPROPERTY(BlueprintReadOnly)
    FRigElementKeyCollection ItemsWithDelta;
    
    FRigUnit_PoseGetDelta();
};

