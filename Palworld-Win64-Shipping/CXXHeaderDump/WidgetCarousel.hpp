#ifndef UE4SS_SDK_WidgetCarousel_HPP
#define UE4SS_SDK_WidgetCarousel_HPP

struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
    FSlateBrush HighlightBrush;
    FButtonStyle LeftButtonStyle;
    FButtonStyle CenterButtonStyle;
    FButtonStyle RightButtonStyle;

};

struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
    FButtonStyle InnerButtonStyle;
    FSlateBrush NavigationButtonLeftImage;
    FSlateBrush NavigationButtonRightImage;

};

#endif
