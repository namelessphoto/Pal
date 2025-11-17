#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GameDateTime.h"
#include "PalArenaRule.h"
#include "PalArenaSpectatePlayerInfo.h"
#include "PalArenaSpectateRoomInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaSpectateRoomInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bIsPartySelecting;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FPalArenaSpectatePlayerInfo> SpectatePlayerInfos;
    
    UPROPERTY(BlueprintReadOnly)
    FPalArenaRule Rule;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ArenaInstanceId;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ArenaRoomId;
    
    UPROPERTY(BlueprintReadOnly)
    FGameDateTime SequenceStartTime;
    
    PAL_API FPalArenaSpectateRoomInfo();
};

