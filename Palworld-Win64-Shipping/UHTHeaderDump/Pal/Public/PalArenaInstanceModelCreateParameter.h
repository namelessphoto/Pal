#pragma once
#include "CoreMinimal.h"
#include "PalArenaInstanceModelCreateParameter.generated.h"

class UDataLayerAsset;

USTRUCT()
struct FPalArenaInstanceModelCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDataLayerAsset* ReservedDataLayerAsset;
    
    PAL_API FPalArenaInstanceModelCreateParameter();
};

