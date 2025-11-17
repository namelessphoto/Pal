#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "Templates/SubclassOf.h"
#include "CommonWidgetCarouselNavBar.generated.h"

class UCommonButtonBase;
class UCommonButtonGroupBase;
class UCommonWidgetCarousel;

UCLASS()
class COMMONUI_API UCommonWidgetCarouselNavBar : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonButtonBase> ButtonWidgetType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin ButtonPadding;
    
protected:
    UPROPERTY(Instanced)
    UCommonWidgetCarousel* LinkedCarousel;
    
    UPROPERTY()
    UCommonButtonGroupBase* ButtonGroup;
    
    UPROPERTY(Instanced)
    TArray<UCommonButtonBase*> Buttons;
    
public:
    UCommonWidgetCarouselNavBar();

    UFUNCTION(BlueprintCallable)
    void SetLinkedCarousel(UCommonWidgetCarousel* CommonCarousel);
    
protected:
    UFUNCTION()
    void HandlePageChanged(UCommonWidgetCarousel* CommonCarousel, int32 pageIndex);
    
    UFUNCTION()
    void HandleButtonClicked(UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    
};

