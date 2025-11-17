#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DataRegistrySource.generated.h"

class UDataRegistrySource;

UCLASS(Abstract, CollapseCategories, DefaultToInstanced, EditInlineNew, Within=DataRegistry)
class DATAREGISTRY_API UDataRegistrySource : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UDataRegistrySource* ParentSource;
    
public:
    UDataRegistrySource();

};

