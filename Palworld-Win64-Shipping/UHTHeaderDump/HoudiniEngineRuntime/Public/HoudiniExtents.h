#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "HoudiniExtents.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniExtents {
    GENERATED_BODY()
public:
    UPROPERTY()
    FIntPoint Min;
    
    UPROPERTY()
    FIntPoint Max;
    
    FHoudiniExtents();
};

