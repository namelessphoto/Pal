#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "PalGuildEnterRequestLogInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildEnterRequestLogInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FDateTime> RequestAtArray;
    
    PAL_API FPalGuildEnterRequestLogInfo();
};

