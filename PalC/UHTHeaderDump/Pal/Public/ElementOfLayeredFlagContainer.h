#pragma once
#include "CoreMinimal.h"
#include "FlagContainer.h"
#include "ElementOfLayeredFlagContainer.generated.h"

USTRUCT(BlueprintType)
struct FElementOfLayeredFlagContainer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 Priority;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer Container;
    
    PAL_API FElementOfLayeredFlagContainer();
};

