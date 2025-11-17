#pragma once
#include "CoreMinimal.h"
#include "HoudiniOutputObject.h"
#include "HoudiniAssetBlueprintOutput.generated.h"

USTRUCT()
struct FHoudiniAssetBlueprintOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 OutputIndex;
    
    UPROPERTY()
    FHoudiniOutputObject OutputObject;
    
    HOUDINIENGINERUNTIME_API FHoudiniAssetBlueprintOutput();
};

