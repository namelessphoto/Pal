#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalEggSpawnerBlueprintData.generated.h"

class APalMapObjectSpawnerPalEgg;

USTRUCT(BlueprintType)
struct FPalEggSpawnerBlueprintData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BlueprintClassName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<APalMapObjectSpawnerPalEgg> BlueprintClassSoft;
    
    PAL_API FPalEggSpawnerBlueprintData();
};

