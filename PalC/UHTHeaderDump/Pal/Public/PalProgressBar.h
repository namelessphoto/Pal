#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ProgressBar -FallbackName=ProgressBar
#include "PalProgressBar.generated.h"

UCLASS()
class PAL_API UPalProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
    UPalProgressBar();

    UFUNCTION(BlueprintCallable)
    void SetFillImage(const FSlateBrush& NewImage);
    
};

