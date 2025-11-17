#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDebugItemCreateInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDebugItemCreateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_ItemData itemRowName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 itemNum;
    
    PAL_API FPalDebugItemCreateInfo();
};

