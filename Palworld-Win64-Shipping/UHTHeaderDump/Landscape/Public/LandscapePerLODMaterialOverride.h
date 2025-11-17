#pragma once
#include "CoreMinimal.h"
#include "LandscapePerLODMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FLandscapePerLODMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 LODIndex;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    LANDSCAPE_API FLandscapePerLODMaterialOverride();
};

