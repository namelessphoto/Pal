#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "EPalBaseCampWorkerWalkAroundState.h"
#include "PalBaseCampWorkerWalkAroundSettingItem.generated.h"

USTRUCT()
struct FPalBaseCampWorkerWalkAroundSettingItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPalBaseCampWorkerWalkAroundState State;
    
    UPROPERTY(EditDefaultsOnly)
    int32 OccurWeight;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval RandomTimeRange;
    
    PAL_API FPalBaseCampWorkerWalkAroundSettingItem();
};

