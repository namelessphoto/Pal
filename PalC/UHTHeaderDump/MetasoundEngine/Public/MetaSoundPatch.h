#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendDocument -FallbackName=MetasoundFrontendDocument
#include "MetaSoundPatch.generated.h"

UCLASS()
class METASOUNDENGINE_API UMetaSoundPatch : public UObject {
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
    UPROPERTY(AssetRegistrySearchable)
    FGuid AssetClassID;
    
    UMetaSoundPatch();

};

