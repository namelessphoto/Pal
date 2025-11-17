#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemIdAndNum.generated.h"

USTRUCT(BlueprintType)
struct FPalStaticItemIdAndNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Num;
    
    PAL_API FPalStaticItemIdAndNum();
};

