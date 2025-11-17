#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetSwitcher -FallbackName=WidgetSwitcher
#include "ECommonSwitcherTransition.h"
#include "ETransitionCurve.h"
#include "CommonAnimatedSwitcher.generated.h"

UCLASS()
class COMMONUI_API UCommonAnimatedSwitcher : public UWidgetSwitcher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECommonSwitcherTransition TransitionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETransitionCurve TransitionCurveType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TransitionDuration;
    
public:
    UCommonAnimatedSwitcher();

    UFUNCTION(BlueprintCallable)
    void SetDisableTransitionAnimation(bool bDisableAnimation);
    
    UFUNCTION(BlueprintPure)
    bool IsTransitionPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentlySwitching() const;
    
    UFUNCTION(BlueprintPure)
    bool HasWidgets() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivatePreviousWidget(bool bCanWrap);
    
    UFUNCTION(BlueprintCallable)
    void ActivateNextWidget(bool bCanWrap);
    
};

