#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectMotionFilterModDestination.h"
#include "ESourceEffectMotionFilterTopology.h"
#include "SourceEffectIndividualFilterSettings.h"
#include "SourceEffectMotionFilterModulationSettings.h"
#include "SourceEffectMotionFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectMotionFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESourceEffectMotionFilterTopology MotionFilterTopology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MotionFilterMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSourceEffectIndividualFilterSettings FilterASettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSourceEffectIndividualFilterSettings FilterBSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESourceEffectMotionFilterModDestination, FSourceEffectMotionFilterModulationSettings> ModulationMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DryVolumeDb;
    
    FSourceEffectMotionFilterSettings();
};

