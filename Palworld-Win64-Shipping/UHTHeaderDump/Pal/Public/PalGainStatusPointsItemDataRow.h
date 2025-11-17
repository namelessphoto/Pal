#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalGainStatusPointsItemDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalGainStatusPointsItemDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxHP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxSP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Power;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WorkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxInventoryWeight;
    
    PAL_API FPalGainStatusPointsItemDataRow();
};

