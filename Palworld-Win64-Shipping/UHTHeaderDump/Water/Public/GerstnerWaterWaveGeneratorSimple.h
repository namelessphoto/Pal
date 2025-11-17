#pragma once
#include "CoreMinimal.h"
#include "GerstnerWaterWaveGeneratorBase.h"
#include "GerstnerWaterWaveGeneratorSimple.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumWaves;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Randomness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinWavelength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxWavelength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WavelengthFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AmplitudeFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WindAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirectionAngularSpreadDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmallWaveSteepness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LargeWaveSteepness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SteepnessFalloff;
    
    UGerstnerWaterWaveGeneratorSimple();

};

