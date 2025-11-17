#pragma once
#include "CoreMinimal.h"
#include "PalDungeonInstanceModelCreateParameter.generated.h"

class UDataLayerAsset;

USTRUCT()
struct FPalDungeonInstanceModelCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDataLayerAsset* ReservedDataLayerAsset;
    
    PAL_API FPalDungeonInstanceModelCreateParameter();
};

