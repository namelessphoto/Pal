#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.h"
#include "FocalLengthFocusPoint.h"
#include "FocalLengthTable.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FFocalLengthTable : public FBaseLensTable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FFocalLengthFocusPoint> FocusPoints;
    
    FFocalLengthTable();
};

