#pragma once
#include "CoreMinimal.h"
#include "PalWorkAssignInfo.generated.h"

class UPalWorkAssign;

USTRUCT(BlueprintType)
struct FPalWorkAssignInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 LocationIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalWorkAssign* WorkAssign;
    
    PAL_API FPalWorkAssignInfo();
};

