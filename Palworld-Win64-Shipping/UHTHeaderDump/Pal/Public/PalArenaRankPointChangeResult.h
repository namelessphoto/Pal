#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalArenaRankChange.h"
#include "PalArenaRankPointChangeResult.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaRankPointChangeResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 AfterPoint;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ChangePoint;
    
    UPROPERTY(BlueprintReadOnly)
    EPalArenaRankChange RankChange;
    
    PAL_API FPalArenaRankPointChangeResult();
};

