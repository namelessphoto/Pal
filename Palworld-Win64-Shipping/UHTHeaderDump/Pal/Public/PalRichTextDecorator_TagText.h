#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
#include "PalRichTextDecorator_TagText.generated.h"

class UObject;

UCLASS(Blueprintable)
class PAL_API UPalRichTextDecorator_TagText : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPalRichTextDecorator_TagText();

protected:
    UFUNCTION(BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    FString GetTextStringInternal(const UObject* WorldContextObject, FName ID);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    FString GetTagName();
    
};

