#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.h"
#include "DistortionFocusPoint.h"
#include "DistortionTable.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FDistortionTable : public FBaseLensTable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FDistortionFocusPoint> FocusPoints;
    
    FDistortionTable();
};

