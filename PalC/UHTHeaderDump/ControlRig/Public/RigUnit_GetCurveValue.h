#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
#include "RigUnit_GetCurveValue.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetCurveValue : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Curve;
    
    UPROPERTY(BlueprintReadOnly)
    bool Valid;
    
    UPROPERTY(BlueprintReadOnly)
    float Value;
    
private:
    UPROPERTY()
    FCachedRigElement CachedCurveIndex;
    
public:
    FRigUnit_GetCurveValue();
};

