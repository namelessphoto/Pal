#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassVertex.h"
#include "MetasoundFrontendLiteral.h"
#include "MetasoundFrontendClassInput.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMetasoundFrontendLiteral DefaultLiteral;
    
    FMetasoundFrontendClassInput();
};

