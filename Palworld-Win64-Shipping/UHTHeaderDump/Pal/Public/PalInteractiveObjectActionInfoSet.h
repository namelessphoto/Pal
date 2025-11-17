#pragma once
#include "CoreMinimal.h"
#include "PalInteractiveObjectActionInfoData.h"
#include "PalInteractiveObjectActionInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FPalInteractiveObjectActionInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FPalInteractiveObjectActionInfoData Interact1_Indicator;
    
    UPROPERTY(BlueprintReadOnly)
    FPalInteractiveObjectActionInfoData Interact2_Indicator;
    
    UPROPERTY(BlueprintReadOnly)
    FPalInteractiveObjectActionInfoData Interact3_Indicator;
    
    UPROPERTY(BlueprintReadOnly)
    FPalInteractiveObjectActionInfoData Interact4_Indicator;
    
    PAL_API FPalInteractiveObjectActionInfoSet();
};

