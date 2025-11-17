#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "EPalFarmCropState.h"
#include "PalFarmCropGrowupProcessSet.generated.h"

USTRUCT(BlueprintType)
struct FPalFarmCropGrowupProcessSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPalFarmCropState State;
    
    UPROPERTY(EditDefaultsOnly)
    FComponentReference TargetCompRef;
    
    UPROPERTY(EditDefaultsOnly)
    float ProcessRate;
    
    PAL_API FPalFarmCropGrowupProcessSet();
};

