#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemDataAndNum.generated.h"

class UPalStaticItemDataBase;

USTRUCT(BlueprintType)
struct FPalStaticItemDataAndNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalStaticItemDataBase* StaticData;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Num;
    
    PAL_API FPalStaticItemDataAndNum();
};

