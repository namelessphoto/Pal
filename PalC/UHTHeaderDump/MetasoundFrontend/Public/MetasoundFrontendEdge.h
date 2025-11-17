#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetasoundFrontendEdge.generated.h"

USTRUCT()
struct FMetasoundFrontendEdge {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid FromNodeID;
    
    UPROPERTY()
    FGuid FromVertexID;
    
    UPROPERTY()
    FGuid ToNodeID;
    
    UPROPERTY()
    FGuid ToVertexID;
    
    METASOUNDFRONTEND_API FMetasoundFrontendEdge();
};

