#pragma once
#include "CoreMinimal.h"
#include "CollisionLimitDataBase.h"
#include "CapsuleLimitData.generated.h"

USTRUCT()
struct FCapsuleLimitData : public FCollisionLimitDataBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    float Length;
    
    KAWAIIPHYSICS_API FCapsuleLimitData();
};

