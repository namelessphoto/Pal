#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClass.h"
#include "MetasoundFrontendGraph.h"
#include "MetasoundFrontendGraphClassPresetOptions.h"
#include "MetasoundFrontendGraphClass.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendGraphClass : public FMetasoundFrontendClass {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMetasoundFrontendGraph Graph;
    
    UPROPERTY()
    FMetasoundFrontendGraphClassPresetOptions PresetOptions;
    
    FMetasoundFrontendGraphClass();
};

