#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalItemThrottleAutoCounter.generated.h"

class UObject;

USTRUCT()
struct FPalItemThrottleAutoCounter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UObject> WorldContext;
    
    UPROPERTY()
    FVector Location;
    
    PAL_API FPalItemThrottleAutoCounter();
};

