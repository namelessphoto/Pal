#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeMarginLeft.generated.h"

UCLASS(EditInlineNew)
class UCommonStyleSheetTypeMarginLeft : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Left;
    
    UCommonStyleSheetTypeMarginLeft();

};

