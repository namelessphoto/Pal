#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampTaskCheckedData.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampTaskCheckedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 completedTaskNum;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FName, int32> buildObjectNumMap;
    
    UPROPERTY(BlueprintReadOnly)
    int32 workerNum;
    
    PAL_API FPalBaseCampTaskCheckedData();
};

