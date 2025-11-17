#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectConcreteModelModuleType.h"
#include "PalBinaryMemory.h"
#include "PalMapObjectConcreteModelModuleSaveData.h"
#include "PalMapObjectConcreteModelSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectConcreteModelSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<EPalMapObjectConcreteModelModuleType, FPalMapObjectConcreteModelModuleSaveData> ModuleMap;
    
    PAL_API FPalMapObjectConcreteModelSaveData();
};

