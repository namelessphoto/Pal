#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectMaterialSubType.h"
#include "PalMiningRankDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalMiningRankDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DamageRate;
    
    UPROPERTY(EditDefaultsOnly)
    EPalMapObjectMaterialSubType MaterialSubType;
    
    PAL_API FPalMiningRankDefineData();
};

