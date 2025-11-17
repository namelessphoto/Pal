#pragma once
#include "CoreMinimal.h"
#include "PalCollectionRankDefineData.generated.h"

USTRUCT()
struct FPalCollectionRankDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DropNumRate;
    
    PAL_API FPalCollectionRankDefineData();
};

