#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FloatSpringState -FallbackName=FloatSpringState
#include "RigUnit_SimBase.h"
#include "RigUnit_SpringInterpV2.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SpringInterpV2 : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Force;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bUseCurrentInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetVelocityAmount;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bInitializeFromTarget;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    UPROPERTY(BlueprintReadOnly)
    float Velocity;
    
    UPROPERTY()
    float SimulatedResult;
    
    UPROPERTY()
    FFloatSpringState SpringState;
    
    FRigUnit_SpringInterpV2();
};

