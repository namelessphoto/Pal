#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ConnectedPin.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FConnectedPin {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid NodeGuid;
    
    UPROPERTY()
    FName PinName;
    
    FConnectedPin();
};

