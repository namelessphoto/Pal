#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
#include "AudioMeterStyle.generated.h"

USTRUCT(BlueprintType)
struct AUDIOWIDGETS_API FAudioMeterStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush MeterValueImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush MeterBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush MeterValueBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush MeterPeakImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D MeterSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D MeterPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MeterValuePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PeakValueWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ValueRangeDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bScaleSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleHashOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleHashWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleHashHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DecibelsPerHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateFontInfo Font;
    
    FAudioMeterStyle();
};

