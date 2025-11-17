#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "PalCalcCharacterDamageInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCalcCharacterDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float OtomoRate;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 DefenderLevel;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 DefenderDefence;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalElementType DefenderElementType1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalElementType DefenderElementType2;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float ElementStatusMultiplay;
    
    PAL_API FPalCalcCharacterDamageInfo();
};

