#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathDistanceToPlane.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDistanceToPlane : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PlanePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PlaneNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector ClosestPointOnPlane;
    
    UPROPERTY(BlueprintReadOnly)
    float SignedDistance;
    
    FRigUnit_MathDistanceToPlane();
};

