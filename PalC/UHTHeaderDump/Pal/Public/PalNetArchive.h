#pragma once
#include "CoreMinimal.h"
#include "PalNetArchive.generated.h"

USTRUCT(BlueprintType)
struct FPalNetArchive {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> Bytes;
    
    PAL_API FPalNetArchive();
};

