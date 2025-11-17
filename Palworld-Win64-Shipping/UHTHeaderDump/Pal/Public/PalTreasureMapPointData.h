#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalTreasureMapPointData.generated.h"

USTRUCT(BlueprintType)
struct FPalTreasureMapPointData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector InitPointLocation;
    
    UPROPERTY()
    FVector PointLocation;
    
    PAL_API FPalTreasureMapPointData();
};

