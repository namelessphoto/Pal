#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendVersionNumber.h"
#include "MetasoundFrontendVersion.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendVersion {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(VisibleAnywhere)
    FMetasoundFrontendVersionNumber Number;
    
    FMetasoundFrontendVersion();
};

