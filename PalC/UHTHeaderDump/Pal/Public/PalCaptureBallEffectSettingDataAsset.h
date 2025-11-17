#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EPalSizeType.h"
#include "PalCaptureBallEffectSettingData.h"
#include "PalCaptureBallEffectSettingDataAsset.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalCaptureBallEffectSettingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalSizeType, FPalCaptureBallEffectSettingData> EffectSettingDataArray;
    
    UPalCaptureBallEffectSettingDataAsset();

    UFUNCTION(BlueprintPure)
    FPalCaptureBallEffectSettingData GetEffectSettingData(const EPalSizeType PalSizeType) const;
    
};

