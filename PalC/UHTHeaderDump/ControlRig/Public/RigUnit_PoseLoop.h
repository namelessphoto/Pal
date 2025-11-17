#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ControlRigExecuteContext.h"
#include "RigElementKey.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBaseMutable.h"
#include "RigUnit_PoseLoop.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigPose Pose;
    
    UPROPERTY(BlueprintReadOnly)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform GlobalTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform LocalTransform;
    
    UPROPERTY(BlueprintReadOnly)
    float CurveValue;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Count;
    
    UPROPERTY(BlueprintReadOnly)
    float Ratio;
    
    UPROPERTY()
    bool Continue;
    
    UPROPERTY(BlueprintReadOnly)
    FControlRigExecuteContext Completed;
    
    FRigUnit_PoseLoop();
};

