#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "RichTextIconData.generated.h"

class UObject;

USTRUCT()
struct COMMONUI_API FRichTextIconData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UObject> ResourceObject;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D ImageSize;
    
    FRichTextIconData();
};

