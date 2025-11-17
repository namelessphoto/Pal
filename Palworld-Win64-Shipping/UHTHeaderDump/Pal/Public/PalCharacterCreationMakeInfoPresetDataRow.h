#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalCharacterCreationMakeInfoPresetDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterCreationMakeInfoPresetDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FPalPlayerDataCharacterMakeInfo PresetMakeInfo;
    
    PAL_API FPalCharacterCreationMakeInfoPresetDataRow();
};

