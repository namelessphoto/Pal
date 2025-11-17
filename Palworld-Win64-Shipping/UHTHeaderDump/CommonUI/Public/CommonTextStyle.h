#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "CommonTextStyle.generated.h"

UCLASS(Abstract, BlueprintType)
class COMMONUI_API UCommonTextStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUsesDropShadow;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor ShadowColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMargin Margin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush StrikeBrush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LineHeightPercentage;
    
    UCommonTextStyle();

    UFUNCTION(BlueprintPure)
    void GetStrikeBrush(FSlateBrush& OutStrikeBrush) const;
    
    UFUNCTION(BlueprintPure)
    void GetShadowOffset(FVector2D& OutShadowOffset) const;
    
    UFUNCTION(BlueprintPure)
    void GetShadowColor(FLinearColor& OutColor) const;
    
    UFUNCTION(BlueprintPure)
    void GetMargin(FMargin& OutMargin) const;
    
    UFUNCTION(BlueprintPure)
    float GetLineHeightPercentage() const;
    
    UFUNCTION(BlueprintPure)
    void GetFont(FSlateFontInfo& OutFont) const;
    
    UFUNCTION(BlueprintPure)
    void GetColor(FLinearColor& OutColor) const;
    
};

