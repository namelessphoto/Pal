#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalBossBattleDifficulty.h"
#include "EPalBossType.h"
#include "PalCharacterTeamMissionChallengeConditionMasterData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalCharacterTeamMissionChallengeConditionMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalBossType DefeatBossType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalBossBattleDifficulty DefeatBossDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DefeatHardBossNum;
    
    FPalCharacterTeamMissionChallengeConditionMasterData();
};

