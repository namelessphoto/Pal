#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalWorkSuitabilityPreferenceInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityPreferenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<EPalWorkSuitability> OffWorkSuitabilityList;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bAllowBaseCampBattle;
    
    PAL_API FPalWorkSuitabilityPreferenceInfo();
};

