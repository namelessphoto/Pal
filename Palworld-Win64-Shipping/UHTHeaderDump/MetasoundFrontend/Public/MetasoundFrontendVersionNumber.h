#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendVersionNumber.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendVersionNumber {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 Major;
    
    UPROPERTY(VisibleAnywhere)
    int32 Minor;
    
    FMetasoundFrontendVersionNumber();
};

