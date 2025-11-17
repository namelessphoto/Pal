#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "EAudioRadialSliderLayout.h"
#include "OnAudioRadialSliderValueChangedEventDelegate.h"
#include "AudioRadialSlider.generated.h"

UCLASS()
class AUDIOWIDGETS_API UAudioRadialSlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY()
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAudioRadialSliderLayout> WidgetLayout;
    
    UPROPERTY(EditAnywhere)
    FLinearColor CenterBackgroundColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SliderProgressColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SliderBarColor;
    
    UPROPERTY(EditAnywhere)
    FVector2D HandStartEndRatio;
    
    UPROPERTY(EditAnywhere)
    FText UnitsText;
    
    UPROPERTY(EditAnywhere)
    FLinearColor TextLabelBackgroundColor;
    
    UPROPERTY(EditAnywhere)
    bool ShowLabelOnlyOnHover;
    
    UPROPERTY(EditAnywhere)
    bool ShowUnitsText;
    
    UPROPERTY(EditAnywhere)
    bool IsUnitsTextReadOnly;
    
    UPROPERTY(EditAnywhere)
    bool IsValueTextReadOnly;
    
    UPROPERTY(EditAnywhere)
    float SliderThickness;
    
    UPROPERTY(EditAnywhere)
    FVector2D OutputRange;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioRadialSliderValueChangedEvent OnValueChanged;
    
    UAudioRadialSlider();

    UFUNCTION(BlueprintCallable)
    void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);
    
    UFUNCTION(BlueprintCallable)
    void SetValueTextReadOnly(const bool bIsReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetUnitsTextReadOnly(const bool bIsReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetUnitsText(const FText Units);
    
    UFUNCTION(BlueprintCallable)
    void SetTextLabelBackgroundColor(FSlateColor inColor);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderThickness(const float InThickness);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderProgressColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBarColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowUnitsText(const bool bShowUnitsText);
    
    UFUNCTION(BlueprintCallable)
    void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputRange(const FVector2D InOutputRange);
    
    UFUNCTION(BlueprintCallable)
    void SetHandStartEndRatio(const FVector2D InHandStartEndRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetCenterBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    float GetSliderValue(const float OutputValue);
    
    UFUNCTION(BlueprintCallable)
    float GetOutputValue(const float InSliderValue);
    
};

