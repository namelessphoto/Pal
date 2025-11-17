#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleClamp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleClamp : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Maximum;
    
    UPROPERTY(BlueprintReadOnly)
    double Result;
    
    FRigUnit_MathDoubleClamp();
};

