#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MetasoundFrontendLiteral.h"
#include "MetasoundFrontendEdgeStyleLiteralColorPair.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendEdgeStyleLiteralColorPair {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMetasoundFrontendLiteral Value;
    
    UPROPERTY()
    FLinearColor Color;
    
    FMetasoundFrontendEdgeStyleLiteralColorPair();
};

