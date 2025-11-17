#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBase.h"
#include "RigUnit_MathBoolToggled.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathBoolToggled : public FRigUnit_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Value;
    
    UPROPERTY(BlueprintReadOnly)
    bool Toggled;
    
    UPROPERTY()
    bool Initialized;
    
    UPROPERTY()
    bool LastValue;
    
    FRigUnit_MathBoolToggled();
};

