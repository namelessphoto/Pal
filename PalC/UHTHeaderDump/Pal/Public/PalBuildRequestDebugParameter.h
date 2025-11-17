#pragma once
#include "CoreMinimal.h"
#include "PalBuildRequestDebugParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildRequestDebugParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bNotConsumeMaterials;
    
    PAL_API FPalBuildRequestDebugParameter();
};

