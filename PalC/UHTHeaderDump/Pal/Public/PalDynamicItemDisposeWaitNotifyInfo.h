#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemId.h"
#include "PalDynamicItemDisposeWaitNotifyInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDynamicItemDisposeWaitNotifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalDynamicItemId> DynamicItemIds;
    
    UPROPERTY()
    TArray<int32> WaitPlayerIds;
    
    PAL_API FPalDynamicItemDisposeWaitNotifyInfo();
};

