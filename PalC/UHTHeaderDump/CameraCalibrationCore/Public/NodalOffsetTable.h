#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.h"
#include "NodalOffsetFocusPoint.h"
#include "NodalOffsetTable.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FNodalOffsetTable : public FBaseLensTable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FNodalOffsetFocusPoint> FocusPoints;
    
    FNodalOffsetTable();
};

