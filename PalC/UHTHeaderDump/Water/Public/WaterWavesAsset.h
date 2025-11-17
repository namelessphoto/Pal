#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WaterWavesAsset.generated.h"

class UWaterWaves;

UCLASS()
class WATER_API UWaterWavesAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced)
    UWaterWaves* WaterWaves;
    
public:
    UWaterWavesAsset();

};

