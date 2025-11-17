#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectMaterialInstanceDynamicArray.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FPalBuildObjectMaterialInstanceDynamicArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> Materials;
    
    PAL_API FPalBuildObjectMaterialInstanceDynamicArray();
};

