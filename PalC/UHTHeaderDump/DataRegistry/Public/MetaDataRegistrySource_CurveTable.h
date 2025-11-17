#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySource_DataTableRules.h"
#include "MetaDataRegistrySource.h"
#include "Templates/SubclassOf.h"
#include "MetaDataRegistrySource_CurveTable.generated.h"

class UDataRegistrySource_CurveTable;

UCLASS(CollapseCategories, EditInlineNew)
class DATAREGISTRY_API UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDataRegistrySource_CurveTable> CreatedSource;
    
    UPROPERTY(EditAnywhere)
    FDataRegistrySource_DataTableRules TableRules;
    
    UMetaDataRegistrySource_CurveTable();

};

