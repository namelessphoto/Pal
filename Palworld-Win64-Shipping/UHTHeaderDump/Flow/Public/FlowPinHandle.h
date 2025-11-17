#pragma once
#include "CoreMinimal.h"
#include "FlowPinHandle.generated.h"

USTRUCT()
struct FLOW_API FFlowPinHandle {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PinName;
    
    FFlowPinHandle();
};

