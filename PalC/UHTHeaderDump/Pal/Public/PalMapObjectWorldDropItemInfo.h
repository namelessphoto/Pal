#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.h"
#include "PalMapObjectWorldDropItemInfo.generated.h"

USTRUCT()
struct FPalMapObjectWorldDropItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName StaticItemId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGameDateTime CreatedAt;
    
    PAL_API FPalMapObjectWorldDropItemInfo();
};

