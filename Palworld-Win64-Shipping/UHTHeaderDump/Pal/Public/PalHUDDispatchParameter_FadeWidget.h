#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EPalFadeWidgetType.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_FadeWidget.generated.h"

class UPalHUDDispatchParameter_FadeWidget;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_FadeWidget : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFadeWidgetDelegate);
    
    UPROPERTY(BlueprintReadWrite)
    EPalFadeWidgetType FadeWidgetType;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor CustomColor;
    
    UPROPERTY(BlueprintReadWrite)
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShowLoadingProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFadeWidgetDelegate OnStartFadeIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFadeWidgetDelegate OnEndFadeIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFadeWidgetDelegate OnStartFadeOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFadeWidgetDelegate OnEndFadeOut;
    
    UPROPERTY(Transient)
    TArray<FFadeWidgetDelegate> OnStartFadeInMergedDelegates;
    
    UPROPERTY(Transient)
    TArray<FFadeWidgetDelegate> OnEndFadeInMergedDelegates;
    
    UPROPERTY(Transient)
    TArray<FFadeWidgetDelegate> OnStartFadeOutMergedDelegates;
    
    UPROPERTY(Transient)
    TArray<FFadeWidgetDelegate> OnEndFadeOutMergedDelegates;
    
    UPROPERTY(Transient)
    TArray<UPalHUDDispatchParameter_FadeWidget*> OtherFadeParameterHolder;
    
    UPalHUDDispatchParameter_FadeWidget();

    UFUNCTION(BlueprintCallable)
    void CallOnStartFadeOutDelegates();
    
    UFUNCTION(BlueprintCallable)
    void CallOnStartFadeInDelegates();
    
    UFUNCTION(BlueprintCallable)
    void CallOnEndFadeOutDelegates();
    
    UFUNCTION(BlueprintCallable)
    void CallOnEndFadeInDelegates();
    
};

