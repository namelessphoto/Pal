#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySource.h"
#include "DataRegistrySource_DataTableRules.h"
#include "DataRegistrySource_CurveTable.generated.h"

class UCurveTable;

UCLASS(CollapseCategories, EditInlineNew)
class DATAREGISTRY_API UDataRegistrySource_CurveTable : public UDataRegistrySource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UCurveTable> SourceTable;
    
    UPROPERTY(EditAnywhere)
    FDataRegistrySource_DataTableRules TableRules;
    
protected:
    UPROPERTY(Transient)
    UCurveTable* CachedTable;
    
    UPROPERTY()
    UCurveTable* PreloadTable;
    
public:
    UDataRegistrySource_CurveTable();

};

