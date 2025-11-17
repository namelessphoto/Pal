#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalPlayerTreasureMapPointDataItem.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerTreasureMapPointDataItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Rarity;
    
    PAL_API FPalPlayerTreasureMapPointDataItem();
};

