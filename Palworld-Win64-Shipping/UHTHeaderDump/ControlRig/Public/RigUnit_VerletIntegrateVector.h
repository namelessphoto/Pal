#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CRSimPoint.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_VerletIntegrateVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Blend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Force;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Position;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Acceleration;
    
    UPROPERTY(Transient)
    FCRSimPoint Point;
    
    UPROPERTY(Transient)
    bool bInitialized;
    
    FRigUnit_VerletIntegrateVector();
};

