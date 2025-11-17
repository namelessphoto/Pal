#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathTransformBase.h"
#include "RigUnit_MathTransformLerp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float T;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    FRigUnit_MathTransformLerp();
};

