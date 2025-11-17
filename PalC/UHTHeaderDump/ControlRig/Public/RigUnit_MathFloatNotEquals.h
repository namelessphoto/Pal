#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatNotEquals.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float B;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    FRigUnit_MathFloatNotEquals();
};

