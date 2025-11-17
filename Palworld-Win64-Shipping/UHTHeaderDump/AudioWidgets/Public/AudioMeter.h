#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "AudioMeterStyle.h"
#include "MeterChannelInfo.h"
#include "AudioMeter.generated.h"

UCLASS()
class AUDIOWIDGETS_API UAudioMeter : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal(TArray<FMeterChannelInfo>, FGetMeterChannelInfo);
    
    UPROPERTY(EditAnywhere)
    TArray<FMeterChannelInfo> MeterChannelInfo;
    
    UPROPERTY()
    FGetMeterChannelInfo MeterChannelInfoDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAudioMeterStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor MeterBackgroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor MeterValueColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor MeterPeakColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor MeterClippingColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor MeterScaleColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor MeterScaleLabelColor;
    
    UAudioMeter();

    UFUNCTION(BlueprintCallable)
    void SetMeterValueColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterScaleLabelColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterScaleColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterPeakColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterClippingColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterChannelInfo(const TArray<FMeterChannelInfo>& InMeterChannelInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetMeterBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintPure)
    TArray<FMeterChannelInfo> GetMeterChannelInfo() const;
    
};

