#pragma once
#include "CoreMinimal.h"
#include "ComboButtonStyle.h"
#include "Margin.h"
#include "SlateSound.h"
#include "SlateWidgetStyle.h"
#include "ComboBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FComboBoxStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComboButtonStyle ComboButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound PressedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound SelectionChangeSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin ContentPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin MenuRowPadding;
    
    FComboBoxStyle();
};

