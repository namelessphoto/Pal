#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
#include "RigUnit_MathMatrixBase.h"
#include "RigUnit_MathMatrixBinaryAggregateOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathMatrixBinaryAggregateOp : public FRigUnit_MathMatrixBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMatrix A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMatrix B;
    
    UPROPERTY(BlueprintReadOnly)
    FMatrix Result;
    
    FRigUnit_MathMatrixBinaryAggregateOp();
};

