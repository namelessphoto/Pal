#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioAnalyzer -ObjectName=AudioAnalyzer -FallbackName=AudioAnalyzer
#include "OnLatestOverallMeterResultsDelegate.h"
#include "OnLatestPerChannelMeterResultsDelegate.h"
#include "OnOverallMeterResultsDelegate.h"
#include "OnPerChannelMeterResultsDelegate.h"
#include "MeterAnalyzer.generated.h"

class UMeterSettings;

UCLASS(EditInlineNew)
class AUDIOSYNESTHESIA_API UMeterAnalyzer : public UAudioAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMeterSettings* Settings;
    
    UPROPERTY(BlueprintAssignable)
    FOnOverallMeterResults OnOverallMeterResults;
    
    UPROPERTY(BlueprintAssignable)
    FOnPerChannelMeterResults OnPerChannelMeterResults;
    
    UPROPERTY(BlueprintAssignable)
    FOnLatestOverallMeterResults OnLatestOverallMeterResults;
    
    UPROPERTY(BlueprintAssignable)
    FOnLatestPerChannelMeterResults OnLatestPerChannelMeterResults;
    
    UMeterAnalyzer();

};

