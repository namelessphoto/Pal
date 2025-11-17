#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioAnalyzer -ObjectName=AudioAnalyzer -FallbackName=AudioAnalyzer
#include "OnLatestSpectrumResultsDelegate.h"
#include "OnSpectrumResultsDelegate.h"
#include "SynesthesiaSpectrumAnalyzer.generated.h"

class USynesthesiaSpectrumAnalysisSettings;

UCLASS(EditInlineNew)
class AUDIOSYNESTHESIA_API USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USynesthesiaSpectrumAnalysisSettings* Settings;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpectrumResults OnSpectrumResults;
    
    UPROPERTY(BlueprintAssignable)
    FOnLatestSpectrumResults OnLatestSpectrumResults;
    
    USynesthesiaSpectrumAnalyzer();

    UFUNCTION(BlueprintPure)
    int32 GetNumCenterFrequencies() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCenterFrequencies(const float InSampleRate, TArray<float>& OutCenterFrequencies);
    
};

