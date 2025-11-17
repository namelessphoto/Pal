#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_WorldMapAreaData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_WorldMapAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Key;
    
    FPalDataTableRowName_WorldMapAreaData();
};

