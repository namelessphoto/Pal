#pragma once
#include "CoreMinimal.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalPlayerAccountInitData.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerAccountInitData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CharacterName;
    
    UPROPERTY()
    FPalPlayerDataCharacterMakeInfo CharacterMakeData;
    
    PAL_API FPalPlayerAccountInitData();
};

