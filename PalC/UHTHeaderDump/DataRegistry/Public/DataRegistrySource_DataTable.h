#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySource.h"
#include "DataRegistrySource_DataTableRules.h"
#include "DataRegistrySource_DataTable.generated.h"

class UDataTable;

UCLASS(CollapseCategories, EditInlineNew)
class DATAREGISTRY_API UDataRegistrySource_DataTable : public UDataRegistrySource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UDataTable> SourceTable;
    
    UPROPERTY(EditAnywhere)
    FDataRegistrySource_DataTableRules TableRules;
    
protected:
    UPROPERTY(Transient)
    UDataTable* CachedTable;
    
    UPROPERTY()
    UDataTable* PreloadTable;
    
public:
    UDataRegistrySource_DataTable();

};

