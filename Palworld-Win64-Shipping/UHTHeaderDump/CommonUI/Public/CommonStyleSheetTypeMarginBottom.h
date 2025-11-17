#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeMarginBottom.generated.h"

UCLASS(EditInlineNew)
class UCommonStyleSheetTypeMarginBottom : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Bottom;
    
    UCommonStyleSheetTypeMarginBottom();

};

