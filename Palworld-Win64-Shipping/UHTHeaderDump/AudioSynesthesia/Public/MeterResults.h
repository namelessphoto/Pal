#pragma once
#include "CoreMinimal.h"
#include "MeterResults.generated.h"

USTRUCT(BlueprintType)
struct AUDIOSYNESTHESIA_API FMeterResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeterValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PeakValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumSamplesClipping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClippingValue;
    
    FMeterResults();
};

