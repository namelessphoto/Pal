#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendVertex.h"
#include "MetasoundFrontendNodeInterface.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendNodeInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMetasoundFrontendVertex> Inputs;
    
    UPROPERTY()
    TArray<FMetasoundFrontendVertex> Outputs;
    
    UPROPERTY()
    TArray<FMetasoundFrontendVertex> Environment;
    
    FMetasoundFrontendNodeInterface();
};

