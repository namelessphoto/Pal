#pragma once
#include "CoreMinimal.h"
#include "ButtonStyle.h"
#include "Margin.h"
#include "SlateBrush.h"
#include "SlateColor.h"
#include "SlateWidgetStyle.h"
#include "TextBlockStyle.h"
#include "WindowStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FWindowStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle MinimizeButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle MaximizeButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle RestoreButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle CloseButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle TitleTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ActiveTitleBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush InactiveTitleBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush FlashTitleBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush OutlineBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor OutlineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BorderBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor BorderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ChildBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WindowCornerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin BorderPadding;
    
    FWindowStyle();
};

