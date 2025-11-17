#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ButtonStyle -FallbackName=ButtonStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
#include "WidgetCarouselNavigationButtonStyle.generated.h"

USTRUCT()
struct WIDGETCAROUSEL_API FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY()
    FButtonStyle InnerButtonStyle;
    
    UPROPERTY()
    FSlateBrush NavigationButtonLeftImage;
    
    UPROPERTY()
    FSlateBrush NavigationButtonRightImage;
    
    FWidgetCarouselNavigationButtonStyle();
};

