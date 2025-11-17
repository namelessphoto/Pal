#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalCharacterCreationPresetDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalCharacterCreationPresetDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalPlayerDataCharacterMakeInfo MakeInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    PAL_API FPalCharacterCreationPresetDataRow();
};

