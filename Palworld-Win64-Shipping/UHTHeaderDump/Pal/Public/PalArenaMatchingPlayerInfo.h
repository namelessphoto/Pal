#pragma once
#include "CoreMinimal.h"
#include "EPalArenaRank.h"
#include "PalArenaMatchingPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaMatchingPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalArenaRank ArenaRank;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayerLevel;
    
    PAL_API FPalArenaMatchingPlayerInfo();
};

