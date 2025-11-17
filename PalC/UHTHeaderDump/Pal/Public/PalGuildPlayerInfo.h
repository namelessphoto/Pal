#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "EPalGuildPlayerStatus.h"
#include "PalGuildPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    EPalGuildPlayerStatus Status;
    
    UPROPERTY(NotReplicated, VisibleInstanceOnly)
    FDateTime LastOnlineRealTime;
    
    UPROPERTY(VisibleInstanceOnly)
    FString PlayerName;
    
    PAL_API FPalGuildPlayerInfo();
};

