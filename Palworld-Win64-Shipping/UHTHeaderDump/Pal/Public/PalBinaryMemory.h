#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.generated.h"

USTRUCT()
struct FPalBinaryMemory {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<uint8> RawData;
    
    UPROPERTY()
    TArray<uint8> CustomVersionData;
    
public:
    PAL_API FPalBinaryMemory();
};

