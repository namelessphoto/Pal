#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
#include "CollisionLimitBase.h"
#include "PlanarLimit.generated.h"

USTRUCT(BlueprintType)
struct FPlanarLimit : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPlane Plane;
    
    KAWAIIPHYSICS_API FPlanarLimit();
};

