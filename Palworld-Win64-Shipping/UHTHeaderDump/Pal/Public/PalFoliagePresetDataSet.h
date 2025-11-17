#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EPalFoliagePresetType.h"
#include "PalFoliagePresetData.h"
#include "PalFoliagePresetDataSet.generated.h"

UCLASS()
class PAL_API UPalFoliagePresetDataSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalFoliagePresetType, FPalFoliagePresetData> Presets;
    
    UPalFoliagePresetDataSet();

};

