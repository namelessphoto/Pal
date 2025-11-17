#pragma once
#include "CoreMinimal.h"
#include "HoudiniClearedTargetLayer.generated.h"

USTRUCT()
struct HOUDINIENGINERUNTIME_API FHoudiniClearedTargetLayer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FString> TargetLayers;
    
    FHoudiniClearedTargetLayer();
};

