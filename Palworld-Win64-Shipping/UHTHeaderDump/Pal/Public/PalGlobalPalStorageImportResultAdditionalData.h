#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalGlobalPalStorageImportResultAdditionalData.generated.h"

USTRUCT(BlueprintType)
struct FPalGlobalPalStorageImportResultAdditionalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 OverwriteTargetSlotIndex;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ImportedSlotIndex;
    
    UPROPERTY(BlueprintReadWrite)
    FPalIndividualCharacterSaveParameter OverwriteSaveParameter;
    
    PAL_API FPalGlobalPalStorageImportResultAdditionalData();
};

