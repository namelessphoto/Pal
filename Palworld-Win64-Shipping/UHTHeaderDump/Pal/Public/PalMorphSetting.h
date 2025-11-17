#pragma once
#include "CoreMinimal.h"
#include "PalMorphSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalMorphSetting {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<FName, float> WeightList;
    
    PAL_API FPalMorphSetting();
};

