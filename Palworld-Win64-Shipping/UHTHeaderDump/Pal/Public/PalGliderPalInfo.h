#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalGliderPalInfo.generated.h"

class APalGliderObject;

USTRUCT(BlueprintType)
struct FPalGliderPalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData PalName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<APalGliderObject>> GliderPalArray;
    
    PAL_API FPalGliderPalInfo();
};

