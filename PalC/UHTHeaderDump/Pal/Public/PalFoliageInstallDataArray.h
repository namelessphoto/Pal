#pragma once
#include "CoreMinimal.h"
#include "PalFoliageInstallData.h"
#include "PalFoliageInstallDataArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliageInstallDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPalFoliageInstallData> InstallDataArray;
    
    PAL_API FPalFoliageInstallDataArray();
};

