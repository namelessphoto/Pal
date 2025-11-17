#pragma once
#include "CoreMinimal.h"
#include "PalDungeonMarkerPointSpawnParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalDungeonMarkerPointSpawnParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RespawnInterval;
    
    UPROPERTY(EditAnywhere)
    float DisappearInterval;
    
    UPROPERTY(EditAnywhere)
    float RespawnProbability;
    
    UPROPERTY(EditAnywhere)
    float DisappearIntervalAfterDefeatBoss;
    
    PAL_API FPalDungeonMarkerPointSpawnParameter();
};

