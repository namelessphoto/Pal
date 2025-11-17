#pragma once
#include "CoreMinimal.h"
#include "PalCharacterStoredParameterInfoSaveData.h"
#include "PalCharacterParameterStorageSaveData.generated.h"

USTRUCT()
struct FPalCharacterParameterStorageSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalCharacterStoredParameterInfoSaveData> StoredParameterInfoSaveData;
    
    PAL_API FPalCharacterParameterStorageSaveData();
};

