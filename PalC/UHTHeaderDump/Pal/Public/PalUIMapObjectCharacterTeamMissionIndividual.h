#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalMapObjectCharacterTeamMissionIndividual.h"
#include "PalUIMapObjectCharacterTeamMissionIndividual.generated.h"

USTRUCT(BlueprintType)
struct FPalUIMapObjectCharacterTeamMissionIndividual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadOnly)
    FPalMapObjectCharacterTeamMissionIndividual Info;
    
    PAL_API FPalUIMapObjectCharacterTeamMissionIndividual();
};

