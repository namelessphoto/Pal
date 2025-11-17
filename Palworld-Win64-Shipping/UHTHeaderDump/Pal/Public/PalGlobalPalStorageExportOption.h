#pragma once
#include "CoreMinimal.h"
#include "PalGlobalPalStorageExportOption.generated.h"

USTRUCT(BlueprintType)
struct FPalGlobalPalStorageExportOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bRemoveOldData;
    
    UPROPERTY(BlueprintReadWrite)
    bool bForceExport;
    
    PAL_API FPalGlobalPalStorageExportOption();
};

