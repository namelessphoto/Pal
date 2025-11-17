#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
#include "PaRichTextDecorator_KeyGuideIcon.generated.h"

class UObject;
class UWidget;

UCLASS(Blueprintable)
class PAL_API UPaRichTextDecorator_KeyGuideIcon : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPaRichTextDecorator_KeyGuideIcon();

protected:
    UFUNCTION(BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    FString GetTextStringInternal(const UObject* WorldContextObject, FName ID);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* CreateWidget(FName KeyGuideActionName, float IconScale, int32 OverrideType);
    
};

