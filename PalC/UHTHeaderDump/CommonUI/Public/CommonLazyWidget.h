#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnLoadGuardStateChangedDynamicDelegate.h"
#include "CommonLazyWidget.generated.h"

class UUserWidget;

UCLASS()
class COMMONUI_API UCommonLazyWidget : public UWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FSlateBrush LoadingBackgroundBrush;
    
    UPROPERTY(Instanced, Transient)
    UUserWidget* Content;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadGuardStateChangedDynamic BP_OnLoadingStateChanged;
    
public:
    UCommonLazyWidget();

    UFUNCTION(BlueprintCallable)
    void SetLazyContent(const TSoftClassPtr<UUserWidget> SoftWidget);
    
    UFUNCTION(BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintPure)
    UUserWidget* GetContent() const;
    
};

