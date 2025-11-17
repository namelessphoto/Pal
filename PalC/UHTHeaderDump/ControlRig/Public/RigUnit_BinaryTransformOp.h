#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit.h"
#include "RigUnit_BinaryTransformOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_BinaryTransformOp : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Argument0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Argument1;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    FRigUnit_BinaryTransformOp();
};

