#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDebugPalCaptureInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDebugPalCaptureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_PalMonsterData PalName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Num;
    
    PAL_API FPalDebugPalCaptureInfo();
};

