#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundWaveProcedural -FallbackName=SoundWaveProcedural
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendDocument -FallbackName=MetasoundFrontendDocument
#include "EMetasoundSourceAudioFormat.h"
#include "MetaSoundSource.generated.h"

class UObject;

UCLASS(EditInlineNew)
class METASOUNDENGINE_API UMetaSoundSource : public USoundWaveProcedural {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMetasoundFrontendDocument RootMetaSoundDocument;
    
    UPROPERTY()
    TSet<FString> ReferencedAssetClassKeys;
    
    UPROPERTY()
    TSet<UObject*> ReferencedAssetClassObjects;
    
    UPROPERTY()
    TSet<FSoftObjectPath> ReferenceAssetClassCache;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMetasoundSourceAudioFormat OutputFormat;
    
    UPROPERTY(AssetRegistrySearchable)
    FGuid AssetClassID;
    
    UMetaSoundSource();

};

