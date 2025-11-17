#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PanelWidget -FallbackName=PanelWidget
#include "OnCurrentPageIndexChangedDelegate.h"
#include "CommonWidgetCarousel.generated.h"

class UWidget;

UCLASS()
class COMMONUI_API UCommonWidgetCarousel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ActiveWidgetIndex;
    
    UPROPERTY(BlueprintAssignable)
    FOnCurrentPageIndexChanged OnCurrentPageIndexChanged;
    
    UCommonWidgetCarousel();

    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void PreviousPage();
    
    UFUNCTION(BlueprintCallable)
    void NextPage();
    
    UFUNCTION(BlueprintPure)
    UWidget* GetWidgetAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetActiveWidgetIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void EndAutoScrolling();
    
    UFUNCTION(BlueprintCallable)
    void BeginAutoScrolling(float ScrollInterval);
    
};

