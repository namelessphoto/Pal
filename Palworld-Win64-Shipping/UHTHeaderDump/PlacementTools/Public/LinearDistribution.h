#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "LinearDistribution.generated.h"

USTRUCT(BlueprintType)
struct FLinearDistribution {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector2D> CurvePoints;
    
    PLACEMENTTOOLS_API FLinearDistribution();
};

