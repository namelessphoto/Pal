#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=ESphericalLimitType -FallbackName=ESphericalLimitType
#include "CollisionLimitDataBase.h"
#include "SphericalLimitData.generated.h"

USTRUCT()
struct FSphericalLimitData : public FCollisionLimitDataBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    ESphericalLimitType LimitType;
    
    KAWAIIPHYSICS_API FSphericalLimitData();
};

