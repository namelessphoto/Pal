#pragma once
#include "CoreMinimal.h"
#include "PerlinNoiseParams.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FPerlinNoiseParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    double Amplitude;
    
    UPROPERTY(EditAnywhere)
    float Offset;
    
    FPerlinNoiseParams();
};

