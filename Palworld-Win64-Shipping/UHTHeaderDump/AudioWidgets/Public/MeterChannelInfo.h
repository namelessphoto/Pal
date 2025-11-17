#pragma once
#include "CoreMinimal.h"
#include "MeterChannelInfo.generated.h"

USTRUCT(BlueprintType)
struct FMeterChannelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MeterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PeakValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClippingValue;
    
    AUDIOWIDGETS_API FMeterChannelInfo();
};

