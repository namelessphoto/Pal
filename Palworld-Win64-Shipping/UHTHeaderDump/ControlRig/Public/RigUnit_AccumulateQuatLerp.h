#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_AccumulateBase.h"
#include "RigUnit_AccumulateQuatLerp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AccumulateQuatLerp : public FRigUnit_AccumulateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Blend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIntegrateDeltaTime;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Result;
    
    UPROPERTY()
    FQuat AccumulatedValue;
    
    FRigUnit_AccumulateQuatLerp();
};

