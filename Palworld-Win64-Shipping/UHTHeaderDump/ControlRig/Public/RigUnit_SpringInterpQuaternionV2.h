#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=QuaternionSpringState -FallbackName=QuaternionSpringState
#include "RigUnit_SimBase.h"
#include "RigUnit_SpringInterpQuaternionV2.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SpringInterpQuaternionV2 : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Torque;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bUseCurrentInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetVelocityAmount;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bInitializeFromTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Result;
    
    UPROPERTY(BlueprintReadOnly)
    FVector AngularVelocity;
    
    UPROPERTY()
    FQuat SimulatedResult;
    
    UPROPERTY()
    FQuaternionSpringState SpringState;
    
    FRigUnit_SpringInterpQuaternionV2();
};

