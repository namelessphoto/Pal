#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectFishPondCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIMapObjectFishPondCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDisplay;
    
    PAL_API FPalUIMapObjectFishPondCharacterInfo();
};

