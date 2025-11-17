#pragma once
#include "CoreMinimal.h"
#include "EditableTextBoxStyle.h"
#include "SlateWidgetStyle.h"
#include "TextBlockStyle.h"
#include "InlineEditableTextBlockStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FInlineEditableTextBlockStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEditableTextBoxStyle EditableTextBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    FInlineEditableTextBlockStyle();
};

