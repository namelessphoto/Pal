#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassInterface.h"
#include "MetasoundFrontendVersion.h"
#include "MetasoundFrontendInterface.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMetasoundFrontendVersion Version;
    
    FMetasoundFrontendInterface();
};

