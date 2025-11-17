#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidgetPool -FallbackName=UserWidgetPool
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "ECommonSwitcherTransition.h"
#include "ETransitionCurve.h"
#include "Templates/SubclassOf.h"
#include "CommonActivatableWidgetContainerBase.generated.h"

class UCommonActivatableWidget;

UCLASS(Abstract)
class COMMONUI_API UCommonActivatableWidgetContainerBase : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ECommonSwitcherTransition TransitionType;
    
    UPROPERTY(EditAnywhere)
    ETransitionCurve TransitionCurveType;
    
    UPROPERTY(EditAnywhere)
    float TransitionDuration;
    
    UPROPERTY(Instanced, Transient)
    TArray<UCommonActivatableWidget*> WidgetList;
    
    UPROPERTY(Instanced, Transient)
    UCommonActivatableWidget* DisplayedWidget;
    
    UPROPERTY(Transient)
    FUserWidgetPool GeneratedWidgetsPool;
    
public:
    UCommonActivatableWidgetContainerBase();

    UFUNCTION(BlueprintCallable)
    void SetTransitionDuration(float Duration);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveWidget(UCommonActivatableWidget* WidgetToRemove);
    
public:
    UFUNCTION(BlueprintPure)
    float GetTransitionDuration() const;
    
    UFUNCTION(BlueprintPure)
    UCommonActivatableWidget* GetActiveWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearWidgets();
    
private:
    UFUNCTION(BlueprintCallable)
    UCommonActivatableWidget* BP_AddWidget(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass);
    
};

