#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "PropertyBinding.h"
#include "ColorBinding.generated.h"

UCLASS()
class UMG_API UColorBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UColorBinding();

    UFUNCTION()
    FSlateColor GetSlateValue() const;
    
    UFUNCTION()
    FLinearColor GetLinearValue() const;
    
};

