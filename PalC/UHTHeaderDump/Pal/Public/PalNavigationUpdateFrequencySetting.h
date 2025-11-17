#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "PalNavigationUpdateFrequencySetting.generated.h"

USTRUCT(BlueprintType)
struct FPalNavigationUpdateFrequencySetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 UpdateDivideRate;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D UpdatableRangeMinMaxFromPlayer;
    
    PAL_API FPalNavigationUpdateFrequencySetting();
};

