#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalDataLayerRuntimeSetting.h"
#include "PalDataLayerRuntimeSettingsData.generated.h"

UCLASS()
class PAL_API UPalDataLayerRuntimeSettingsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalDataLayerRuntimeSetting> Settings;
    
    UPalDataLayerRuntimeSettingsData();

};

