#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalMapObjectTreasureGradeType.h"
#include "PalPickingItemSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalPickingItemSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalMapObjectTreasureGradeType> PickableGradeTypeArray;
    
    PAL_API FPalPickingItemSetting();
};

