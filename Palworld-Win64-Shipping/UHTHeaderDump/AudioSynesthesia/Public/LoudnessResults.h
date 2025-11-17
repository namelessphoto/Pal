#pragma once
#include "CoreMinimal.h"
#include "LoudnessResults.generated.h"

USTRUCT(BlueprintType)
struct AUDIOSYNESTHESIA_API FLoudnessResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Loudness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NormalizedLoudness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PerceptualEnergy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeSeconds;
    
    FLoudnessResults();
};

