#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalArenaEntryPair.h"
#include "PalArenaEntranceInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaEntranceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FPalArenaEntryPair> EntryPlayers;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanEntry;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ArenaRoomId;
    
    PAL_API FPalArenaEntranceInfo();
};

