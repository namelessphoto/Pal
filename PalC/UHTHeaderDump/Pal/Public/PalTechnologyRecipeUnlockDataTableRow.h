#pragma once
#include "CoreMinimal.h"
#include "PalTechnologyDataTableRowBase.h"
#include "PalTechnologyRecipeUnlockDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalTechnologyRecipeUnlockDataTableRow : public FPalTechnologyDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> UnlockBuildObjects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> UnlockItemRecipes;
    
    PAL_API FPalTechnologyRecipeUnlockDataTableRow();
};

