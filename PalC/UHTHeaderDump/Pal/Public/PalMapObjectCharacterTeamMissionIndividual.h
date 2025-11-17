#pragma once
#include "CoreMinimal.h"
#include "EPalTribeID.h"
#include "PalMapObjectCharacterTeamMissionIndividual.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectCharacterTeamMissionIndividual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    EPalTribeID TribeId;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FString NickName;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    int32 Strength;
    
    PAL_API FPalMapObjectCharacterTeamMissionIndividual();
};

