#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampWorkerWalkAroundSettingItem.h"
#include "PalBaseCampWorkerWalkAroundSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkerWalkAroundSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalBaseCampWorkerWalkAroundSettingItem> Items;
    
    UPROPERTY(EditDefaultsOnly)
    float WalkAroundArrivalRange;
    
    UPROPERTY(EditDefaultsOnly)
    float WalkAroundNextDistance;
    
    PAL_API FPalBaseCampWorkerWalkAroundSettings();
};

