#pragma once
#include "CoreMinimal.h"
#include "SynesthesiaSpectrumResults.generated.h"

USTRUCT(BlueprintType)
struct AUDIOSYNESTHESIA_API FSynesthesiaSpectrumResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> SpectrumValues;
    
    FSynesthesiaSpectrumResults();
};

