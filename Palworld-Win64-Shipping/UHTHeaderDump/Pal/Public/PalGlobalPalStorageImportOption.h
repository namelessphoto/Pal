#pragma once
#include "CoreMinimal.h"
#include "PalGlobalPalStorageImportOption.generated.h"

USTRUCT(BlueprintType)
struct FPalGlobalPalStorageImportOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bOverwriteData;
    
    PAL_API FPalGlobalPalStorageImportOption();
};

