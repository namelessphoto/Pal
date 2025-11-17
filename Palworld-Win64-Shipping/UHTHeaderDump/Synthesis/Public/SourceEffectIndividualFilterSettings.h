#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectMotionFilterCircuit.h"
#include "ESourceEffectMotionFilterType.h"
#include "SourceEffectIndividualFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectIndividualFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESourceEffectMotionFilterCircuit FilterCircuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESourceEffectMotionFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CutoffFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilterQ;
    
    FSourceEffectIndividualFilterSettings();
};

