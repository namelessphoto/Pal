#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalCrimeStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCrimeStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TMap<FGuid, FDateTime> CrimeStateFinishTimeMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FGuid> CrimeStateArray;
    
    PAL_API FPalCrimeStateInfo();
};

