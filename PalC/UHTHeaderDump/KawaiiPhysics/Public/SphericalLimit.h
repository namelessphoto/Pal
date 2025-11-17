#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=ESphericalLimitType -FallbackName=ESphericalLimitType
#include "CollisionLimitBase.h"
#include "SphericalLimit.generated.h"

USTRUCT(BlueprintType)
struct FSphericalLimit : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    ESphericalLimitType LimitType;
    
    KAWAIIPHYSICS_API FSphericalLimit();
};

