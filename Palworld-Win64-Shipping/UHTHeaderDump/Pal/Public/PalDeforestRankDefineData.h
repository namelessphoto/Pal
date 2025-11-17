#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectMaterialSubType.h"
#include "PalDeforestRankDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalDeforestRankDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DamageRate;
    
    UPROPERTY(EditDefaultsOnly)
    EPalMapObjectMaterialSubType MaterialSubType;
    
    PAL_API FPalDeforestRankDefineData();
};

