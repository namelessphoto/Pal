#pragma once
#include "CoreMinimal.h"
#include "EPalWorkableType.h"
#include "PalBinaryMemory.h"
#include "PalWorkAssignSaveData.h"
#include "PalWorkSaveData.generated.h"

USTRUCT()
struct FPalWorkSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalWorkableType WorkableType;
    
    UPROPERTY()
    TMap<int32, FPalWorkAssignSaveData> WorkAssignMap;
    
    PAL_API FPalWorkSaveData();
};

