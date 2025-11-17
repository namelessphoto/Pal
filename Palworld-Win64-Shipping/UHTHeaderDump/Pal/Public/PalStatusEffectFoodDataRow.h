#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalFoodStatusEffectType.h"
#include "PalStatusEffectFoodDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalStatusEffectFoodDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EffectTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalFoodStatusEffectType EffectType1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EffectValue1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Interaval1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalFoodStatusEffectType EffectType2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EffectValue2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Interaval2;
    
    PAL_API FPalStatusEffectFoodDataRow();
};

