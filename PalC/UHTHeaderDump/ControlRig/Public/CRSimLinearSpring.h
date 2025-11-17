#pragma once
#include "CoreMinimal.h"
#include "CRSimLinearSpring.generated.h"

USTRUCT()
struct FCRSimLinearSpring {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SubjectA;
    
    UPROPERTY(EditAnywhere)
    int32 SubjectB;
    
    UPROPERTY(EditAnywhere)
    float Coefficient;
    
    UPROPERTY(EditAnywhere)
    float Equilibrium;
    
    CONTROLRIG_API FCRSimLinearSpring();
};

