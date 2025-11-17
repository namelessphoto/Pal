#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampModuleType.h"
#include "PalBaseCampSaveData_Module.h"
#include "PalBaseCampSaveData_WorkCollection.h"
#include "PalBaseCampSaveData_WorkerDirector.h"
#include "PalBinaryMemory.h"
#include "PalBaseCampSaveData.generated.h"

USTRUCT()
struct FPalBaseCampSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalBaseCampSaveData_WorkerDirector WorkerDirector;
    
    UPROPERTY()
    FPalBaseCampSaveData_WorkCollection WorkCollection;
    
    UPROPERTY()
    TMap<EPalBaseCampModuleType, FPalBaseCampSaveData_Module> ModuleMap;
    
    PAL_API FPalBaseCampSaveData();
};

