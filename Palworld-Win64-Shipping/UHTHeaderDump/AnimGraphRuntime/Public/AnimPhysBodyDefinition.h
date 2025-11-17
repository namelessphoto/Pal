#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimPhysCollisionType -FallbackName=AnimPhysCollisionType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimPhysConstraintSetup.h"
#include "AnimPhysBodyDefinition.generated.h"

USTRUCT()
struct FAnimPhysBodyDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FBoneReference BoundBone;
    
    UPROPERTY(EditAnywhere)
    FVector BoxExtents;
    
    UPROPERTY(EditAnywhere)
    FVector LocalJointOffset;
    
    UPROPERTY(EditAnywhere)
    FAnimPhysConstraintSetup ConstraintSetup;
    
    UPROPERTY(EditAnywhere)
    AnimPhysCollisionType CollisionType;
    
    UPROPERTY(EditAnywhere)
    float SphereCollisionRadius;
    
    ANIMGRAPHRUNTIME_API FAnimPhysBodyDefinition();
};

