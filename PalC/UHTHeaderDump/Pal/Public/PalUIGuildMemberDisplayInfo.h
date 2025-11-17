#pragma once
#include "CoreMinimal.h"
#include "EPalGuildPlayerStatus.h"
#include "PalUIGuildMemberDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIGuildMemberDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString CharacterName;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsAdmin;
    
    UPROPERTY(BlueprintReadOnly)
    EPalGuildPlayerStatus PlayerStatus;
    
    PAL_API FPalUIGuildMemberDisplayInfo();
};

