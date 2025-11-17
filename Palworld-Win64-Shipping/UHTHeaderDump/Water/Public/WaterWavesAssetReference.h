#pragma once
#include "CoreMinimal.h"
#include "WaterWavesBase.h"
#include "WaterWavesAssetReference.generated.h"

class UWaterWavesAsset;

UCLASS(EditInlineNew)
class WATER_API UWaterWavesAssetReference : public UWaterWavesBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UWaterWavesAsset* WaterWavesAsset;
    
public:
    UWaterWavesAssetReference();

};

