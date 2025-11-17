#pragma once
#include "CoreMinimal.h"
#include "PalPlayerRecordFlagMapStruct.generated.h"

USTRUCT()
struct FPalPlayerRecordFlagMapStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, bool> flagMap;
    
    PAL_API FPalPlayerRecordFlagMapStruct();
};

