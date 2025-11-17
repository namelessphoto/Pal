#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
#include "AudioTextBoxStyle.h"
#include "AudioRadialSliderStyle.generated.h"

USTRUCT(BlueprintType)
struct AUDIOWIDGETS_API FAudioRadialSliderStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAudioTextBoxStyle TextBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor CenterBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor SliderBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor SliderProgressColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LabelPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultSliderRadius;
    
    FAudioRadialSliderStyle();
};

