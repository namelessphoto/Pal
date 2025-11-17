#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKeyCollection.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_HierarchyGetPose.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Initial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigElementType ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection ItemsToGet;
    
    UPROPERTY(BlueprintReadOnly)
    FRigPose Pose;
    
    FRigUnit_HierarchyGetPose();
};

