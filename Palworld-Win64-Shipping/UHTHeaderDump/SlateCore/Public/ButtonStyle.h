#pragma once
#include "CoreMinimal.h"
#include "Margin.h"
#include "SlateBrush.h"
#include "SlateColor.h"
#include "SlateSound.h"
#include "SlateWidgetStyle.h"
#include "ButtonStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FButtonStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Hovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Disabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor NormalForeground;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor HoveredForeground;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor PressedForeground;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor DisabledForeground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin NormalPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin PressedPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound PressedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound HoveredSlateSound;
    
    FButtonStyle();
};

