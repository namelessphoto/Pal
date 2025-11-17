#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetasoundFrontendNodeInterface.h"
#include "MetasoundFrontendVertexLiteral.h"
#include "MetasoundFrontendNode.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid ID;
    
public:
    UPROPERTY()
    FGuid ClassID;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FMetasoundFrontendNodeInterface Interface;
    
    UPROPERTY()
    TArray<FMetasoundFrontendVertexLiteral> InputLiterals;
    
    FMetasoundFrontendNode();
};

