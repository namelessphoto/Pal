#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ButtonStyle.h"
#include "CheckBoxStyle.h"
#include "ComboButtonStyle.h"
#include "EditableTextBoxStyle.h"
#include "Margin.h"
#include "SlateBrush.h"
#include "SlateWidgetStyle.h"
#include "TextBlockStyle.h"
#include "ToolBarStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FToolBarStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ExpandBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush SeparatorBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle LabelStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEditableTextBoxStyle EditableTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCheckBoxStyle ToggleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComboButtonStyle ComboButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle SettingsButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComboButtonStyle SettingsComboButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCheckBoxStyle SettingsToggleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle ButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin LabelPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin SeparatorPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin ComboButtonPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin ButtonPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin CheckBoxPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin BlockPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin IndentedBlockPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin BackgroundPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D IconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowLabels;
    
    FToolBarStyle();
};

