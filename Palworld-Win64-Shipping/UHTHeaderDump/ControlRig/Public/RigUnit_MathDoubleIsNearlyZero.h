#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleIsNearlyZero.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleIsNearlyZero : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Tolerance;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    FRigUnit_MathDoubleIsNearlyZero();
};

