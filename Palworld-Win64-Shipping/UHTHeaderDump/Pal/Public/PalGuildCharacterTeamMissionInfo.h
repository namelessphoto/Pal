#pragma once
#include "CoreMinimal.h"
#include "PalGuildCharacterTeamMissionInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildCharacterTeamMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName MissionId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bEnableChallenge;
    
    PAL_API FPalGuildCharacterTeamMissionInfo();
};

