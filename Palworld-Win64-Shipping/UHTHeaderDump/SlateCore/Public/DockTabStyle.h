#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ButtonStyle.h"
#include "Margin.h"
#include "SlateBrush.h"
#include "SlateColor.h"
#include "SlateWidgetStyle.h"
#include "TextBlockStyle.h"
#include "DockTabStyle.generated.h"

USTRUCT()
struct SLATECORE_API FDockTabStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FButtonStyle CloseButtonStyle;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush NormalBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ColorOverlayTabBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ColorOverlayIconBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ForegroundBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush HoveredBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ContentAreaBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush TabWellBrush;
    
    UPROPERTY(EditAnywhere)
    FTextBlockStyle TabTextStyle;
    
    UPROPERTY(EditAnywhere)
    FMargin TabPadding;
    
    UPROPERTY(EditAnywhere)
    FVector2D IconSize;
    
    UPROPERTY(EditAnywhere)
    float OverlapWidth;
    
    UPROPERTY(EditAnywhere)
    FSlateColor FlashColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FSlateColor NormalForegroundColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FSlateColor HoveredForegroundColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FSlateColor ActiveForegroundColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FSlateColor ForegroundForegroundColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float IconBorderPadding;
    
    FDockTabStyle();
};

