#pragma once
#include "CoreMinimal.h"
#include "PalLoadoutSummonData.generated.h"

class UPalDynamicItemDataBase;

USTRUCT(BlueprintType)
struct FPalLoadoutSummonData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPalDynamicItemDataBase* DynamicData;
    
    UPROPERTY()
    int32 SummonNum;
    
    PAL_API FPalLoadoutSummonData();
};

