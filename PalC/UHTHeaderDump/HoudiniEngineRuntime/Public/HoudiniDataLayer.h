#pragma once
#include "CoreMinimal.h"
#include "HoudiniDataLayer.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniDataLayer {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    bool bCreateIfNeeded;
    
    HOUDINIENGINERUNTIME_API FHoudiniDataLayer();
};

