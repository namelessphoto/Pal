#pragma once
#include "CoreMinimal.h"
#include "SlateBrush.h"
#include "SlateWidgetStyle.h"
#include "ScrollBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FScrollBoxStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BarThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush TopShadowBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BottomShadowBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush LeftShadowBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush RightShadowBrush;
    
    FScrollBoxStyle();
};

