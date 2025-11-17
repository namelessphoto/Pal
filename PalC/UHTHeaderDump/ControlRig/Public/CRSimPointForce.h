#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ECRSimPointForceType.h"
#include "CRSimPointForce.generated.h"

USTRUCT(BlueprintType)
struct FCRSimPointForce {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECRSimPointForceType ForceType;
    
    UPROPERTY(EditAnywhere)
    FVector Vector;
    
    UPROPERTY(EditAnywhere)
    float Coefficient;
    
    UPROPERTY(EditAnywhere)
    bool bNormalize;
    
    CONTROLRIG_API FCRSimPointForce();
};

