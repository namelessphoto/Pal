#pragma once
#include "CoreMinimal.h"
#include "EPalGroupType.h"
#include "PalBinaryMemory.h"
#include "PalGroupSaveData.generated.h"

USTRUCT()
struct FPalGroupSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalGroupType GroupType;
    
    PAL_API FPalGroupSaveData();
};

