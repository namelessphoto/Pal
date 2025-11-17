#pragma once
#include "CoreMinimal.h"
#include "PalWorkSuitabilityDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bIsChangeWorkAnimPlayRate;
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    TArray<int32> CraftSpeeds;
    
    PAL_API FPalWorkSuitabilityDefineData();
};

