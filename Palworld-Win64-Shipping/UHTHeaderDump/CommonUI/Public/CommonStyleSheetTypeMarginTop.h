#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeMarginTop.generated.h"

UCLASS(EditInlineNew)
class UCommonStyleSheetTypeMarginTop : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Top;
    
    UCommonStyleSheetTypeMarginTop();

};

