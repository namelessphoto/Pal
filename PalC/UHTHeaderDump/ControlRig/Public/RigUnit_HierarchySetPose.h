#pragma once
#include "CoreMinimal.h"
#include "EBoneGetterSetterMode.h"
#include "ERigElementType.h"
#include "RigElementKeyCollection.h"
#include "RigPose.h"
#include "RigUnit_HierarchyBaseMutable.h"
#include "RigUnit_HierarchySetPose.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigPose Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigElementType ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneGetterSetterMode space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKeyCollection ItemsToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    FRigUnit_HierarchySetPose();
};

