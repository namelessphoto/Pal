#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalPlayerDamageCameraShakeCategory.h"
#include "PalPlayerDamageCameraShakeData.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerDamageCameraShakeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPlayerDamageCameraShakeCategory Category;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Scale_Min;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Scale_Default;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Scale_Max;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 HPRate_Min;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 HPRate_Default;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 HPRate_Max;
    
    PAL_API FPalPlayerDamageCameraShakeData();
};

