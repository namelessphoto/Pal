#pragma once
#include "CoreMinimal.h"
#include "SolverRemovalFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct CHAOS_API FSolverRemovalFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FilterEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinVolume;
    
    FSolverRemovalFilterSettings();
};

