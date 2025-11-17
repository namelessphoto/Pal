#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalMapObjectModelConnectIndex.h"
#include "PalMapObjectModelConnectInfoItem.generated.h"

USTRUCT()
struct FPalMapObjectModelConnectInfoItem {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FGuid ConnectToModelInstanceId;
    
    UPROPERTY(VisibleInstanceOnly)
    EPalMapObjectModelConnectIndex ConnectIndex;
    
    PAL_API FPalMapObjectModelConnectInfoItem();
};

