#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemId.h"
#include "PalItemId.generated.h"

USTRUCT(BlueprintType)
struct FPalItemId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName StaticId;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FPalDynamicItemId DynamicId;
    
    PAL_API FPalItemId();
};

