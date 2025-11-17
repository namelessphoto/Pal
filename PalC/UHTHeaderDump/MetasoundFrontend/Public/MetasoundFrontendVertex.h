#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetasoundFrontendVertex.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendVertex {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(VisibleAnywhere)
    FName TypeName;
    
    UPROPERTY()
    FGuid VertexID;
    
    FMetasoundFrontendVertex();
};

