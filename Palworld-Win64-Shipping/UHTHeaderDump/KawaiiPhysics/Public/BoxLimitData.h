#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CollisionLimitDataBase.h"
#include "BoxLimitData.generated.h"

USTRUCT()
struct FBoxLimitData : public FCollisionLimitDataBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Extent;
    
    KAWAIIPHYSICS_API FBoxLimitData();
};

