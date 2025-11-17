#pragma once
#include "CoreMinimal.h"
#include "PalPlayerRecordCountMapStruct.generated.h"

USTRUCT()
struct FPalPlayerRecordCountMapStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, int64> countMap;
    
    PAL_API FPalPlayerRecordCountMapStruct();
};

