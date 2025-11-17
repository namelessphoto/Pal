#pragma once
#include "CoreMinimal.h"
#include "FlowPin.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FFlowPin {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName PinName;
    
    UPROPERTY(EditDefaultsOnly)
    FText PinFriendlyName;
    
    UPROPERTY(EditDefaultsOnly)
    FString PinToolTip;
    
    FFlowPin();
};

