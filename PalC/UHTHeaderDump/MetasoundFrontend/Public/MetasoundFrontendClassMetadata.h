#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EMetasoundFrontendClassType.h"
#include "MetasoundFrontendClassName.h"
#include "MetasoundFrontendVersionNumber.h"
#include "MetasoundFrontendClassMetadata.generated.h"

USTRUCT()
struct METASOUNDFRONTEND_API FMetasoundFrontendClassMetadata {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FMetasoundFrontendClassName ClassName;
    
    UPROPERTY(VisibleAnywhere)
    FMetasoundFrontendVersionNumber Version;
    
    UPROPERTY(VisibleAnywhere)
    EMetasoundFrontendClassType Type;
    
    UPROPERTY(EditAnywhere)
    bool bIsDeprecated;
    
    UPROPERTY()
    bool bAutoUpdateManagesInterface;
    
    UPROPERTY()
    FGuid ChangeID;
    
public:
    FMetasoundFrontendClassMetadata();
};

