#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClass.h"
#include "MetasoundFrontendDocumentMetadata.h"
#include "MetasoundFrontendGraphClass.h"
#include "MetasoundFrontendVersion.h"
#include "MetasoundFrontendDocument.generated.h"

USTRUCT(BlueprintType)
struct METASOUNDFRONTEND_API FMetasoundFrontendDocument {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMetasoundFrontendDocumentMetadata MetaData;
    
    UPROPERTY(VisibleAnywhere)
    TSet<FMetasoundFrontendVersion> Interfaces;
    
    UPROPERTY(EditAnywhere)
    FMetasoundFrontendGraphClass RootGraph;
    
    UPROPERTY()
    TArray<FMetasoundFrontendGraphClass> Subgraphs;
    
    UPROPERTY()
    TArray<FMetasoundFrontendClass> Dependencies;
    
private:
    UPROPERTY()
    FMetasoundFrontendVersion ArchetypeVersion;
    
    UPROPERTY()
    TArray<FMetasoundFrontendVersion> InterfaceVersions;
    
public:
    FMetasoundFrontendDocument();
};

