#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBase.h"
#include "RigUnit_MathIntBinaryOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 B;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Result;
    
    FRigUnit_MathIntBinaryOp();
};

