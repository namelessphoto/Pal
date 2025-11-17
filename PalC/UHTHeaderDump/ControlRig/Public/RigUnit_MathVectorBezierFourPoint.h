#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CRFourPointBezier.h"
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathVectorBezierFourPoint.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCRFourPointBezier Bezier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float T;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Tangent;
    
    FRigUnit_MathVectorBezierFourPoint();
};

