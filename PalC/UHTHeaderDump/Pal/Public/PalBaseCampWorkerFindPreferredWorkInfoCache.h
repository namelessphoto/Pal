#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampWorkerFindPreferredWorkInfoCache.generated.h"

class UPalWorkBase;

USTRUCT()
struct FPalBaseCampWorkerFindPreferredWorkInfoCache {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UPalWorkBase*> SortedByPriorityDescWorks;
    
    PAL_API FPalBaseCampWorkerFindPreferredWorkInfoCache();
};

