#pragma once
#include "CoreMinimal.h"
#include "PalUIBaseCampWorkFixedAssignInfo.generated.h"

class UPalBaseCampGroupedWorkBase;
class UPalWorkBase;

USTRUCT(BlueprintType)
struct FPalUIBaseCampWorkFixedAssignInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPalWorkBase* TargetWork;
    
    UPROPERTY()
    UPalBaseCampGroupedWorkBase* TargetGroupedWork;
    
    PAL_API FPalUIBaseCampWorkFixedAssignInfo();
};

