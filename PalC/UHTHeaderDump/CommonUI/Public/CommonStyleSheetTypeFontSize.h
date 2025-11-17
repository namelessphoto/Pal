#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeFontSize.generated.h"

UCLASS(EditInlineNew)
class UCommonStyleSheetTypeFontSize : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 Size;
    
    UCommonStyleSheetTypeFontSize();

};

