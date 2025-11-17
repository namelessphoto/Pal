#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaSettings.h"
#include "EMeterPeakType.h"
#include "MeterSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class AUDIOSYNESTHESIA_API UMeterSettings : public UAudioSynesthesiaSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnalysisPeriod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMeterPeakType PeakMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MeterAttackTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MeterReleaseTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PeakHoldTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClippingThreshold;
    
    UMeterSettings();

};

