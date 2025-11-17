#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySource_DataTableRules.h"
#include "MetaDataRegistrySource.h"
#include "Templates/SubclassOf.h"
#include "MetaDataRegistrySource_DataTable.generated.h"

class UDataRegistrySource_DataTable;

UCLASS(CollapseCategories, EditInlineNew)
class DATAREGISTRY_API UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDataRegistrySource_DataTable> CreatedSource;
    
    UPROPERTY(EditAnywhere)
    FDataRegistrySource_DataTableRules TableRules;
    
    UMetaDataRegistrySource_DataTable();

};

