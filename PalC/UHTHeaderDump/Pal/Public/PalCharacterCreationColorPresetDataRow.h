#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalCharacterCreationColorPresetDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterCreationColorPresetDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FLinearColor> Colors;
    
    PAL_API FPalCharacterCreationColorPresetDataRow();
};

