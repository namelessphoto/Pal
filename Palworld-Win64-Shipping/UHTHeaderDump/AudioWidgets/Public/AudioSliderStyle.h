#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SliderStyle -FallbackName=SliderStyle
#include "AudioTextBoxStyle.h"
#include "AudioSliderStyle.generated.h"

USTRUCT(BlueprintType)
struct AUDIOWIDGETS_API FAudioSliderStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSliderStyle SliderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAudioTextBoxStyle TextBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush WidgetBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor SliderBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SliderBackgroundSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LabelPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor SliderBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor SliderThumbColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor WidgetBackgroundColor;
    
    FAudioSliderStyle();
};

