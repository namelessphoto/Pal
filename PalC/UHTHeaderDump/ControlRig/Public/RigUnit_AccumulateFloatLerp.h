#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AccumulateBase.h"
#include "RigUnit_AccumulateFloatLerp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateFloatLerp : public FRigUnit_AccumulateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Blend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIntegrateDeltaTime;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    UPROPERTY()
    float AccumulatedValue;
    
    FRigUnit_AccumulateFloatLerp();
};

