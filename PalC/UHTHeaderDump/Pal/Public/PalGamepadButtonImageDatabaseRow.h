#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "PalGamepadButtonImageDatabaseRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalGamepadButtonImageDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> XboxButtonImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FKey Key;
    
    PAL_API FPalGamepadButtonImageDatabaseRow();
};

