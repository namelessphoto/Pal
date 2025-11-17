#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_AccumulateBase.h"
#include "RigUnit_AccumulateQuatMul.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateQuatMul : public FRigUnit_AccumulateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFlipOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIntegrateDeltaTime;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Result;
    
    UPROPERTY()
    FQuat AccumulatedValue;
    
    FRigUnit_AccumulateQuatMul();
};

