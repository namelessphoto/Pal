#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetasoundFrontendEdgeStyleLiteralColorPair.h"
#include "MetasoundFrontendEdgeStyle.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendEdgeStyle {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid NodeID;
    
    UPROPERTY()
    FName OutputName;
    
    UPROPERTY()
    TArray<FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;
    
    FMetasoundFrontendEdgeStyle();
};

