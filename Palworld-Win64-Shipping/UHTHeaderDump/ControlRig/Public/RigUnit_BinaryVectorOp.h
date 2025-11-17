#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
#include "RigUnit_BinaryVectorOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_BinaryVectorOp : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Argument0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Argument1;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    FRigUnit_BinaryVectorOp();
};

