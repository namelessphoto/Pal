#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FloatSpringState -FallbackName=FloatSpringState
#include "RigUnit_SimBase.h"
#include "RigUnit_SpringInterp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SpringInterp : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    UPROPERTY()
    FFloatSpringState SpringState;
    
    FRigUnit_SpringInterp();
};

