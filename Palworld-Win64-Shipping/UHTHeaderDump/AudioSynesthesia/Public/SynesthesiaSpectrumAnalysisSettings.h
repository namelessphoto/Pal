#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAudioSpectrumType -FallbackName=EAudioSpectrumType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFFTSize -FallbackName=EFFTSize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFFTWindowType -FallbackName=EFFTWindowType
#include "AudioSynesthesiaSettings.h"
#include "SynesthesiaSpectrumAnalysisSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class AUDIOSYNESTHESIA_API USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnalysisPeriod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFFTSize FFTSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAudioSpectrumType SpectrumType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFFTWindowType WindowType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDownmixToMono;
    
    USynesthesiaSpectrumAnalysisSettings();

};

