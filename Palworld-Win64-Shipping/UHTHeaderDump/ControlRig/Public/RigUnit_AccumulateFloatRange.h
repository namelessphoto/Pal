#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AccumulateBase.h"
#include "RigUnit_AccumulateFloatRange.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateFloatRange : public FRigUnit_AccumulateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadOnly)
    float Minimum;
    
    UPROPERTY(BlueprintReadOnly)
    float Maximum;
    
    UPROPERTY()
    float AccumulatedMinimum;
    
    UPROPERTY()
    float AccumulatedMaximum;
    
    FRigUnit_AccumulateFloatRange();
};

