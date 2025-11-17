#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeOpacity.generated.h"

UCLASS(EditInlineNew)
class UCommonStyleSheetTypeOpacity : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Opacity;
    
    UCommonStyleSheetTypeOpacity();

};

