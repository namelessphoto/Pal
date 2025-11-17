#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetasoundFrontendLiteral.h"
#include "MetasoundFrontendVariable.generated.h"

USTRUCT()
struct FMetasoundFrontendVariable {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY()
    FName TypeName;
    
    UPROPERTY()
    FMetasoundFrontendLiteral Literal;
    
    UPROPERTY()
    FGuid ID;
    
    UPROPERTY()
    FGuid VariableNodeID;
    
    UPROPERTY()
    FGuid MutatorNodeID;
    
    UPROPERTY()
    TArray<FGuid> AccessorNodeIDs;
    
    UPROPERTY()
    TArray<FGuid> DeferredAccessorNodeIDs;
    
    METASOUNDFRONTEND_API FMetasoundFrontendVariable();
};

