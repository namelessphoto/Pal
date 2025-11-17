#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeLineHeightPercentage.generated.h"

UCLASS(EditInlineNew)
class UCommonStyleSheetTypeLineHeightPercentage : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float LineHeightPercentage;
    
    UCommonStyleSheetTypeLineHeightPercentage();

};

