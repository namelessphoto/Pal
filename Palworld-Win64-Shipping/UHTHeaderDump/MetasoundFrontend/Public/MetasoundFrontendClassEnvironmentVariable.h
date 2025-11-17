#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassEnvironmentVariable.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendClassEnvironmentVariable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FName TypeName;
    
    UPROPERTY()
    bool bIsRequired;
    
    FMetasoundFrontendClassEnvironmentVariable();
};

