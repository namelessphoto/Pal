#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetManagerSearchRules -FallbackName=AssetManagerSearchRules
#include "DataRegistrySource.h"
#include "EMetaDataRegistrySourceAssetUsage.h"
#include "MetaDataRegistrySource.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class DATAREGISTRY_API UMetaDataRegistrySource : public UDataRegistrySource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMetaDataRegistrySourceAssetUsage AssetUsage;
    
    UPROPERTY(EditAnywhere)
    FAssetManagerSearchRules SearchRules;
    
protected:
    UPROPERTY(Instanced, Transient)
    TMap<FName, UDataRegistrySource*> RuntimeChildren;
    
public:
    UMetaDataRegistrySource();

};

