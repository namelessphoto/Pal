#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
#include "CollisionLimitDataBase.h"
#include "PlanarLimitData.generated.h"

USTRUCT()
struct FPlanarLimitData : public FCollisionLimitDataBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPlane Plane;
    
    KAWAIIPHYSICS_API FPlanarLimitData();
};

