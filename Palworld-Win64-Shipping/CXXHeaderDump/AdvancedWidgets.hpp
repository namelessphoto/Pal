#ifndef UE4SS_SDK_AdvancedWidgets_HPP
#define UE4SS_SDK_AdvancedWidgets_HPP

class URadialSlider : public UWidget
{
    float Value;
    FRadialSliderValueDelegate ValueDelegate;
    float GetFloat();
    bool bUseCustomDefaultValue;
    float CustomDefaultValue;
    FRuntimeFloatCurve SliderRange;
    TArray<float> ValueTags;
    float SliderHandleStartAngle;
    float SliderHandleEndAngle;
    float AngularOffset;
    FVector2D HandStartEndRatio;
    FSliderStyle WidgetStyle;
    FLinearColor SliderBarColor;
    FLinearColor SliderProgressColor;
    FLinearColor SliderHandleColor;
    FLinearColor CenterBackgroundColor;
    bool Locked;
    bool MouseUsesStep;
    bool RequiresControllerLock;
    float StepSize;
    bool IsFocusable;
    bool UseVerticalDrag;
    bool ShowSliderHandle;
    bool ShowSliderHand;
    FRadialSliderOnMouseCaptureBegin OnMouseCaptureBegin;
    void OnMouseCaptureBeginEvent();
    FRadialSliderOnMouseCaptureEnd OnMouseCaptureEnd;
    void OnMouseCaptureEndEvent();
    FRadialSliderOnControllerCaptureBegin OnControllerCaptureBegin;
    void OnControllerCaptureBeginEvent();
    FRadialSliderOnControllerCaptureEnd OnControllerCaptureEnd;
    void OnControllerCaptureEndEvent();
    FRadialSliderOnValueChanged OnValueChanged;
    void OnFloatValueChangedEvent(float Value);

    void SetValueTags(const TArray<float>& InValueTags);
    void SetValue(float InValue);
    void SetUseVerticalDrag(bool InUseVerticalDrag);
    void SetStepSize(float InValue);
    void SetSliderRange(const FRuntimeFloatCurve& InSliderRange);
    void SetSliderProgressColor(FLinearColor InValue);
    void SetSliderHandleStartAngle(float InValue);
    void SetSliderHandleEndAngle(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetShowSliderHandle(bool InShowSliderHandle);
    void SetShowSliderHand(bool InShowSliderHand);
    void SetLocked(bool InValue);
    void SetHandStartEndRatio(FVector2D InValue);
    void SetCustomDefaultValue(float InValue);
    void SetCenterBackgroundColor(FLinearColor InValue);
    void SetAngularOffset(float InValue);
    float GetValue();
    float GetNormalizedSliderHandlePosition();
    float GetCustomDefaultValue();
};

#endif
