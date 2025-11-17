#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaSettings.h"
#include "ELoudnessCurveTypeEnum.h"
#include "LoudnessSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class AUDIOSYNESTHESIA_API ULoudnessSettings : public UAudioSynesthesiaSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnalysisPeriod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaximumFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELoudnessCurveTypeEnum CurveType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float NoiseFloorDb;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ExpectedMaxLoudness;
    
    ULoudnessSettings();

};

