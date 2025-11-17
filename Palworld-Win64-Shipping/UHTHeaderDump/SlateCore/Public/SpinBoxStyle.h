#pragma once
#include "CoreMinimal.h"
#include "Margin.h"
#include "SlateBrush.h"
#include "SlateColor.h"
#include "SlateWidgetStyle.h"
#include "SpinBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FSpinBoxStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ActiveBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush HoveredBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ActiveFillBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush HoveredFillBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush InactiveFillBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ArrowsImage;
    
    UPROPERTY()
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin TextPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin InsetPadding;
    
    FSpinBoxStyle();
};

