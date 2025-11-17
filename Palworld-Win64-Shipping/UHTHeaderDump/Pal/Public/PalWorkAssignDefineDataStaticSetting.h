#pragma once
#include "CoreMinimal.h"
#include "PalWorkAssignDefineData.h"
#include "PalWorkAssignDefineDataStaticSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkAssignDefineDataStaticSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName RowName;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkAssignDefineData AssignDefineData;
    
    PAL_API FPalWorkAssignDefineDataStaticSetting();
};

