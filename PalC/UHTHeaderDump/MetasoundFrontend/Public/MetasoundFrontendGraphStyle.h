#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendEdgeStyle.h"
#include "MetasoundFrontendGraphStyle.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendGraphStyle {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsGraphEditable;
    
    UPROPERTY()
    TArray<FMetasoundFrontendEdgeStyle> EdgeStyles;
    
    FMetasoundFrontendGraphStyle();
};

