#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathIntersectPlane.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PlanePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PlaneNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    UPROPERTY(BlueprintReadOnly)
    float Distance;
    
    FRigUnit_MathIntersectPlane();
};

