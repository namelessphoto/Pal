#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampPassiveEffectWorkHardInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampPassiveEffectWorkHardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorkSpeedRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MoveSpeedRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AffectSanityRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DecreaseFullStomachRate;
    
    PAL_API FPalBaseCampPassiveEffectWorkHardInfo();
};

