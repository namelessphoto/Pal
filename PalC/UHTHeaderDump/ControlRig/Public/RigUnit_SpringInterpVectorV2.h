#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VectorSpringState -FallbackName=VectorSpringState
#include "RigUnit_SimBase.h"
#include "RigUnit_SpringInterpVectorV2.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SpringInterpVectorV2 : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Force;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bUseCurrentInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetVelocityAmount;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bInitializeFromTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Velocity;
    
    UPROPERTY()
    FVector SimulatedResult;
    
    UPROPERTY()
    FVectorSpringState SpringState;
    
    FRigUnit_SpringInterpVectorV2();
};

