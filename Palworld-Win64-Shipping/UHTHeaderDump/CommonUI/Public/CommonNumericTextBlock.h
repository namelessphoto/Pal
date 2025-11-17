#pragma once
#include "CoreMinimal.h"
#include "CommonNumberFormattingOptions.h"
#include "CommonTextBlock.h"
#include "ECommonNumericType.h"
#include "CommonNumericTextBlock.generated.h"

class UCommonNumericTextBlock;

UCLASS()
class COMMONUI_API UCommonNumericTextBlock : public UCommonTextBlock {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOutro, UCommonNumericTextBlock*, NumericTextBlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInterpolationUpdated, UCommonNumericTextBlock*, NumericTextBlock, float, LastValue, float, NewValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInterpolationStarted, UCommonNumericTextBlock*, NumericTextBlock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpolationEnded, UCommonNumericTextBlock*, NumericTextBlock, const bool, HadCompleted);
    
    UPROPERTY(BlueprintAssignable)
    FOnInterpolationStarted OnInterpolationStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnInterpolationUpdated OnInterpolationUpdatedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnOutro OnOutroEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnInterpolationEnded OnInterpolationEndedEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CurrentNumericValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECommonNumericType NumericType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCommonNumberFormattingOptions FormattingSpecification;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EaseOutInterpolationExponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InterpolationUpdateInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PostInterpolationShrinkDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PerformSizeInterpolation;
    
private:
    UPROPERTY()
    bool IsPercentage;
    
public:
    UCommonNumericTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetNumericType(ECommonNumericType InNumericType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(const float NewValue);
    
    UFUNCTION(BlueprintPure)
    bool IsInterpolatingNumericValue() const;
    
    UFUNCTION(BlueprintCallable)
    void InterpolateToValue(const float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
    
    UFUNCTION(BlueprintPure)
    float GetTargetValue() const;
    
};

