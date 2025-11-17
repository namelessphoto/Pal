#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatSelectBool.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IfTrue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IfFalse;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    FRigUnit_MathFloatSelectBool();
};

