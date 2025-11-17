#pragma once
#include "CoreMinimal.h"
#include "PalGuildLabRequestDebugParameter.generated.h"

USTRUCT()
struct FPalGuildLabRequestDebugParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bNotConsumeMaterials;
    
    PAL_API FPalGuildLabRequestDebugParameter();
};

