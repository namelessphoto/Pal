#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EProgressBarFillStyle -FallbackName=EProgressBarFillStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EProgressBarFillType -FallbackName=EProgressBarFillType
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ProgressBarStyle -FallbackName=ProgressBarStyle
#include "Widget.h"
#include "Widget.h"
#include "Widget.h"
#include "ProgressBar.generated.h"

UCLASS()
class UMG_API UProgressBar : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FProgressBarStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EProgressBarFillType> BarFillType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EProgressBarFillStyle> BarFillStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsMarquee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D BorderPadding;
    
    UPROPERTY()
    UWidget::FGetFloat PercentDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FillColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor FillColorAndOpacityDelegate;
    
    UProgressBar();

    UFUNCTION(BlueprintCallable)
    void SetPercent(float InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMarquee(bool InbIsMarquee);
    
    UFUNCTION(BlueprintCallable)
    void SetFillColorAndOpacity(FLinearColor inColor);
    
};

