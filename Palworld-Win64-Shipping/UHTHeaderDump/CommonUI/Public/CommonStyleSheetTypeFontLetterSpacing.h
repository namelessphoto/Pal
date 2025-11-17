#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeFontLetterSpacing.generated.h"

UCLASS(EditInlineNew)
class UCommonStyleSheetTypeFontLetterSpacing : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 LetterSpacing;
    
    UCommonStyleSheetTypeFontLetterSpacing();

};

