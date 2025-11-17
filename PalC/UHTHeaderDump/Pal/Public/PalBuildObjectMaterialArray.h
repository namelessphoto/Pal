#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectMaterialArray.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FPalBuildObjectMaterialArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UMaterialInterface*> Materials;
    
    PAL_API FPalBuildObjectMaterialArray();
};

