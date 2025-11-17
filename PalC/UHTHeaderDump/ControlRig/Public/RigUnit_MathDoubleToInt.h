#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleToInt.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleToInt : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Value;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Result;
    
    FRigUnit_MathDoubleToInt();
};

