#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioAnalyzer -ObjectName=AudioAnalyzer -FallbackName=AudioAnalyzer
#include "OnLatestOverallLoudnessResultsDelegate.h"
#include "OnLatestPerChannelLoudnessResultsDelegate.h"
#include "OnOverallLoudnessResultsDelegate.h"
#include "OnPerChannelLoudnessResultsDelegate.h"
#include "LoudnessAnalyzer.generated.h"

class ULoudnessSettings;

UCLASS(EditInlineNew)
class AUDIOSYNESTHESIA_API ULoudnessAnalyzer : public UAudioAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULoudnessSettings* Settings;
    
    UPROPERTY(BlueprintAssignable)
    FOnOverallLoudnessResults OnOverallLoudnessResults;
    
    UPROPERTY(BlueprintAssignable)
    FOnPerChannelLoudnessResults OnPerChannelLoudnessResults;
    
    UPROPERTY(BlueprintAssignable)
    FOnLatestOverallLoudnessResults OnLatestOverallLoudnessResults;
    
    UPROPERTY(BlueprintAssignable)
    FOnLatestPerChannelLoudnessResults OnLatestPerChannelLoudnessResults;
    
    ULoudnessAnalyzer();

};

