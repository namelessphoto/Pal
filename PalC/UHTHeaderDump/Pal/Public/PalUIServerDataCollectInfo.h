#pragma once
#include "CoreMinimal.h"
#include "EPalUIServerListSortType.h"
#include "PalUIServerDataCollectInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIServerDataCollectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalUIServerListSortType SortType;
    
    PAL_API FPalUIServerDataCollectInfo();
};

