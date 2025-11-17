#pragma once
#include "CoreMinimal.h"
#include "PalDataLayerRuntimeSetting.generated.h"

class UDataLayerAsset;

USTRUCT(BlueprintType)
struct FPalDataLayerRuntimeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataLayerAsset* DataLayerAsset;
    
    UPROPERTY(EditDefaultsOnly)
    bool bRuntimeUnload;
    
    PAL_API FPalDataLayerRuntimeSetting();
};

