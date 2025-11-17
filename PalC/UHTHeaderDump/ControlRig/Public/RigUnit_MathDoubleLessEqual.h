#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathDoubleBase.h"
#include "RigUnit_MathDoubleLessEqual.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathDoubleLessEqual : public FRigUnit_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double B;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    FRigUnit_MathDoubleLessEqual();
};

