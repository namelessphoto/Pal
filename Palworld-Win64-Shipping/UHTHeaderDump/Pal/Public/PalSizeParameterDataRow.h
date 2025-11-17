#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalSizeType.h"
#include "PalSizeParameterDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalSizeParameterDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalSizeType Size;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EffectScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float JumpEffectOffsetZ;
    
    PAL_API FPalSizeParameterDataRow();
};

