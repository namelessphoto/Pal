#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "PalFishSpawnPointData.generated.h"

USTRUCT(BlueprintType)
struct FPalFishSpawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 PointIndex;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FBoxSphereBounds PointBounds;
    
    PAL_API FPalFishSpawnPointData();
};

