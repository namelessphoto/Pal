#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKeyCollection.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_PoseGetItems.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigPose Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigElementType ElementType;
    
    UPROPERTY(BlueprintReadOnly)
    FRigElementKeyCollection Items;
    
    FRigUnit_PoseGetItems();
};

