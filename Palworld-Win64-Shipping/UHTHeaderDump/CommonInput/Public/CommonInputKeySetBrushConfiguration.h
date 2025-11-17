#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "CommonInputKeySetBrushConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMONINPUT_API FCommonInputKeySetBrushConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FKey> Keys;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush KeyBrush;
    
    FCommonInputKeySetBrushConfiguration();
};

