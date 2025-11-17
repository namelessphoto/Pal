#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetasoundFrontendLiteral.h"
#include "MetasoundFrontendVertexLiteral.generated.h"

USTRUCT()
struct FMetasoundFrontendVertexLiteral {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FGuid VertexID;
    
    UPROPERTY(EditAnywhere)
    FMetasoundFrontendLiteral Value;
    
    METASOUNDFRONTEND_API FMetasoundFrontendVertexLiteral();
};

