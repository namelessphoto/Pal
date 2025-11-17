#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeFontTypeface.generated.h"

UCLASS(EditInlineNew)
class UCommonStyleSheetTypeFontTypeface : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FSlateFontInfo Typeface;
    
    UCommonStyleSheetTypeFontTypeface();

};

