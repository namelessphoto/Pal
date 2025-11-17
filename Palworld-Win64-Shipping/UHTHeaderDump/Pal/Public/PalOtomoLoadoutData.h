#pragma once
#include "CoreMinimal.h"
#include "PalOtomoLoadoutElementData.h"
#include "PalOtomoLoadoutData.generated.h"

USTRUCT(BlueprintType)
struct FPalOtomoLoadoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPalOtomoLoadoutElementData> LoadoutPals;
    
    PAL_API FPalOtomoLoadoutData();
};

