#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFishPondCaughtCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectFishPondCaughtCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FName CharacterID;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 CharacterLevel;
    
    PAL_API FPalMapObjectFishPondCaughtCharacterInfo();
};

