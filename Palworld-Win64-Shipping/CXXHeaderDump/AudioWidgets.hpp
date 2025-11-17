#ifndef UE4SS_SDK_AudioWidgets_HPP
#define UE4SS_SDK_AudioWidgets_HPP

#include "AudioWidgets_enums.hpp"

struct FAudioMeterStyle : public FSlateWidgetStyle
{
    FSlateBrush MeterValueImage;
    FSlateBrush BackgroundImage;
    FSlateBrush MeterBackgroundImage;
    FSlateBrush MeterValueBackgroundImage;
    FSlateBrush MeterPeakImage;
    FVector2D MeterSize;
    FVector2D MeterPadding;
    float MeterValuePadding;
    float PeakValueWidth;
    FVector2D ValueRangeDb;
    bool bShowScale;
    bool bScaleSide;
    float ScaleHashOffset;
    float ScaleHashWidth;
    float ScaleHashHeight;
    int32 DecibelsPerHash;
    FSlateFontInfo Font;

};

struct FAudioRadialSliderStyle : public FSlateWidgetStyle
{
    FAudioTextBoxStyle TextBoxStyle;
    FSlateColor CenterBackgroundColor;
    FSlateColor SliderBarColor;
    FSlateColor SliderProgressColor;
    float LabelPadding;
    float DefaultSliderRadius;

};

struct FAudioSliderStyle : public FSlateWidgetStyle
{
    FSliderStyle SliderStyle;
    FAudioTextBoxStyle TextBoxStyle;
    FSlateBrush WidgetBackgroundImage;
    FSlateColor SliderBackgroundColor;
    FVector2D SliderBackgroundSize;
    float LabelPadding;
    FSlateColor SliderBarColor;
    FSlateColor SliderThumbColor;
    FSlateColor WidgetBackgroundColor;

};

struct FAudioTextBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImage;
    FSlateColor BackgroundColor;

};

struct FMeterChannelInfo
{
    float MeterValue;
    float PeakValue;
    float ClippingValue;

};

class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{
};

class UAudioFrequencySlider : public UAudioSliderBase
{
    FVector2D OutputRange;

};

class UAudioMeter : public UWidget
{
    TArray<FMeterChannelInfo> MeterChannelInfo;
    FAudioMeterMeterChannelInfoDelegate MeterChannelInfoDelegate;
    TArray<FMeterChannelInfo> GetMeterChannelInfo();
    FAudioMeterStyle WidgetStyle;
    TEnumAsByte<EOrientation> Orientation;
    FLinearColor BackgroundColor;
    FLinearColor MeterBackgroundColor;
    FLinearColor MeterValueColor;
    FLinearColor MeterPeakColor;
    FLinearColor MeterClippingColor;
    FLinearColor MeterScaleColor;
    FLinearColor MeterScaleLabelColor;

    void SetMeterValueColor(FLinearColor InValue);
    void SetMeterScaleLabelColor(FLinearColor InValue);
    void SetMeterScaleColor(FLinearColor InValue);
    void SetMeterPeakColor(FLinearColor InValue);
    void SetMeterClippingColor(FLinearColor InValue);
    void SetMeterChannelInfo(const TArray<FMeterChannelInfo>& InMeterChannelInfo);
    void SetMeterBackgroundColor(FLinearColor InValue);
    void SetBackgroundColor(FLinearColor InValue);
    TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
    TArray<FMeterChannelInfo> GetMeterChannelInfo();
};

class UAudioRadialSlider : public UWidget
{
    float Value;
    FAudioRadialSliderValueDelegate ValueDelegate;
    float GetFloat();
    TEnumAsByte<EAudioRadialSliderLayout> WidgetLayout;
    FLinearColor CenterBackgroundColor;
    FLinearColor SliderProgressColor;
    FLinearColor SliderBarColor;
    FVector2D HandStartEndRatio;
    FText UnitsText;
    FLinearColor TextLabelBackgroundColor;
    bool ShowLabelOnlyOnHover;
    bool ShowUnitsText;
    bool IsUnitsTextReadOnly;
    bool IsValueTextReadOnly;
    float SliderThickness;
    FVector2D OutputRange;
    FAudioRadialSliderOnValueChanged OnValueChanged;
    void OnAudioRadialSliderValueChangedEvent(float Value);

    void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);
    void SetValueTextReadOnly(const bool bIsReadOnly);
    void SetUnitsTextReadOnly(const bool bIsReadOnly);
    void SetUnitsText(const FText Units);
    void SetTextLabelBackgroundColor(FSlateColor inColor);
    void SetSliderThickness(const float InThickness);
    void SetSliderProgressColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetShowUnitsText(const bool bShowUnitsText);
    void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
    void SetOutputRange(const FVector2D InOutputRange);
    void SetHandStartEndRatio(const FVector2D InHandStartEndRatio);
    void SetCenterBackgroundColor(FLinearColor InValue);
    float GetSliderValue(const float OutputValue);
    float GetOutputValue(const float InSliderValue);
};

class UAudioSlider : public UAudioSliderBase
{
    TWeakObjectPtr<class UCurveFloat> LinToOutputCurve;
    TWeakObjectPtr<class UCurveFloat> OutputToLinCurve;

};

class UAudioSliderBase : public UWidget
{
    float Value;
    FText UnitsText;
    FLinearColor TextLabelBackgroundColor;
    FAudioSliderBaseTextLabelBackgroundColorDelegate TextLabelBackgroundColorDelegate;
    FLinearColor GetLinearColor();
    bool ShowLabelOnlyOnHover;
    bool ShowUnitsText;
    bool IsUnitsTextReadOnly;
    bool IsValueTextReadOnly;
    FAudioSliderBaseValueDelegate ValueDelegate;
    float GetFloat();
    FLinearColor SliderBackgroundColor;
    FAudioSliderBaseSliderBackgroundColorDelegate SliderBackgroundColorDelegate;
    FLinearColor GetLinearColor();
    FLinearColor SliderBarColor;
    FAudioSliderBaseSliderBarColorDelegate SliderBarColorDelegate;
    FLinearColor GetLinearColor();
    FLinearColor SliderThumbColor;
    FAudioSliderBaseSliderThumbColorDelegate SliderThumbColorDelegate;
    FLinearColor GetLinearColor();
    FLinearColor WidgetBackgroundColor;
    FAudioSliderBaseWidgetBackgroundColorDelegate WidgetBackgroundColorDelegate;
    FLinearColor GetLinearColor();
    TEnumAsByte<EOrientation> Orientation;
    FAudioSliderBaseOnValueChanged OnValueChanged;
    void OnFloatValueChangedEvent(float Value);

    void SetWidgetBackgroundColor(FLinearColor InValue);
    void SetValueTextReadOnly(const bool bIsReadOnly);
    void SetUnitsTextReadOnly(const bool bIsReadOnly);
    void SetUnitsText(const FText Units);
    void SetTextLabelBackgroundColor(FSlateColor inColor);
    void SetSliderThumbColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetSliderBackgroundColor(FLinearColor InValue);
    void SetShowUnitsText(const bool bShowUnitsText);
    void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
    float GetSliderValue(const float OutputValue);
    float GetOutputValue(const float InSliderValue);
    float GetLinValue(const float OutputValue);
};

class UAudioVolumeRadialSlider : public UAudioRadialSlider
{
};

class UAudioVolumeSlider : public UAudioSlider
{
};

#endif
