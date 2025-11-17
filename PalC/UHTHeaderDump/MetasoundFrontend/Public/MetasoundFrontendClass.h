#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetasoundFrontendClassInterface.h"
#include "MetasoundFrontendClassMetadata.h"
#include "MetasoundFrontendClass.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendClass {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ID;
    
    UPROPERTY(EditAnywhere)
    FMetasoundFrontendClassMetadata MetaData;
    
    UPROPERTY(EditAnywhere)
    FMetasoundFrontendClassInterface Interface;
    
    FMetasoundFrontendClass();
};

