#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatClamp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Maximum;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    FRigUnit_MathFloatClamp();
};

