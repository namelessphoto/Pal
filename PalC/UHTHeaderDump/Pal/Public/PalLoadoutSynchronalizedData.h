#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalLoadoutSynchronalizedData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalLoadoutSynchronalizedData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftClassPtr<AActor> actorClass;
    
    UPROPERTY()
    FPalItemId ItemId;
    
    PAL_API FPalLoadoutSynchronalizedData();
};

