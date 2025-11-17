#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.h"
#include "STMapFocusPoint.h"
#include "STMapTable.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FSTMapTable : public FBaseLensTable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSTMapFocusPoint> FocusPoints;
    
    FSTMapTable();
};

