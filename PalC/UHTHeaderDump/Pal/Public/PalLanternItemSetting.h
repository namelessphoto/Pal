#pragma once
#include "CoreMinimal.h"
#include "PalLanternItemSetting.generated.h"

class APalPlayerLampBase;

USTRUCT(BlueprintType)
struct FPalLanternItemSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Priority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<APalPlayerLampBase> SoftLanternClass;
    
    PAL_API FPalLanternItemSetting();
};

