#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_BinaryFloatOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_BinaryFloatOp : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Argument0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Argument1;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    FRigUnit_BinaryFloatOp();
};

