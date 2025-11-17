#pragma once
#include "CoreMinimal.h"
#include "PalItemDropOutInfo.generated.h"

class UPalMapObjectSpawnRequestHandler;

USTRUCT()
struct FPalItemDropOutInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UPalMapObjectSpawnRequestHandler*> OutSpawnRequestHandlers;
    
    PAL_API FPalItemDropOutInfo();
};

