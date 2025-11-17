#pragma once
#include "CoreMinimal.h"
#include "GerstnerWave.h"
#include "WaterWaves.h"
#include "GerstnerWaterWaves.generated.h"

class UGerstnerWaterWaveGeneratorBase;

UCLASS(BlueprintType, EditInlineNew, MinimalAPI)
class UGerstnerWaterWaves : public UWaterWaves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FGerstnerWave> GerstnerWaves;
    
    UPROPERTY(BlueprintReadOnly)
    float MaxWaveHeight;
    
public:
    UGerstnerWaterWaves();

};

