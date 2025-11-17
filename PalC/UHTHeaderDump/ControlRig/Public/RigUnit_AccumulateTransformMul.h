#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_AccumulateBase.h"
#include "RigUnit_AccumulateTransformMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateTransformMul : public FRigUnit_AccumulateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFlipOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIntegrateDeltaTime;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    UPROPERTY()
    FTransform AccumulatedValue;
    
    FRigUnit_AccumulateTransformMul();
};

