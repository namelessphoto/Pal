#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalItemAndNum.generated.h"

USTRUCT(BlueprintType)
struct FPalItemAndNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FPalItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 Num;
    
    PAL_API FPalItemAndNum();
};

