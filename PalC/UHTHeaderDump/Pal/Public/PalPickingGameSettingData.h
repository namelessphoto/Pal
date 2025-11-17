#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalPickingGameSettingData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FPalPickingGameSettingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DifficultyLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float UnlockableRangeSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* LimitKeyPressureCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* KeyTurningCurveOutsideUnlockableRange;
    
    PAL_API FPalPickingGameSettingData();
};

