#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SliderStyle -FallbackName=SliderStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnControllerCaptureBeginEvent__DelegateSignature -FallbackName=OnControllerCaptureBeginEventDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnControllerCaptureEndEvent__DelegateSignature -FallbackName=OnControllerCaptureEndEventDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnFloatValueChangedEvent__DelegateSignature -FallbackName=OnFloatValueChangedEventDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnMouseCaptureBeginEvent__DelegateSignature -FallbackName=OnMouseCaptureBeginEventDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnMouseCaptureEndEvent__DelegateSignature -FallbackName=OnMouseCaptureEndEventDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "RadialSlider.generated.h"

UCLASS()
class ADVANCEDWIDGETS_API URadialSlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY()
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(EditAnywhere)
    bool bUseCustomDefaultValue;
    
    UPROPERTY(EditAnywhere)
    float CustomDefaultValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve SliderRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> ValueTags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SliderHandleStartAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SliderHandleEndAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AngularOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D HandStartEndRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSliderStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderBarColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderProgressColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderHandleColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor CenterBackgroundColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool Locked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool MouseUsesStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool RequiresControllerLock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseVerticalDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowSliderHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowSliderHand;
    
    UPROPERTY(BlueprintAssignable)
    FOnMouseCaptureBeginEvent OnMouseCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnMouseCaptureEndEvent OnMouseCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FOnControllerCaptureBeginEvent OnControllerCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnControllerCaptureEndEvent OnControllerCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloatValueChangedEvent OnValueChanged;
    
    URadialSlider();

    UFUNCTION(BlueprintCallable)
    void SetValueTags(const TArray<float>& InValueTags);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUseVerticalDrag(bool InUseVerticalDrag);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderRange(const FRuntimeFloatCurve& InSliderRange);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderProgressColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleStartAngle(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleEndAngle(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBarColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSliderHandle(bool InShowSliderHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSliderHand(bool InShowSliderHand);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHandStartEndRatio(FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDefaultValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCenterBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularOffset(float InValue);
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedSliderHandlePosition() const;
    
    UFUNCTION(BlueprintPure)
    float GetCustomDefaultValue() const;
    
};

