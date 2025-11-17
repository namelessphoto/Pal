#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnFloatValueChangedEventDelegate2.h"
#include "AudioSliderBase.generated.h"

UCLASS(Abstract)
class AUDIOWIDGETS_API UAudioSliderBase : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    FText UnitsText;
    
    UPROPERTY(EditAnywhere)
    FLinearColor TextLabelBackgroundColor;
    
    UPROPERTY()
    UWidget::FGetLinearColor TextLabelBackgroundColorDelegate;
    
    UPROPERTY(EditAnywhere)
    bool ShowLabelOnlyOnHover;
    
    UPROPERTY(EditAnywhere)
    bool ShowUnitsText;
    
    UPROPERTY(EditAnywhere)
    bool IsUnitsTextReadOnly;
    
    UPROPERTY(EditAnywhere)
    bool IsValueTextReadOnly;
    
    UPROPERTY()
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SliderBackgroundColor;
    
    UPROPERTY()
    UWidget::FGetLinearColor SliderBackgroundColorDelegate;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SliderBarColor;
    
    UPROPERTY()
    UWidget::FGetLinearColor SliderBarColorDelegate;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SliderThumbColor;
    
    UPROPERTY()
    UWidget::FGetLinearColor SliderThumbColorDelegate;
    
    UPROPERTY(EditAnywhere)
    FLinearColor WidgetBackgroundColor;
    
    UPROPERTY()
    UWidget::FGetLinearColor WidgetBackgroundColorDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloatValueChangedEvent OnValueChanged;
    
    UAudioSliderBase();

    UFUNCTION(BlueprintCallable)
    void SetWidgetBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueTextReadOnly(const bool bIsReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetUnitsTextReadOnly(const bool bIsReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetUnitsText(const FText Units);
    
    UFUNCTION(BlueprintCallable)
    void SetTextLabelBackgroundColor(FSlateColor inColor);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderThumbColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBarColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowUnitsText(const bool bShowUnitsText);
    
    UFUNCTION(BlueprintCallable)
    void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
    
    UFUNCTION(BlueprintCallable)
    float GetSliderValue(const float OutputValue);
    
    UFUNCTION(BlueprintCallable)
    float GetOutputValue(const float InSliderValue);
    
    UFUNCTION(BlueprintCallable)
    float GetLinValue(const float OutputValue);
    
};

