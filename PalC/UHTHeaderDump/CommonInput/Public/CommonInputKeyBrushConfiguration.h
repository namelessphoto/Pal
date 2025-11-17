#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "CommonInputKeyBrushConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMONINPUT_API FCommonInputKeyBrushConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush KeyBrush;
    
    FCommonInputKeyBrushConfiguration();
};

