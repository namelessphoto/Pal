#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextWrappingPolicy -FallbackName=ETextWrappingPolicy
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "ShapedTextOptions.h"
#include "Widget.h"
#include "TextLayoutWidget.generated.h"

UCLASS(Abstract)
class UMG_API UTextLayoutWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FShapedTextOptions ShapedTextOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETextJustify> Justification;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ETextWrappingPolicy WrappingPolicy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 AutoWrapText: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WrapTextAt;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FMargin Margin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float LineHeightPercentage;
    
public:
    UTextLayoutWidget();

    UFUNCTION(BlueprintCallable)
    void SetJustification(TEnumAsByte<ETextJustify> InJustification);
    
};

