#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlock -FallbackName=RichTextBlock
#include "ERichTextInlineIconDisplayMode.h"
#include "Templates/SubclassOf.h"
#include "CommonRichTextBlock.generated.h"

class UCommonTextScrollStyle;
class UCommonTextStyle;

UCLASS()
class COMMONUI_API UCommonRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ERichTextInlineIconDisplayMode InlineIconDisplayMode;
    
    UPROPERTY(EditAnywhere)
    bool bTintInlineIcon;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCommonTextStyle> DefaultTextStyleOverrideClass;
    
    UPROPERTY(EditAnywhere)
    float MobileTextBlockScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextScrollStyle> ScrollStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScrollingEnabled;
    
    UPROPERTY()
    bool bDisplayAllCaps;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCollapseWithEmptyText;
    
public:
    UCommonRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetScrollingEnabled(bool bInIsScrollingEnabled);
    
};

