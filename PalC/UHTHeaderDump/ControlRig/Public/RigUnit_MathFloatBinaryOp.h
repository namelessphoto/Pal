#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatBinaryOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float B;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    FRigUnit_MathFloatBinaryOp();
};

