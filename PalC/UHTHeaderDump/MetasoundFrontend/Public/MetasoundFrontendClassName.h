#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassName.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendClassName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Namespace;
    
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FName Variant;
    
    FMetasoundFrontendClassName();
};

