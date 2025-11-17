#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateSound -FallbackName=SlateSound
#include "CommonButtonStyleOptionalSlateSound.generated.h"

USTRUCT(BlueprintType)
struct FCommonButtonStyleOptionalSlateSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound Sound;
    
    COMMONUI_API FCommonButtonStyleOptionalSlateSound();
};

