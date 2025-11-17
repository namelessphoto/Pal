#pragma once
#include "CoreMinimal.h"
#include "EWaveSpectrumType.h"
#include "GerstnerWaterWaveGeneratorBase.h"
#include "GerstnerWaveOctave.h"
#include "GerstnerWaterWaveGeneratorSpectrum.generated.h"

UCLASS(EditInlineNew, HideDropdown, MinimalAPI)
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWaveSpectrumType SpectrumType;
    
    UPROPERTY(EditAnywhere)
    TArray<FGerstnerWaveOctave> Octaves;
    
    UGerstnerWaterWaveGeneratorSpectrum();

};

