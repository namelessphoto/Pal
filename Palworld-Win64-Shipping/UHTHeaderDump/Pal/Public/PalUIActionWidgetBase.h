#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputType -FallbackName=ECommonInputType
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonActionWidget -FallbackName=CommonActionWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "PalUIActionBindData.h"
#include "PalUIActionWidgetBase.generated.h"

UCLASS()
class PAL_API UPalUIActionWidgetBase : public UCommonActionWidget {
    GENERATED_BODY()
public:
    UPalUIActionWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetActionBinding_ForBP(const FPalUIActionBindData& BindingData);
    
    UFUNCTION(BlueprintCallable)
    void OverrideInputType(ECommonInputType InputType);
    
    UFUNCTION(BlueprintCallable)
    void OverrideImage(FSlateBrush OverrideBrush);
    
protected:
    UFUNCTION()
    void NativeOnActionProgress(float HeldPercent);
    
public:
    UFUNCTION(BlueprintPure)
    FText GetLocalizedDisplayText() const;
    
};

