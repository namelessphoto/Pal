#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectSpawnableCheckParameter.generated.h"

class AActor;

USTRUCT()
struct FPalMapObjectSpawnableCheckParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AActor*> IgnoredOverlapCheckActors;
    
    PAL_API FPalMapObjectSpawnableCheckParameter();
};

