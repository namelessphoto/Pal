#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathTransformBase.h"
#include "RigUnit_MathTransformSelectBool.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform IfTrue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform IfFalse;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    FRigUnit_MathTransformSelectBool();
};

