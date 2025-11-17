#pragma once
#include "CoreMinimal.h"
#include "FlowPinTrait.generated.h"

USTRUCT()
struct FLOW_API FFlowPinTrait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint8 bTraitAllowed: 1;
    
public:
    FFlowPinTrait();
};

