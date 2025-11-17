#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.h"
#include "PalBaseCampWorkCollectionStashInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampWorkCollectionStashInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGameDateTime StashAtTime;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bRestoreAtNextResetTime;
    
    PAL_API FPalBaseCampWorkCollectionStashInfo();
};

