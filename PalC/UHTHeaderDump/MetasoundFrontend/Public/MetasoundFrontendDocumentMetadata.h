#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendVersion.h"
#include "MetasoundFrontendDocumentMetadata.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendDocumentMetadata {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMetasoundFrontendVersion Version;
    
    FMetasoundFrontendDocumentMetadata();
};

