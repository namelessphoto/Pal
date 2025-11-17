#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatGreater.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float B;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    FRigUnit_MathFloatGreater();
};

