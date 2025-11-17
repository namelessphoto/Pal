#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Overlay -FallbackName=Overlay
#include "CommonVisibilitySwitcher.generated.h"

class UWidget;

UCLASS()
class COMMONUI_API UCommonVisibilitySwitcher : public UOverlay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESlateVisibility ShownVisibility;
    
    UPROPERTY(EditAnywhere)
    int32 ActiveWidgetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bAutoActivateSlot;
    
    UPROPERTY(EditAnywhere)
    bool bActivateFirstSlotOnAdding;
    
public:
    UCommonVisibilitySwitcher();

    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidget(const UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void IncrementActiveWidgetIndex(bool bAllowWrapping);
    
    UFUNCTION(BlueprintPure)
    int32 GetActiveWidgetIndex() const;
    
    UFUNCTION(BlueprintPure)
    UWidget* GetActiveWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void DecrementActiveWidgetIndex(bool bAllowWrapping);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateVisibleSlot();
    
    UFUNCTION(BlueprintCallable)
    void ActivateVisibleSlot();
    
};

