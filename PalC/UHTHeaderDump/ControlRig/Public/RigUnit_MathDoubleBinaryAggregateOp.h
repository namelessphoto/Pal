#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleBinaryAggregateOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleBinaryAggregateOp : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double B;
    
    UPROPERTY(BlueprintReadOnly)
    double Result;
    
    FRigUnit_MathDoubleBinaryAggregateOp();
};

