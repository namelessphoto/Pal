#pragma once
#include "CoreMinimal.h"
#include "HoudiniHLODLayer.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniHLODLayer {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    HOUDINIENGINERUNTIME_API FHoudiniHLODLayer();
};

