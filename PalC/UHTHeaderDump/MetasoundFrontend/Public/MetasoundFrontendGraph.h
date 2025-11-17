#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendEdge.h"
#include "MetasoundFrontendNode.h"
#include "MetasoundFrontendVariable.h"
#include "MetasoundFrontendGraph.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendGraph {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMetasoundFrontendNode> Nodes;
    
    UPROPERTY()
    TArray<FMetasoundFrontendEdge> Edges;
    
    UPROPERTY()
    TArray<FMetasoundFrontendVariable> Variables;
    
    FMetasoundFrontendGraph();
};

