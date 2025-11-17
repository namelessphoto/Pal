#pragma once
#include "CoreMinimal.h"
#include "PalItemFilterPreferenceItem.h"
#include "PalItemFilterPreference.generated.h"

USTRUCT(BlueprintType)
struct FPalItemFilterPreference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, FPalItemFilterPreferenceItem> PreferenceMap;
    
    PAL_API FPalItemFilterPreference();
};

