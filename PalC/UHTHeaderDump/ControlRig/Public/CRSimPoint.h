#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CRSimPoint.generated.h"

USTRUCT()
struct FCRSimPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Mass;
    
    UPROPERTY(EditAnywhere)
    float Size;
    
    UPROPERTY(EditAnywhere)
    float LinearDamping;
    
    UPROPERTY(EditAnywhere)
    float InheritMotion;
    
    UPROPERTY(EditAnywhere)
    FVector Position;
    
    UPROPERTY(EditAnywhere)
    FVector LinearVelocity;
    
    CONTROLRIG_API FCRSimPoint();
};

