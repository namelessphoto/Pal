#pragma once
#include "CoreMinimal.h"
#include "BaseLensTable.h"
#include "ImageCenterFocusPoint.h"
#include "ImageCenterTable.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FImageCenterTable : public FBaseLensTable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FImageCenterFocusPoint> FocusPoints;
    
    FImageCenterTable();
};

