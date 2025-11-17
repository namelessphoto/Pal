#pragma once
#include "CoreMinimal.h"
#include "PalTechnologyDataSet.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FPalTechnologyDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* recipeUnlockDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* technologyNameTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* technologyDescTable;
    
    PAL_API FPalTechnologyDataSet();
};

