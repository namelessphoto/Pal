#pragma once
#include "CoreMinimal.h"
#include "EPalBuildObjectTypeB.h"
#include "PalBuildObjectData.h"
#include "PalBuildObjectDataSetTypeB.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectDataSetTypeB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    EPalBuildObjectTypeB TypeB;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FPalBuildObjectData> DataArray;
    
    PAL_API FPalBuildObjectDataSetTypeB();
};

