#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AccumulateBase.h"
#include "RigUnit_AccumulateFloatMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateFloatMul : public FRigUnit_AccumulateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIntegrateDeltaTime;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    UPROPERTY()
    float AccumulatedValue;
    
    FRigUnit_AccumulateFloatMul();
};

