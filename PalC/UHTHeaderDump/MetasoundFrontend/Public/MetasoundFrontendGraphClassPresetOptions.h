#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendGraphClassPresetOptions.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendGraphClassPresetOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsPreset;
    
    UPROPERTY()
    TSet<FName> InputsInheritingDefault;
    
    FMetasoundFrontendGraphClassPresetOptions();
};

