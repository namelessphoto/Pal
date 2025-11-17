#pragma once
#include "CoreMinimal.h"
#include "PalCharacterSlotId.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalPlayerDataPalStorageSlotSaveData.generated.h"

USTRUCT()
struct FPalPlayerDataPalStorageSlotSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalInstanceID IndividualId;
    
    UPROPERTY()
    FPalIndividualCharacterSaveParameter CharacterSaveParameter;
    
    UPROPERTY()
    FPalCharacterSlotId SlotId;
    
    PAL_API FPalPlayerDataPalStorageSlotSaveData();
};

