#pragma once
#include "CoreMinimal.h"
#include "PalCharacterTeamMissionMasterData.h"
#include "PalCharacterTeamMissionInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterTeamMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName MissionId;
    
    UPROPERTY(BlueprintReadOnly)
    bool bEnableChallenge;
    
    UPROPERTY(BlueprintReadOnly)
    FPalCharacterTeamMissionMasterData MasterData;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FName> RewardStaticItemIds;
    
    PAL_API FPalCharacterTeamMissionInfo();
};

