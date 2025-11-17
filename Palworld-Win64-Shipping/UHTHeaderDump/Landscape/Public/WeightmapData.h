#pragma once
#include "CoreMinimal.h"
#include "WeightmapLayerAllocationInfo.h"
#include "WeightmapData.generated.h"

class ULandscapeWeightmapUsage;
class UTexture2D;

USTRUCT()
struct FWeightmapData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UTexture2D*> Textures;
    
    UPROPERTY()
    TArray<FWeightmapLayerAllocationInfo> LayerAllocations;
    
    UPROPERTY(NonTransactional, Transient)
    TArray<ULandscapeWeightmapUsage*> TextureUsages;
    
    LANDSCAPE_API FWeightmapData();
};

