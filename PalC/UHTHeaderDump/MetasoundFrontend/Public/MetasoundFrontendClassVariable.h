#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassVertex.h"
#include "MetasoundFrontendLiteral.h"
#include "MetasoundFrontendClassVariable.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMetasoundFrontendLiteral DefaultLiteral;
    
    FMetasoundFrontendClassVariable();
};

