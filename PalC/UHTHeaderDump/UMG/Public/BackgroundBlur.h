#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EVerticalAlignment -FallbackName=EVerticalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "ContentWidget.h"
#include "BackgroundBlur.generated.h"

UCLASS()
class UMG_API UBackgroundBlur : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyAlphaToBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlurStrength;
    
    UPROPERTY()
    bool bOverrideAutoRadiusCalculation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 BlurRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector4 CornerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush LowQualityFallbackBrush;
    
    UBackgroundBlur();

    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetLowQualityFallbackBrush(const FSlateBrush& InBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetCornerRadius(FVector4 InCornerRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurStrength(float InStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurRadius(int32 InBlurRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
    
};

