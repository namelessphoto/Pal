#pragma once
#include "CoreMinimal.h"
#include "ElementOfLayeredFlagContainer.h"
#include "LayeredFlagContainer.generated.h"

USTRUCT(BlueprintType)
struct FLayeredFlagContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FElementOfLayeredFlagContainer> ContainerList;
    
public:
    PAL_API FLayeredFlagContainer();
};

