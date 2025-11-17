#pragma once
#include "CoreMinimal.h"
#include "AudioAnalyzerAssetBase.h"
#include "AudioAnalyzerNRT.generated.h"

class USoundWave;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class AUDIOANALYZER_API UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundWave* Sound;
    
    UPROPERTY(BlueprintReadOnly)
    float DurationInSeconds;
    
    UAudioAnalyzerNRT();

};

