#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBase.h"
#include "RigUnit_MathBoolOnce.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathBoolOnce : public FRigUnit_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    UPROPERTY()
    bool LastValue;
    
    UPROPERTY()
    float TimeLeft;
    
    FRigUnit_MathBoolOnce();
};

