#pragma once
#include "CoreMinimal.h"
#include "ESlateCheckBoxType.h"
#include "Margin.h"
#include "SlateBrush.h"
#include "SlateColor.h"
#include "SlateSound.h"
#include "SlateWidgetStyle.h"
#include "CheckBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FCheckBoxStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESlateCheckBoxType> CheckBoxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UncheckedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UncheckedHoveredImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UncheckedPressedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CheckedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CheckedHoveredImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CheckedPressedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UndeterminedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UndeterminedHoveredImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UndeterminedPressedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundHoveredImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundPressedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor ForegroundColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor HoveredForeground;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor PressedForeground;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor CheckedForeground;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor CheckedHoveredForeground;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor CheckedPressedForeground;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor UndeterminedForeground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor BorderBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound CheckedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound UncheckedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound HoveredSlateSound;
    
    FCheckBoxStyle();
};

