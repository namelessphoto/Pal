#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalNoteMasterDataTextureTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct PAL_API FPalNoteMasterDataTextureTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Texture;
    
    FPalNoteMasterDataTextureTableRow();
};

