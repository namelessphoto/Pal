#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeMarginRight.generated.h"

UCLASS(EditInlineNew)
class UCommonStyleSheetTypeMarginRight : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Right;
    
    UCommonStyleSheetTypeMarginRight();

};

