#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockImageDecorator -FallbackName=RichTextBlockImageDecorator
#include "PalRichTextIconDecorator.generated.h"

class UDataTable;

UCLASS()
class PAL_API UPalRichTextIconDecorator : public URichTextBlockImageDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDataTable* ControlKeyIconData;
    
    UPalRichTextIconDecorator();

};

