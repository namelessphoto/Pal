#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalStagePlayerState.h"
#include "PalStagePlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalStagePlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    EPalStagePlayerState PlayerState;
    
    PAL_API FPalStagePlayerInfo();
};

