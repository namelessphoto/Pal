#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectModelConnectIndex.h"
#include "PalMapObjectModelConnectInfoItem.h"
#include "PalMapObjectModelConnectInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectModelConnectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    EPalMapObjectModelConnectIndex ConnectIndex;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<FPalMapObjectModelConnectInfoItem> ConnectToInfos;
    
    PAL_API FPalMapObjectModelConnectInfo();
};

