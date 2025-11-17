#pragma once
#include "CoreMinimal.h"
#include "SlateBrush.h"
#include "SlateColor.h"
#include "SlateWidgetStyle.h"
#include "SplitterStyle.h"
#include "TableColumnHeaderStyle.h"
#include "HeaderRowStyle.generated.h"

USTRUCT()
struct SLATECORE_API FHeaderRowStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTableColumnHeaderStyle ColumnStyle;
    
    UPROPERTY(EditAnywhere)
    FTableColumnHeaderStyle LastColumnStyle;
    
    UPROPERTY(EditAnywhere)
    FSplitterStyle ColumnSplitterStyle;
    
    UPROPERTY(EditAnywhere)
    float SplitterHandleSize;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateColor ForegroundColor;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush HorizontalSeparatorBrush;
    
    UPROPERTY(EditAnywhere)
    float HorizontalSeparatorThickness;
    
    FHeaderRowStyle();
};

