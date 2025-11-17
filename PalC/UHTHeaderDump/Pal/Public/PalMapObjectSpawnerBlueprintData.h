#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalMapObjectSpawnerBlueprintData.generated.h"

class APalMapObjectSpawnerBase;

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnerBlueprintData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BlueprintClassName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<APalMapObjectSpawnerBase> BlueprintClassSoft;
    
    PAL_API FPalMapObjectSpawnerBlueprintData();
};

