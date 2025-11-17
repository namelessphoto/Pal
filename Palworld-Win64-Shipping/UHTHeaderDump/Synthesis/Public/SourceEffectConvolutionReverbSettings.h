#pragma once
#include "CoreMinimal.h"
#include "SourceEffectConvolutionReverbSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectConvolutionReverbSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    float NormalizationVolumeDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetVolumeDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DryVolumeDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBypass;
    
    FSourceEffectConvolutionReverbSettings();
};

