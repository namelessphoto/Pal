#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_AccumulateBase.h"
#include "RigUnit_AccumulateTransformLerp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateTransformLerp : public FRigUnit_AccumulateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Blend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIntegrateDeltaTime;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    UPROPERTY()
    FTransform AccumulatedValue;
    
    FRigUnit_AccumulateTransformLerp();
};

