#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalPatrolMovementPoint.generated.h"

USTRUCT(BlueprintType)
struct FPalPatrolMovementPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    float WaitTime;
    
    PAL_API FPalPatrolMovementPoint();
};

