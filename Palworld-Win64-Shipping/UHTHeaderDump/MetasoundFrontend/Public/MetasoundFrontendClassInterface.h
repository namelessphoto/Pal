#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetasoundFrontendClassEnvironmentVariable.h"
#include "MetasoundFrontendClassInput.h"
#include "MetasoundFrontendClassOutput.h"
#include "MetasoundFrontendClassInterface.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendClassInterface {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FMetasoundFrontendClassInput> Inputs;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FMetasoundFrontendClassOutput> Outputs;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FMetasoundFrontendClassEnvironmentVariable> Environment;
    
private:
    UPROPERTY()
    FGuid ChangeID;
    
public:
    FMetasoundFrontendClassInterface();
};

