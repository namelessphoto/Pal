#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EMetasoundFrontendVertexAccessType.h"
#include "MetasoundFrontendVertex.h"
#include "MetasoundFrontendClassVertex.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid NodeID;
    
    UPROPERTY()
    EMetasoundFrontendVertexAccessType AccessType;
    
    FMetasoundFrontendClassVertex();
};

