#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalCharacterTeamMissionDifficulty.h"
#include "EPalElementType.h"
#include "EPalMapObjectCharacterTeamMissionIconTextureType.h"
#include "PalCharacterTeamMissionMasterData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalCharacterTeamMissionMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName TitleTextId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalMapObjectCharacterTeamMissionIconTextureType TextureType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalCharacterTeamMissionDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequiredSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RecommendedStrength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalElementType RequiredElementType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequiredElementNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxCharacterNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemFieldLotteryName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ReleaseCondition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ChallengeCondition;
    
    FPalCharacterTeamMissionMasterData();
};

