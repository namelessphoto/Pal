#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySource_DataTableRules.generated.h"

USTRUCT(BlueprintType)
struct DATAREGISTRY_API FDataRegistrySource_DataTableRules {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPrecacheTable;
    
    UPROPERTY(EditAnywhere)
    float CachedTableKeepSeconds;
    
    FDataRegistrySource_DataTableRules();
};

